#include <bits/stdc++.h>
#pragma once
using namespace std;

typedef pair<int, char> P;

int main()
{
  // typedef pair<int, char> P;

  vector<P> a = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
  cout << " print a initial " << endl;
  for (auto it : a)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout << endl;

  int pos;

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i].first == 2)
    {
      pos = i;
      break;
    }
  }

  cout << "pos " << pos << endl;
  auto it = a.begin();
  a.erase(it + pos);

  cout << " print a final " << endl;
  for (auto it : a)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout << endl;
}