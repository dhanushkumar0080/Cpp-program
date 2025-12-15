//Write a C++ Program to print the given fractional number in 2-digit decimal format.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double num;
  cin>>num;
  cout<<fixed<<setprecision(3)<<num;
}
