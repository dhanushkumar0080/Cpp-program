#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    sample input
    5
    sample output:
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
   
    */
    for(int rows =1;rows<=n;rows++){
         if(rows==1 || rows==n){
             for(int i=1;i<=n;i++){
                 cout<<"* ";
             }
             cout<<endl;
             continue;
         }
              for(int cols=1;cols<=n;cols++){
              if(cols==1 || cols==n){
              cout<<"* "; 
         }
            else{
              cout<<"  ";
            }
              }
            cout<<endl;
}
}