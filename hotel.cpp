#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int veg=0,non_veg=0;
    int choice;
    for(int i=1;i<n;i++){
        cin>>choice;
        if(choice==1)
           veg++;
        else if(choice==2)
        non_veg++;
    }
    cout<<"veg:"<<veg<<"\n"<<"non_veg:"<<non_veg;
           
    
}