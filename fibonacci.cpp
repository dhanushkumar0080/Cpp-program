#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";//0 1 1 2 3
    for(int i=1;i<=n-2;i++){//5
        int next=a+b;//5
        cout<<next<<" ";//5
        a=b;//5
        b=next;//5
    }
}