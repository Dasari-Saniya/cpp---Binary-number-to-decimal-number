#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int num = 0;
        for (int i = 0; i < b.length(); i++) {
            num = num * 2 + (b[i] - '0');
        }
        return num;
    }
};

int main() {
    Solution s;
    string b;
    cin >> b;
    cout << s.binaryToDecimal(b);
    return 0;
}

