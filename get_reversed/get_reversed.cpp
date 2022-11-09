#include <string>
#include "get_reversed.h"
using namespace std;

std::string get_reversed(std::string str)
{
  std::string reversed;

  for (int i = str.length(); i >= 0; i--)
  {
    reversed += str[i];
  }

  return reversed;
}
