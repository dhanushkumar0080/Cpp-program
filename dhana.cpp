#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=0;
    while(n!=0){
        int dig=n%10;
        product=product*dig;
        n=n/10;
    }
}