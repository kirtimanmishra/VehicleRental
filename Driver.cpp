#include <bits/stdc++.h>
#include "Vehicle/VehicleManager.cpp"
#include "User/UserManager.cpp"
#include "User/User.cpp"
#include "Vehicle/VehicleType.cpp"
#include "Vehicle/VehicleRent.cpp"
#include "Booking/Booking.cpp"

#include "Vehicle/Car.cpp"
#include "Vehicle/Suv.cpp"
#include "Vehicle/Truck.cpp"
#include "Vehicle/Van.cpp"
#include "Vehicle/Bike.cpp"

#pragma once
using namespace std;

int main()
{
  User kirti("kirti@gmail.com", "7002109950");
  User mani("mani@gmail.com", "7002109951");
  User vamsi("vamsi@gmail.com", "7002109952");
  User shahul("shahul@gmail.com", "7002109953");

  UserManager userManager;

  // 1) DRIVER: Register a User
  // url: /Resister/User {User} METHOD: POST

  userManager.AddUser(kirti);
  userManager.AddUser(mani);
  userManager.AddUser(vamsi);
  userManager.AddUser(shahul);

  // cout << "Users size " << userManager.UsersSize() << endl;

  // 2) DRIVER: Register a Vehicle
  // url: /Resister/Vehicle {User} METHOD: POST
  Car car("licenceCar", 123456);
  Suv suv("licenceSuv", 353646);
  Truck truck("licenceTruck", 124352);
  Van van("licenceVan", 293569);
  Bike bike("licenceBike", 366281);

  VehicleManager vehicleManager;

  vehicleManager.addVehicle(car);
  vehicleManager.addVehicle(suv);
  vehicleManager.addVehicle(truck);
  vehicleManager.addVehicle(van);
  vehicleManager.addVehicle(bike);

  // DRIVER: 3) List of Available Vehicles
  // url: /Vehicles/availableVehicle {vehicleStatus:available, vehicleType:vehicleType} METHOD: GET

  Booking booking("booking 12345", vehicleManager, vamsi, CAR, 123, 20);
  vector<Vehicle> avaialblevehicles = booking.availableVehicles();
  cout << "Available vehicles size " << avaialblevehicles.size() << endl;
  for (int i = 0; i < avaialblevehicles.size(); i++)
  {
    cout << "vehicle licence " << avaialblevehicles[i].getLicenceNumber() << " vehicle type " << avaialblevehicles[i].getVehicleType() << " vehicle parkingStallNumber " << avaialblevehicles[i].getParkingStallNumber() << endl;
  }
}