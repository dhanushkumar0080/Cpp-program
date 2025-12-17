#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;//60 6
    int cp=x/12;
    if(cp>y){
        float num;
        cout<<"Loss Rs."<<fixed<<setprecision(2)<<x-12*y;//12
    }else{
        float num;
        cout<<"Profit Rs."<<fixed<<setprecision(2)<<x-12*y;//
    }
}