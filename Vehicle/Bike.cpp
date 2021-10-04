#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Bike : public Vehicle
{
  string licenceNumber;
  int barCode;

public:
  Bike(string licenceNumber) : Vehicle(licenceNumber, BIKE, barCode) {}
};