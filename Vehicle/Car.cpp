#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Car : public Vehicle
{
  string licenceNumber;
  int barCode;

public:
  Car(string licenceNumber) : Vehicle(licenceNumber, CAR, barCode) {}
};