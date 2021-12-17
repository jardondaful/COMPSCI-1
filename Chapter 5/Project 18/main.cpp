#include <iostream>
using namespace std;

int GCD(int n1, int n2)
{
	int gcd;
	for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
	return gcd;
}

int main()
{
    int num1,den1, bar1, bar2;
    string f1, f2;
    cout << "Enter first fraction: ";
    //user input
    cin >> f1;
    int num2,den2;
    cout << "Enter second fraction: ";
    //user input
    cin >> f2;
    for(int i = 0; i < f1.length(); i++)
    {
      if(f1.substr(i,1)=="/")
      {
        bar1 = i;
      }
    }
    for(int j = 0; j < f2.length(); j++)
    {
      if(f2.substr(j,1)=="/")
      {
        bar2 = j;
      }
    }
    num1 = stoi(f1.substr(0,f1.length()-bar1));
    num2 = stoi(f2.substr(0,f2.length()-bar2));
    den1 = stoi(f1.substr(bar1+1));
    den2 = stoi(f2.substr(bar2+1));
    //finding lcm of the denominators
    int lcm = (den1*den2)/GCD(den1,den2);
    //finding the sum of the numbers
    int sum=(num1*lcm/den1) + (num2*lcm/den2);
    //normalizing numerator and denominator of result
    int num3=sum/GCD(sum,lcm);
    lcm=lcm/GCD(sum,lcm);
    //printing output
    cout<<"The sum of the two fractions is: "<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
    return 0;
}
