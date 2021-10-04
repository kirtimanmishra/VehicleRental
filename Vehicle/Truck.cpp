#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Truck : public Vehicle
{
  string licenceNumber;
  int barCode;

public:
  Truck(string licenceNumber) : Vehicle(licenceNumber, TRUCK, barCode) {}
};