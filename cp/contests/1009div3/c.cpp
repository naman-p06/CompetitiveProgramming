#include <iostream>
using namespace std;

bool isPowOfTwo(long long num) {
    return (num & (num - 1)) == 0;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int inputNum;
        cin >> inputNum;
        int result = -1;

        if (isPowOfTwo(inputNum + 1)) {
            cout << -1 << "\n";
            continue;
        }

        int highestBit = 31 - __builtin_clz(inputNum);
        int highestPower = 1 << highestBit;
        int remainder = inputNum - highestPower;

        for (int i = highestBit - 1; i >= 0; i--) {
            int tempVal = 1 << i;
            if ((inputNum & tempVal) == 0 && tempVal <= remainder) {
                int candidate = highestPower + tempVal;
                int check = inputNum & candidate;
                if (check > 0 && candidate > check && candidate < inputNum) {
                    result = candidate;
                    break;
                }
            }
        }

        if (result == -1) {
            int lowestBit = inputNum & -inputNum;
            int limit = inputNum - lowestBit;
            for (int i = 31; i >= 0; i--) {
                int tempVal = 1 << i;
                if (tempVal <= limit && ((inputNum & tempVal) == 0)) {
                    int candidate = lowestBit + tempVal;
                    if (candidate < inputNum && candidate > (inputNum & candidate)) {
                        result = candidate;
                        break;
                    }
                }
            }
        }

        cout << result << "\n";
    }
    return 0;
}
