#include <bits/stdc++.h>
#include "Vehicle/Vehicle.cpp"

#pragma once
using namespace std;

class Car : public Vehicle
{
  string licenceNumber;

public:
  Car(string licenceNumber) : Vehicle(licenceNumber, CAR) {}
};