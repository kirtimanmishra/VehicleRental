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
  int barCode;
  string parkingStallNumber;
  bool isAvailable;
  VehicleStatus vehicleStatus;
  time_t accessTime;
  time_t duration;
  string userEmail;
  string bookingId;

public:
  Vehicle() {}
  Vehicle(string licenceNumber, VehicleType vehicleType, int barCode)
  {
    this->licenceNumber = licenceNumber;
    this->vehicleType = vehicleType;
    this->isAvailable = true;
    this->vehicleStatus = PARKED;
    this->accessTime = 0;
    this->barCode = barCode;
    this->bookingId = "";
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
  bool checkStatus()
  {
    return isAvailable == true;
  }
  void startTrip(string bookingId, time_t accessTime, time_t duration, string userEmail)
  {

    isAvailable = false;
    vehicleStatus = RIDE;
    this->accessTime = accessTime;
    this->duration = duration;
    this->userEmail = userEmail;
    this->bookingId = bookingId;
  }
  void endTrip()
  {
    isAvailable = true;
    vehicleStatus = PARKED;
    this->accessTime = 0;
    this->duration = 0;
    this->userEmail = "";
    this->bookingId = "";
  }
  string getUser()
  {
    return userEmail;
  }
  string getBookingDetails()
  {
    return bookingId;
  }
};