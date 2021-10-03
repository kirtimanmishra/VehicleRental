#include <bits/stdc++.h>
#include "Vehicle/Vehicle.cpp"

#pragma once
using namespace std;

class Truck : public Vehicle
{
  string licenceNumber;

public:
  Truck(string licenceNumber) : Vehicle(licenceNumber, TRUCK) {}
};