#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int min_num = (a < b) ? a : b;
    int gcd = 1;
    for (int i = 1; i <= min_num; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD (HCF) is: " << gcd << endl;
    return 0;
}
