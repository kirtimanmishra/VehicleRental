#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class VehicleManager
{
  unordered_map<VehicleType, vector<Vehicle>> carStore;
  vector<Vehicle> rentedVehicles;

public:
  VehicleManager()
  {
    this->carStore[CAR] = {};
    this->carStore[TRUCK] = {};
    this->carStore[SUV] = {};
    this->carStore[VAN] = {};
    this->carStore[BIKE] = {};
    this->rentedVehicles = {};
  }

  // 2) Register a Vehicle
  // url: /Resister/Vehicle {User} METHOD: POST
  Vehicle addVehicle(Vehicle vehicle)
  {
    VehicleType vehicleType = vehicle.getVehicleType();
    carStore[vehicleType].push_back(vehicle);
    int size = carStore[vehicleType].size();
    string parkingStallNumber = to_string(size);
    vehicle.setParkingStallNumber(parkingStallNumber);
    return vehicle;
  }
  vector<Vehicle> availableVehicles(VehicleType vehicleType)
  {
    vector<Vehicle> vehicles = carStore[vehicleType];
    vector<Vehicle> freeVechicles;
    for (int i = 0; i < vehicles.size(); i++)
    {
      Vehicle currentVehicle = vehicles[i];
      if (currentVehicle.checkStatus())
        freeVechicles.push_back(currentVehicle);
    }
    return freeVechicles;
  }
  Vehicle bookVehicle(string bookingId, VehicleType vehicleType, time_t accessTime, time_t duration, string userEmail)
  {
    vector<Vehicle> vehicles = carStore[vehicleType];
    if (vehicles.size() == 0)
    {
      cout << "No vehicles available " << endl;
      Vehicle Vehicle;
    }
    Vehicle rentedVehicle = carStore[vehicleType].front();
    auto it = carStore[vehicleType].begin();
    carStore[vehicleType].erase(it);
    rentedVehicle.startTrip(bookingId, accessTime, duration, userEmail);
    rentedVehicles.push_back(rentedVehicle);
    return rentedVehicle;
  }
  vector<Vehicle> getRentedVehicles()
  {
    return rentedVehicles;
  }
  Vehicle returnsVehicle(Vehicle vehicle)
  {
    int pos;
    vehicle.endTrip();
    auto it = rentedVehicles.begin();
    for (int i = 0; i < rentedVehicles.size(); i++)
    {
      if (rentedVehicles[i].getLicenceNumber() == vehicle.getLicenceNumber())
      {
        pos = i;
        break;
      }
    }
    rentedVehicles.erase(it + pos);
    addVehicle(vehicle);
    return vehicle;
  }
};
