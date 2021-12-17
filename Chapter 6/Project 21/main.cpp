#include <iostream>
#include <vector>
using namespace std;
int next_visitor(bool occupied[], int stalls)
{
    bool adjacent = false;
    bool allTaken = false;
    int a=0;
    for(int j = 0; j < stalls; j++)
    {
        if(occupied[j])
        {
            a++;
        }
    }
    if(a==stalls)
    {
        allTaken=true;
    }
    int longestRun=-1;
    int maxRoll=1;
    for(int i = 0; i < stalls-1; i++)
    {
        if(occupied[i]==occupied[i+1] && occupied[i]==false)
        {
            maxRoll++;
            adjacent = true;
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
    for(int i = 0; i < stalls-1; i++)
    {
      if(occupied[i]==occupied[i+1] && occupied[i]==false)
      {
        marker++;
        adjacent=true;
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
    if(adjacent==false)
    {
        for(int i = 0; i < stalls; i++)
        {
            if(occupied[i]==false)
            {
                c=i;
            }
        }
    }
    int start = c-longestRun+2;
    int finish = c+1;
    if(adjacent==false)
    {
        start = c;
        finish = c;
    }
    int middle = (start + finish)/2;
    if(allTaken)
    {
        return 999;
    }
    else
    {
   return middle;
    }
}

int main() 
{
  int stalls = 10;
  bool occupied[] = {false, false, false, false, true, false, false, false, false, false};
  cout<<"This program guarantees that you will find the next best avaliable stall!"<<endl;
  if(next_visitor(occupied, stalls)!=999)
  {
  cout<< "Next best stall avaliable: "<<next_visitor(occupied, stalls);
  }
  if(next_visitor(occupied, stalls)==999)
  {
      cout<<"Oh no! All the stalls are taken! Guess you have to wait until a stall becomes avaliable!";
  }
  return 0;
}
