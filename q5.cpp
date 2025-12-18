#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;
    cin >> a >> b;

    bool negative = (b < 0);
    b = abs(b);

    for (int i = 0; i < b; i++)
        result += a;

    if (negative)
        result = -result;

    cout << result;
    return 0;
}
