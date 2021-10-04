#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Suv : public Vehicle
{
  string licenceNumber;
  int barCode;

public:
  Suv(string licenceNumber) : Vehicle(licenceNumber, SUV, barCode) {}
};