#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class VehicleManager
{
  unordered_map<VehicleType, vector<Vehicle>> carStore;
  vector<Vehicle> rentedCars;

public:
  VehicleManager()
  {
    this->carStore[CAR] = {};
    this->carStore[TRUCK] = {};
    this->carStore[SUV] = {};
    this->carStore[VAN] = {};
    this->carStore[BIKE] = {};
    this->rentedCars = {};
  }

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
};