#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        int dig=n%10;//1
        sum=sum+dig;
        n=n/10;//1
    }
    cout<<sum;
}