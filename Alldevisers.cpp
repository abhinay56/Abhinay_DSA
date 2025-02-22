#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int divisor_sum = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                divisor_sum += j;
            }
        }
       sum += divisor_sum;
    }
    cout << sum;
    return 0;
}
