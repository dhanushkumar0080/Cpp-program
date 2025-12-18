/*
assume dhoni's current age is 6.after 3 year,dhoni's mother devki devi would be 4 times dhoni's
age.what is devki devi's current age?write a program to determine same.

input format:
first line of input consists of one integer value as age of dhoni.

output format:
output should display an integer that specifies 
 devki devi's current age

 sample input:6
 sample output:33
*/
#include<iostream>
using namespace std;
int main(){
    int c_age;
    cin>>c_age;
    int after_three=c_age+3;
    int after_three_mum_age=after_three*4;
    cout<<after_three_mum_age-3;
}