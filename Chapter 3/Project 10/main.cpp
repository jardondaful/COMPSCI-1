#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
 string letter = ""; 
 double number_grade = 0;
 cout << "Enter a letter grade: ";
 cin >> letter;
 bool valid = true;
 if(letter=="A+"||letter=="A"||letter=="A-"||letter=="B+"||letter=="B"||letter=="B-"||letter=="C+"||letter=="C"||letter=="C-"||letter=="D+"||letter=="D"||letter=="D-"||letter=="F")
   {
     valid = true;
   }
   else
   {
     valid = false;
   }

  while (valid == false) 
  {
  cout << "Letter grade is not valid. Enter another letter grade: ";
  cin >> letter;
  if(letter=="A+"||letter=="A"||letter=="A-"||letter=="B+"||letter=="B"||letter=="B-"||letter=="C+"||letter=="C"||letter=="C-"||letter=="D+"||letter=="D"||letter=="D-"||letter=="F")
    {
      valid = true;
      break;
    }
  }
  
  if(valid == true) 
  {
  if (letter == "A" || letter == "A+")
  {
      number_grade = 4.0;
  }
  else if(letter == "A-")
  {
      number_grade = 3.7;
  }
  else if(letter == "B+")
  {
      number_grade = 3.3;
  }
  else if (letter == "B")
  {
      number_grade = 3.0;
  }
  else if(letter == "B-")
  {
      number_grade = 2.7;
  }
  else if(letter == "C+")
  {
      number_grade = 2.3;
  }
  else if (letter == "C")
  {
      number_grade = 2.0;
  }
  else if (letter == "C-")
  {
      number_grade = 1.7;
  }
  else if (letter == "D+")
  {
      number_grade = 1.3;
  }
  else if (letter == "D")
  {
      number_grade = 1.0;
  }
  else if (letter == "D-")
  {
      number_grade = 0.7;
  }
  else
  {
      number_grade = 0.0;
  }
  }
  
  cout << "The numeric value is " <<fixed<< setprecision(1)<<number_grade<<".";
  return 0;
}
