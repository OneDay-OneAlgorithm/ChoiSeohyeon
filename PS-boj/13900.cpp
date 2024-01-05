#include <iostream>
using namespace std;

int main() {
    long long int n, val, sum = 0, temp = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        sum += temp * val;
        temp += val;
    }

    cout << sum;
    return 0;
}
