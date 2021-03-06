#include <bits/stdc++.h>
#include "User.cpp"
#pragma once
using namespace std;

class UserManager
{
  unordered_map<string, User> Users;

public:
  // 1) Register a User
  // url: /Resister/User {User} METHOD: POST
  User AddUser(User user)
  {
    string email = user.getEmail();
    if (Users.find(email) != Users.end())
    {
      cout << "User already exists " << endl;
      return user;
    }
    Users[email] = user;
    return user;
  }
  int UsersSize()
  {
    return Users.size();
  }
};