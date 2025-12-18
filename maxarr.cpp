#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the max array number\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}