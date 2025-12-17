//Neon Number
#include <iostream>
using namespace std;

int main() {
    int n, sq, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    sq = n * n;
    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }

    if (sum == n)
        cout << "Neon Number";
    else
        cout << "Not a Neon Number";

    return 0;
}
