#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Van : public Vehicle
{
  string licenceNumber;
  int barCode;

public:
  Van(string licenceNumber) : Vehicle(licenceNumber, VAN, barCode) {}
};