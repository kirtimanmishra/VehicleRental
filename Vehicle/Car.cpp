#include <bits/stdc++.h>
#include "Vehicle.cpp"

#pragma once
using namespace std;

class Car : public Vehicle
{
public:
  Car(string licenceNumber, int barCode) : Vehicle(licenceNumber, CAR, barCode) {}
};