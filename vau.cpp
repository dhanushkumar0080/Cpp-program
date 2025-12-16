#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;//123456

    while(n != 0) {
        count++;//6
        n = n / 10;//0
    }

    cout << count;
}
