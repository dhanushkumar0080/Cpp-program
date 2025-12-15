#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
      switch(n){
        case 1:
          cout<<"call forwarded to tamil dept";
          break;
        case 2:
          cout<<"call forwarded to english dept";
          break;
        case 3:
          cout<<"call forwarded to hindi dept";
          break;
        default:
          cout<<"enter 1 2 or 3";
      }
}