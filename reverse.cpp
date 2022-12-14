#include <iostream>
#include <cmath>
#include <cstring>
#include "get_reversed.h"

using namespace std;

void reverse_in_place(std::string &str)
{
  int len = str.length();
  int i;
  for (i = 0; i < floor(len / 2); i = i + 1)
  {
    swap(str[i], str[len - 1 - i]);
  }
}

int main()
{
  string str;
  cin >> str;

  cout << get_reversed(str);

  return 0;
}
