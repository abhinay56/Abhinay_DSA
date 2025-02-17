#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    string s = to_string(num);
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            cout << "false" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "true" << endl;
    return 0;
}
