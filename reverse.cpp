#include <iostream>
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

int main()
{
  string str;
  cin >> str;

  string reversed = get_reversed(str);

  cout << reversed;

  return 0;
}
