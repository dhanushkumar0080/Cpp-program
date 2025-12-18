#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 7 == 0 || n % 10 == 7)
        cout << "Buzz Number";
    else
        cout << "Not a Buzz Number";

    return 0;
}
