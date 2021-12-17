#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  double R1 = 0.0;
  double R2 = 0.0;
  double R3 = 0.0;
  double total = 0.0;
  cout << "Enter R1: " << endl;
  cin >> R1;
  cout << "Enter R2: " << endl;
  cin >> R2;
  cout << "Enter R3: " << endl;
  cin >> R3;
  total += R1 + pow(((1/R2) + (1/R3)),-1);
  cout << "Total resistance: " << total;
  return 0;
}
