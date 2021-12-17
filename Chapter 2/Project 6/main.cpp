#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
  double total_discount = 0.0;
  int number_of_movie_rentals = 0;
  int members_referred = 0;
  cout << "Enter the number of movie rentals: " << endl;
  cin >> number_of_movie_rentals;
  cout << "Enter the number of members referred to the video club: " << endl;
  cin >> members_referred;
  total_discount = number_of_movie_rentals + members_referred;
  if (total_discount > 75)
  {
    total_discount = 75.00;
  }
  cout << "The discount is equal to: " << setprecision(2)<< fixed<<total_discount << " percent.";
}
