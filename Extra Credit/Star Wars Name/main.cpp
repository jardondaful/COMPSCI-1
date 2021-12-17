#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
  string firstname;
  string lastname;
  string homecity;
  string mother_maiden_name;
  cout << "Please enter your first name: ";
  cin >> firstname;
  cout << "Please enter your last name: ";
  cin >> lastname;
  transform(lastname.begin(), lastname.end(), lastname.begin(), ::tolower);
  cout << "Please enter your mother's maiden name: ";
  cin >> mother_maiden_name;
  cout << "Please enter the city you were born in: ";
  cin >> homecity;
  transform(homecity.begin(), homecity.end(), homecity.begin(), ::tolower);
  cout << "Your star wars name is: " << firstname.substr(0,3) << lastname.substr(0,2) << " " << mother_maiden_name.substr(0,2) <<homecity.substr(0,3);
  return 0;
}
