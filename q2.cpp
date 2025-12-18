#include <iostream>
using namespace std;

int main() {
    int n, sq;
    cin >> n;

    sq = n * n;
    int temp = n;

    while (temp > 0) {
        if (temp % 10 != sq % 10) {
            cout << "Not an Automorphic Number";
            return 0;
        }
        temp /= 10;
        sq /= 10;
    }

    cout << "Automorphic Number";
    return 0;
}
