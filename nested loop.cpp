#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    nested-if-IF within if
    if(cnd){
         if(cnd){
         }
         else{
         }
         }
       */
      if(n>10){
        if(n>11 && n<20){
            cout<<"greater than 11";
        }
        if(n>20 && n<30){
            cout<<"greater than 20";
        }
      }
}