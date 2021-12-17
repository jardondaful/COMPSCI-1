#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int sum = 0;
  for(int i = 0; i <1000; i++)
  {
    if(i%3==0 || i%5==0)
    {
      sum+=i;
    }
  }
  cout << "The sum of all multiples of 3 or five below 1000 is: " << sum;
  return 0;
}
