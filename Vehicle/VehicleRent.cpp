#include <bits/stdc++.h>
#pragma once
#include "VehicleType.cpp"
using namespace std;

class VehicleRent
{
  unordered_map<VehicleType, float> VehicleRents;

public:
  VehicleRent()
  {
    VehicleRents[TRUCK] = 2.0;
    VehicleRents[VAN] = 1.75;
    VehicleRents[SUV] = 1.5;
    VehicleRents[CAR] = 1.25;
    VehicleRents[BIKE] = 1.0;
  }
};