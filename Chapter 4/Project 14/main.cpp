#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
  int count = 0;
  cout << "Enter the number of elements desired: ";
  cin >> count;
  int first = 0;
  int second = 1;
  int third;
  cout << first << " " << second << " ";
  for(int i = 2; i < count; i++)
  {
    third = first + second;
    cout << third << " ";
    first = second;
    second = third;
  }
  return 0;
}
