#include <bits/stdc++.h>
#include "Account.cpp"
#pragma once
using namespace std;

class User : public Account
{
public:
  User() {}
  User(string email, string phone) : Account(email, phone) {}
};