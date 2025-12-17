//Strong Number
#include <iostream>
using namespace std;
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    while (temp > 0) {
        sum += fact(temp % 10);
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}
