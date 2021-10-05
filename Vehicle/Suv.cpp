#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Suv : public Vehicle
{

public:
  Suv(string licenceNumber, int barCode) : Vehicle(licenceNumber, SUV, barCode) {}
};