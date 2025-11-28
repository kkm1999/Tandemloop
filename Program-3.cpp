// Odd Series with Even/Odd Logic

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;

    for (int i = 0; i < limit; i++)
        cout << (2 * i + 1) << " ";

    return 0;
}
