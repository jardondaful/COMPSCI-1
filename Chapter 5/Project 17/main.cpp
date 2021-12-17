#include <iostream>
#include <string>

using namespace std;


string number_to_grade(double x)
{
   if (x >= 3.5) { return "A"; }
   if (x >= 2.5) { return "B"; }
   if (x >= 1.5) { return "C"; }
   if (x >= 0.5) { return "D"; }
   return "F";
}

int main()
{
  double a;
  cout<<"Enter a GPA: ";
  cin>>a;
  string grade = number_to_grade(a);
  if(grade=="A")
  {
     if(a-4 >=0.15)
     {
         grade+="+";
     }
     else if(a-4 >= -0.15 && a-4<0.15)
     {
         grade+="";
     }
     else
     {
         grade+="-";
     }
  }
  else if (grade=="B")
  {
     if(a-3 >=0.15)
     {
         grade+="+";
     }
     else if(a-3 >= -0.15 && a-3<0.15)
     {
         grade+="";
     }
     else
     {
         grade+="-";
     }
  }
  else if (grade=="C")
  {
    if(a-2 >=0.15)
    {
      grade+="+";
    }
    else if(a-2 >= -0.15 && a-2<0.15)
    {
      grade+="";
    }
    else
    {
      grade+="-";
    }
  }
  else if (grade=="D")
  {
    if(a-1 >=0.15)
    {
      grade+="+";
    }
    else if(a-1 >= -0.15 && a-1<0.15)
    {
      grade+="";
    }
    else
    {
      grade+="-";
    }
  }
  else
  {
    grade+="";
  }
  cout<<grade;
  return 0;
}

