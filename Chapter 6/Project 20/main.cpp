#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() 
{
srand(time(NULL));
 for(int i = 0; i < 10; i++)
  {
  vector<int> v1;
  vector<int> v2;
  int c = 1;
  while(c<11)
  {
    v2.push_back(c);
    c++;
  }
  for(int i = 0; i < 10; i++)
  {
    int b = rand()%v2.size();
    int a = v2[b];
    v1.push_back(a);
    for(int i = b+1; i < v2.size(); i++)
    {
      v2[i-1]=v2[i];
    }
    v2.pop_back();
  }
  for(int v: v1)
  {
    cout<<v;
  }
  cout<<""<<endl<<endl<<endl;
  }
  return 0;
}
