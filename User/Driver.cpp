#include <bits/stdc++.h>
#include "Account.cpp"
#pragma once
using namespace std;

class Driver : public Account
{
public:
  Driver() {}
  Driver(string email, string phone) : Account(email, phone) {}
};