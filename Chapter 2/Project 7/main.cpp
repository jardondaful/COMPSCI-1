#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  string phone_number = "";
  string altered = "";
  cout << "Enter a ten-digit phone number: ";
  cin >> phone_number;
  altered += "(" + phone_number.substr(0,3) + ") " + phone_number.substr(3,3) + "-" + phone_number.substr(6);
  cout << "The phone number is: " << altered;
  return 0;
}
