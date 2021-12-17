// Example program
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    int longestRun=-1;
    int maxRoll=1;
    int array[20];
    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
        array[i] = (rand()%6)+1;
    }
    for(int i = 0; i < 19; i++)
    {
        if(array[i]==array[i+1])
        {
            maxRoll++;
        }
        else 
        {
          maxRoll = 1;
        }
        if(maxRoll>longestRun)
        {
            longestRun = maxRoll;
        }  
    }
    int marker = 1;
    int c;
    for(int i = 0; i < 20; i++)
    {
      if(array[i]==array[i+1])
      {
        marker++;
      }
      else
      {
        marker = 1;
      }
      if(marker==longestRun)
      {
        c=i;
        break;
      }
    }
    int start = c-longestRun+1;
    int finish = c+1;
    if(longestRun>1)
    {
      for(int i = 0; i < 20; i++)
      {
        if(i==start+1)
        {
          cout<<"(";
          cout<<array[i];
        }
        else if(i==finish)
        {
          cout<<array[i];
          cout<<")";
        }
        else 
        {
          cout<<array[i];
        }
      }
    }
     else 
    {
      for(int i = 0; i < 20; i++)
      {
        cout<<array[i];
      }
    }
    return 0;
}
