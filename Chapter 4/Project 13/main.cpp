#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  int count = 0;
  double number = 0;
  double dummy = 0;
   cout << "Please enter a floating-point data value > 0 (type in -1 if you want to stop entering in numbers): " << endl;
    cin >> number;
    if(number == -1)
    {
      cout << "The number of numbers you inputted is 0" << endl;
      cout << "The sum of all of the numbers you inputted is 0" << endl;
      cout << "The mean of the numbers you inputted is 0" << endl;
      cout << "The standard deviation of the numbers you inputted is 0" << endl;
      return 0;
    }
  count++;
  while (dummy !=-1)
  {
    if(number==-1)
    {
      break;
    }
    cout << "Please enter another floating-point data value > 0 (type in -1 if you want to stop entering in numbers): " << endl;
    cin >> dummy;
    number += dummy;
    count++;
  }
  count--;
  number++;
  cout << "The number of numbers you inputted is " << count << endl;
  cout << "The sum of all of the numbers you inputted is " << number << endl;
  double average = number/count;
  double standard_deviation = sqrt(((pow(number,2))-(1/number)*(pow(number,2)))/(number-1));
  if(count==1)
  {
    standard_deviation = 0;
  }
  cout << "The mean of the numbers you inputted is " << average << endl;
  cout << "The standard_deviation of the numbers you inputted is " << standard_deviation << endl;
  return 0;
}
