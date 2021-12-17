#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
  int month = 0;
  int day = 0;
  string sign = "";
  cout << "Please enter your birthday (month and day): ";
  cin >> month;
  cin >> day;
  if(month == 3)
  {
    if(day > 20)
    {
      sign+="Aries";
    }
    else 
    {
      sign+= "Pisces";
    }
  }
  else if(month == 4)
  {
    if(day > 19)
    {
      sign += "Taurus";
    }
    else
    {
      sign+="Aries";
    }
  }
  else if(month == 5)
  {
    if(day > 20)
    {
      sign += "Gemini";
    }
    else
    {
      sign+="Taurus";
    }
  }
  else if(month == 6)
  {
    if(day > 20)
    {
      sign += "Cancer";
    }
    else
    {
      sign+="Gemini";
    }
  }
  else if(month == 7)
  {
    if(day > 22)
    {
      sign += "Leo";
    }
    else
    {
      sign+="Cancer";
    }
  }
  else if(month == 8)
  {
    if(day > 22)
    {
      sign += "Virgo";
    }
    else
    {
      sign+="Leo";
    }
  }
  else if(month == 9)
  {
    if(day > 22)
    {
      sign+= "Libra";
    }
    else 
    {
      sign+= "Virgo";
    }
  }
  else if (month == 10)
  {
    if(day > 22)
    {
      sign += "Scorpio";
    }
    else
    {
      sign+="Libra";
    }
    
  }
  else if (month == 11)
  {
    if(day > 21)
    {
      sign += "Sagittarius";
    }
    else
    {
      sign+="Scorpio";
    }
  }
  else if (month == 12)
  {
    if(day>21)
    {
      sign+="Capricorn";
    }
    else
    {
    sign+="Sagittarius";
    }
  }
  else if (month == 1)
  {
    if (day > 19)
    {
      sign+="Aquarius";
    }
    else
    {
      sign+= "Capricorn";
    }
  }
  else
  {
    if(day > 18)
    {
      sign+="Pisces";
    }
    else
    {
      sign+="Aquarius";
    }
  }
  if(sign=="Aries")
  {
      cout<<"Aries are naturally good at programming. Others view you as a genius in a computer science class when the teacher gives classwork that has to do with applying a new concept. You will get a complement from your computer science teacher today about how fast you learn when you turn in your classwork that day.";
  }
  else if(sign=="Taurus")
  {
      cout << "Tauruses take longer than the average person to learn computer science. However, once you master a certain concept, you will understand its nuances much better than the average person. Although you will spend longer than normal on computer science homework, you will score on eof the highest scores on this semester's final exam for this subject.";
  }
  else if(sign=="Gemini")
  {
      cout << "Gemini will strive in learning the Python programming language but will struggle more in learning Java. However, you are not disadvantaged in the general area of computer science. You will see this come true today when learning how to generate random numbers.";
  }
  else if (sign=="Cancer")
  {
      cout << "Cancers will most definitely excel in the field of discrete structures. Abstract math that relates to computer science is you strong suit, although writing research papers about computer architecture may not be. Tonight a rigorous discrete structures proof will be waiting for you to solve it.";
  }
  else if(sign=="Leo")
  {
      cout<<"Leoes are not very good at math, but can learn many programming languages at once. Although you struggle in the logic of computer science, you are very adept at memorizing many concepts of several programming languages in a short amount of time. Today you will be able to successfully memorize how to find duplicates in a number set in five different programming languages if you attempt to do so.";
  }
  else if(sign=="Virgo")
  {
      cout << "Virgos are experts at debugging long programs. You can sense exactly where the bugs are in the code and never be surprised when they appear. Tonight your skills will be recognized by someone who will be looking to hire a software engineer.";
  }
  else if(sign=="Libra")
  {
      cout<<"Libra are able to learn how to use any kind of compiler/coding shell very quickly. You can switch from device to device with ease as long as the task involves programming. Tonight you will need to use a different computer from your usual one to complete a coding project since something unfortunate will happen to it today.";
  }
  else if(sign=="Scorpio")
  {
      cout<<"Scorpios know how to pick up their first programming language very fast but will unfortunately slow down in progress when learning a second language. You can master your first programming language very quickly but will take more time than usual to learn your second programming language. Tonight you will take twice as much time to learn how to do math in Python as it took you to learn how to do math in C++.";
  }
  else if(sign=="Sagittarius")
  {
      cout<<"Saguttariuses excel in robotics since they can apply acquired programming concepts to real life very quickly. You feel as if you can do anything to a robot after learning the essentials of a programming language. Today you will take a very short amount of time to program your robot to complete a maze.";
  }
  else if(sign=="Capricorn")
  {
      cout<<"Capricorns can program electronics like gaming PC's and tablets to be extremely efficient since they can apply their knowledge of physics to programming objects very well. You know that any big-name corporation like Apple will be lucky to have you when it needs to develop a new innovative device or machine. Today you will receive job offers from many different companies to work for them as a software engineer.";
  }
  else if(sign == "Aquarius")
  {
      cout<<"Aquariuses obsess over computer bugs for hours on end without even being aware how long they spend on a programming error. You never give up and push aside all activities until a program can run completely. Tonight you will pull an all-nighter completing you final computer science project even though it will be due a week later from today.";
  }
  else
  {
      cout<<"Pisces are extremely interested in learning about computer science and are able to learn large amounts of the subject in a short amount of time. Rather than the reason being that you are extremely intelligent, you have an extreme thirst for knowledge in this field. Tonight you will be scouted by many coding bootcamps and universities and be invited to participate and help out in them.";
  }
  return 0;
}
