#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string scramble(string word)
{
  int len = word.length();
  if(len>3)
  {
    int swap = rand()%(len-2)+1;
    char temp = word[swap];
    if(swap<len-2)
    {
      word[swap] = word[swap+1];
      word[swap+1]=temp;
    }
    else
    {
      word[swap] = word[swap-1];
      word[swap-1] = temp;
    }
  }
  return word;
}

int main() 
{
    string a;
  string message = "";
  cout<<"Enter words to scramble or . to stop ";
  cin>>a;
  while(a!=".")
  {
      message+=scramble(a)+ " ";
      cin>> a;
  }
  cout<<message;
}
