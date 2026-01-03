#include<iostream>
using namespace std;
int main(){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        for(int i=0;i<n;i++){
            int nxtsmall = -1;
            for(int j=1;j<n;j++){
                if(arr[j]<arr[i]){
                    nxtsmall=arr[j];
                    break;
                }
            }
            cout<<nxtsmall<<" ";
        }
        return 0;
}