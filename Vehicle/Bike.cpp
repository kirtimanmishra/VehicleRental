#include <bits/stdc++.h>
#include "Vehicle/Vehicle.cpp"

#pragma once
using namespace std;

class Bike : public Vehicle
{
  string licenceNumber;

public:
  Bike(string licenceNumber) : Vehicle(licenceNumber, BIKE) {}
};