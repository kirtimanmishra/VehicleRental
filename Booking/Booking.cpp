#include <bits/stdc++.h>
#include "../Vehicle/VehicleManager.cpp"
#include "../User/UserManager.cpp"
#include "../User/User.cpp"
#include "../Vehicle/VehicleType.cpp"
#include "../Vehicle/VehicleRent.cpp"
#include "../Vehicle/Car.cpp"

#pragma once
using namespace std;

class Booking
{
  string bookingId;
  VehicleManager vehicleManager;
  User user;
  VehicleType vehicleType;
  vector<Vehicle> freeVechicles;
  time_t accessTime;
  time_t duration;

public:
  Booking(string bookingId, VehicleManager vehicleManager, User user, VehicleType vehicleType, time_t accessTime, time_t duration)
  {
    this->bookingId = bookingId;
    this->vehicleManager = vehicleManager;
    this->user = user;
    this->vehicleType = vehicleType;
    this->accessTime = accessTime;
    this->duration = duration;
  }

  // 3) List of Available Vehicles
  // url: /Vehicles/availableVehicle {vehicleStatus:available, vehicleType:vehicleType} METHOD: GET
  vector<Vehicle> availableVehicles()
  {
    vector<Vehicle> freeVechicles;
    vector<Vehicle> freeCars = vehicleManager.availableVehicles(CAR);
    vector<Vehicle> freeSuv = vehicleManager.availableVehicles(SUV);
    vector<Vehicle> freeBike = vehicleManager.availableVehicles(BIKE);
    vector<Vehicle> freeTruck = vehicleManager.availableVehicles(TRUCK);
    vector<Vehicle> freeVan = vehicleManager.availableVehicles(VAN);

    for (auto it : freeCars)
    {
      freeVechicles.push_back(it);
    }
    for (auto it : freeSuv)
    {
      freeVechicles.push_back(it);
    }
    for (auto it : freeBike)
    {
      freeVechicles.push_back(it);
    }
    for (auto it : freeTruck)
    {
      freeVechicles.push_back(it);
    }
    for (auto it : freeVan)
    {
      freeVechicles.push_back(it);
    }
    return freeVechicles;
  }

  // 4) Book a Vehicle
  // url: /Book/vehicle METHOD: GET
  Vehicle bookVehicle()
  {
    string userEmail = user.getEmail();
    Vehicle rentedVehicle = vehicleManager.bookVehicle(bookingId, vehicleType, accessTime, duration, userEmail);
    return rentedVehicle;
  }
  // 5) Calculate Amount
  // url: /Amount/vehicle/:vehicleId METHOD: GET
  float paymentAmout(Vehicle vehicle)
  {
    VehicleRent vehicleRent;
    float amout = vehicleRent.getRate(vehicle);
    return amout * duration;
  }
  // 6) Return a Vehicle
  // url: /Return/vehicle/:vehicleId METHOD: GET
  Vehicle returnVehicle(Vehicle vehicle)
  {
    vehicle = vehicleManager.returnsVehicle(vehicle);
    return vehicle;
  }
  // 7) List of Rented Vehicles
  // url: /Vehicles/rentedVehicle METHOD: GET
  vector<Vehicle> rentedVehicles()
  {
    return vehicleManager.getRentedVehicles();
  }
  // 8) Locate a vehicle
  // url: /Locate/vehicle/:vehicleId
  string locateVehicleDetails(Vehicle vehicle)
  {
    if (!vehicle.checkStatus())
    {
      string res = vehicle.getBookingDetails() + "  " + vehicle.getUser();
      return res;
    }
    string parkingNumber = vehicle.getParkingStallNumber();
    return parkingNumber;
  }
};
