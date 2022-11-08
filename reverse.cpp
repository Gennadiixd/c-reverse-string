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

void reverse_in_place(string *str)
{
  &str[1] = "x"
  // string *p = &str[1];
  // *p = "x";

  // int len = strlen(*str);
  // int i;
  // for (i = 0; i < floor(len / 2); i = i + 1)
  // {
  //   *str[i] = 'd';
  // }

  
}

int main()
{
  string str;
  cin >> str;

  string *ptr = &str;

  reverse_in_place(ptr);

  cout << *ptr;

  return 0;
}
