#include <iostream>
#include<string>
using namespace std;

int main()
{
  string user_input;
  cout << "Hello, my name is Hal! " << endl;
  cout << "What would you like me to do?" << endl;
  getline(cin, user_input);
  cout << "I am sorry, I cannot do that.";

  return 0;
}
