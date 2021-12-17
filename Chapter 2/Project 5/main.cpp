#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  int number_of_books = 0;
  double tax_rate = 0.075;
  double total = 0.0;
  int shipping_charge = 2;
  cout << "Enter the total price of the books: " << endl;
  cin >> total;
  cout << "Enter the number of books purchased: " << endl;
  cin >> number_of_books;
  total += total * (1 + tax_rate) + shipping_charge * number_of_books;
  cout << "The price of the order is "<< total << setprecision(2);
}
