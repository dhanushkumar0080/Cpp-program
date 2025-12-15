//Write a C++ Program to print the given message.
#include <iostream>
using namespace std;
int main()
{
    string message;
    cout<<"Enter your name : ";
    getline(cin,message);
    cout<<message;
    return 0;
}
