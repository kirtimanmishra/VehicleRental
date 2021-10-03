#include <bits/stdc++.h>
#include "Vehicle/Vehicle.cpp"

#pragma once
using namespace std;

class Van : public Vehicle
{
  string licenceNumber;

public:
  Van(string licenceNumber) : Vehicle(licenceNumber, VAN) {}
};