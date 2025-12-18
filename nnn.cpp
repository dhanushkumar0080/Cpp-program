/*
sample input:
3----->first Array size
1
2
3
3----->second ARray size
1
2
3
sample output:
same
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array number\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];                           
    }
    int size2;
    cout<<"enter the size of the array2\n";
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
        }
        if(size==size2){

            for(int i=0;i<size;i++){
                if(arr[i]!=arr2[i]){
                    cout<<"Not Same";
                    return 0;
                }
            }
        }
        else{
            cout<<"size different";
            return 0;
        }
        cout<<"same";
    }
