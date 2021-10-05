#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Truck : public Vehicle
{
public:
  Truck(string licenceNumber, int barCode) : Vehicle(licenceNumber, TRUCK, barCode) {}
};