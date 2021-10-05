#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Van : public Vehicle
{

public:
  Van(string licenceNumber, int barCode) : Vehicle(licenceNumber, VAN, barCode) {}
};