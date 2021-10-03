#include <bits/stdc++.h>
#include "VehicleType.cpp"
#include "../User/User.cpp"
#include "VehicleStatus.cpp"

#pragma once
using namespace std;

class Vehicle
{
  string licenceNumber;
  VehicleType vehicleType;
  string parkingStallNumber;
  int barCode;
  bool isAvailable;
  VehicleStatus vehicleStatus;
  time_t accessTime;
  time_t duration;
  string userEmail;

public:
  Vehicle(string licenceNumber, VehicleType vehicleType, int barCode)
  {
    this->licenceNumber = licenceNumber;
    this->vehicleType = vehicleType;
    this->isAvailable = true;
    this->vehicleStatus = PARKED;
    this->accessTime = 0;
    this->barCode = barCode;
  }
  string Details()
  {
    return " " + licenceNumber + " ";
  }
  VehicleType getVehicleType()
  {
    return vehicleType;
  }
  void setParkingStallNumber(string parkingStallNumber)
  {
    this->parkingStallNumber = parkingStallNumber;
  }
  string getParkingStallNumber()
  {
    string str = to_string(vehicleType) + parkingStallNumber;
    return str;
  }
  void setUser(string userEmail)
  {
    this->userEmail = userEmail;
  }
};