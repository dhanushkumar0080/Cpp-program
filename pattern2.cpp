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
    *   *   *
    * * * * *
    *   *   *
    * * * * *
    */
    for(int rows=1;rows<=n;rows++){//4
        for(int cols=1;cols<=n;cols++){//4
         if(rows%2==0 && cols%2==0){
             cout<<"  ";
         }
         else{
         cout<<"* ";//* 
}
}
cout<<endl;
}
}