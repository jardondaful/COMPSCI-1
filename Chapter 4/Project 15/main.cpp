#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
  int number = 0;
  int count = 1;
  cout << "Enter the upper bound that the prime numbers can reach: ";
  cin >> number;
  while (count <=number)
  {
    bool prime = true;
    if(count%1==0 && count%count == 0)
    {
      for(int i = 2; i < count; i++)
      {
        if(count%i==0)
        {
          prime = false;
        }
      }
    }
    if(prime && count!=1 && count!=0)
    {
    cout<<count<<" ";
    }
    count++;
  }
  return 0;
}
