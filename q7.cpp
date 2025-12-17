//Perfect Square
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sq = sqrt(n);
    if (sq * sq == n)
        cout << "Perfect Square";
    else
        cout << "Not a Perfect Square";

    return 0;
}
