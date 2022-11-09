#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

string get_reversed(string str)
{
  string reversed;

  for (int i = str.length(); i >= 0; i--)
  {
    reversed += str[i];
  }

  return reversed;
}

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

  reverse_in_place(str);

  cout << str;

  return 0;
}
