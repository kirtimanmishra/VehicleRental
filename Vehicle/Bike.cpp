#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Bike : public Vehicle
{
public:
  Bike(string licenceNumber, int barCode) : Vehicle(licenceNumber, BIKE, barCode) {}
};