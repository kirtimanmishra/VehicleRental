#include <bits/stdc++.h>
#pragma once
using namespace std;

class Location
{
  int x;
  int y;

public:
  Location() {}
  Location(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  int getX()
  {
    return x;
  }
  int getY()
  {
    return y;
  }
  double Distabce(Location l)
  {
    int lx = l.getX();
    int ly = l.getY();
    return abs(x - lx) * abs(x - lx) + abs(y - ly) * abs(y - ly);
  }
};