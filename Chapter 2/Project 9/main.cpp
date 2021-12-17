#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  double actual_temperature = 0.0;
  double dew_point_temperature = 0.0;
  double function = 0.0;
  double a = 17.27;
  double b = 237.7;
  double relative_humidity = 0.0;
  cout << "Enter relative humidity (RH): " << endl;
  cin >> relative_humidity;
  cout << "Enter actual temperature: " << endl;
  cin >> actual_temperature;
  function = ((a*actual_temperature)/(b+actual_temperature)) + log(relative_humidity);
  dew_point_temperature =(b*function)/(a-function);
  cout << "The dew point value is approximately " << dew_point_temperature << " degrees Celsius.";
  return 0;
}
