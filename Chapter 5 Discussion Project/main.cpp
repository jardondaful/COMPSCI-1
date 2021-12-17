#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
  int colors_in_print;
  int number_of_shirts;
  int sides_to_print_on;
  string size;
  double cost = 0;
  cout<<"Enter the number of colors desired in the print of the t-shirts (must be a number between 1-5 inclusive): ";
  cin>>colors_in_print;
  cout<<"Enter the number of shirts desired to purchase for one size (at least 12): ";
  cin>>number_of_shirts;
  cout<<"Enter the number of sides that the print goes on for each shirt: ";
  cin>>sides_to_print_on;
  cout<<"Enter the size desired in this quote (can be from size Youth to size 5XL): ";
  cin>>size;
  if(number_of_shirts<300)
  {
    if(colors_in_print==1)
    {
    if(sides_to_print_on==2)
    {
      cost+=(number_of_shirts)*3;
    }
    if(number_of_shirts<=24 && number_of_shirts>=12)
    {
      if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*19.69);
      }
      else if((size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0))
      {
      cost+=(number_of_shirts*19.99);
      }
      else
      {
        cost+=(number_of_shirts*21.64);
      }
    }
    else if(number_of_shirts>=25 && number_of_shirts<=49)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*9.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*9.99);
      }
      else
      {
        cost+=(number_of_shirts*11.64);
      }
    }
    else if(number_of_shirts>=50 && number_of_shirts<=199)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*7.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*8.00);
      }
      else
      {
        cost+=(number_of_shirts*9.65);
      }
    }
    else if(number_of_shirts>200 && number_of_shirts<=299)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*6.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*7.00);
      }
      else
      {
        cost+=(number_of_shirts*8.65);
      }
    }
    }
    else if(colors_in_print==2)
    {
    if(sides_to_print_on==2)
    {
      cost+=(number_of_shirts)*3;
    }
    if(number_of_shirts<=24 && number_of_shirts>=12)
    {
      if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*20.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*21.99);
      }
      else
      {
        cost+=(number_of_shirts*22.64);
      }
    }
    else if(number_of_shirts>=25 && number_of_shirts<=49)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*11.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*11.99);
      }
      else
      {
        cost+=(number_of_shirts*12.64);
      }
    }
    else if(number_of_shirts>=50 && number_of_shirts<=199)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*9.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*10.00);
      }
      else
      {
        cost+=(number_of_shirts*11.65);
      }
    }
    else if(number_of_shirts>200 && number_of_shirts<=299)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*8.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*9.00);
      }
      else
      {
        cost+=(number_of_shirts*10.65);
      }
    }
    }
    if(colors_in_print==3)
    {
    if(sides_to_print_on==2)
    {
      cost+=(number_of_shirts)*3;
    }
    if(number_of_shirts<=24 && number_of_shirts>=12)
    {
      if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*21.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*22.99);
      }
      else
      {
        cost+=(number_of_shirts*23.64);
      }
    }
    else if(number_of_shirts>=25 && number_of_shirts<=49)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*12.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*12.99);
      }
      else
      {
        cost+=(number_of_shirts*13.64);
      }
    }
    else if(number_of_shirts>=50 && number_of_shirts<=199)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*10.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*11.00);
      }
      else
      {
        cost+=(number_of_shirts*12.65);
      }
    }
    else if(number_of_shirts>200 && number_of_shirts<=299)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*9.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*10.00);
      }
      else
      {
        cost+=(number_of_shirts*11.65);
      }
    }
    }
    else if(colors_in_print==4)
    {
    if(sides_to_print_on==2)
    {
      cost+=(number_of_shirts)*3;
    }
    if(number_of_shirts<=24 && number_of_shirts>=12)
    {
      if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*22.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*23.99);
      }
      else
      {
        cost+=(number_of_shirts*24.64);
      }
    }
    else if(number_of_shirts>=25 && number_of_shirts<=49)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*13.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*13.99);
      }
      else
      {
        cost+=(number_of_shirts*14.64);
      }
    }
    else if(number_of_shirts>=50 && number_of_shirts<=199)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*11.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*12.00);
      }
      else
      {
        cost+=(number_of_shirts*13.65);
      }
    }
    else if(number_of_shirts>200 && number_of_shirts<=299)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*10.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*11.00);
      }
      else
      {
        cost+=(number_of_shirts*12.65);
      }
    }
    }
    else if(colors_in_print==5)
    {
    if(sides_to_print_on==2)
    {
      cost+=(number_of_shirts)*3;
    }
    if(number_of_shirts<=24 && number_of_shirts>=12)
    {
      if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*23.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*24.99);
      }
      else
      {
        cost+=(number_of_shirts*25.64);
      }
    }
    else if(number_of_shirts>=25 && number_of_shirts<=49)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*14.69);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*14.99);
      }
      else
      {
        cost+=(number_of_shirts*15.64);
      }
    }
    else if(number_of_shirts>=50 && number_of_shirts<=199)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*12.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*13.00);
      }
      else
      {
        cost+=(number_of_shirts*14.65);
      }
    }
    else if(number_of_shirts>200 && number_of_shirts<=299)
    {
       if(size.compare("Youth")==0)
      {
        cost+=(number_of_shirts*11.70);
      }
      else if(size.compare("S")==0||size.compare("M")==0||size.compare("L")==0||size.compare("XL")==0)
      {
      cost+=(number_of_shirts*12.00);
      }
      else
      {
        cost+=(number_of_shirts*13.65);
      }
    }
    }
  }
  else
  {
    cout<<"Call for quote";
  }
  cout<< "Total quote is: $" << fixed<<setprecision(2)<<cost;
  return 0;
}
