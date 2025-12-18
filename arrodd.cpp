/*
print the odd index elements
print the sum of array elements
print the max element of the array
print the min element of the array
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the array number\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(i%2!=0)
        cout<<arr[i]<<" ";
    }
}