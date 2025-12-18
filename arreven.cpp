#include<iostream>
using namespace std;
int main()
//how to get input for array during run-time
{
    int size;
    cout<<"enter the size of the array\n";
    cin>>size;//5
    int arr[size];
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
}