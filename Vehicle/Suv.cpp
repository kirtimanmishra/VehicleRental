#include <bits/stdc++.h>
#include "Vehicle/Vehicle.cpp"

#pragma once
using namespace std;

class Suv : public Vehicle
{
  string licenceNumber;

public:
  Suv(string licenceNumber) : Vehicle(licenceNumber, SUV) {}
};