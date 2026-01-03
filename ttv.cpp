#include<iostream>
using namespace std;
int main(){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int first3 = arr[0] + arr[1]+arr[2];
        int last3 = arr[n-1]+arr[n-2]+arr[n-3];
        if(first3==last3){
            cout<<1;
        else{
            cout<<0;
        }
        }
}