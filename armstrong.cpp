#include <iostream>
using namespace std;

bool isArmstrong(int n) {

    int original = n;

    // Count digits
    int count = 0;
    int temp = n;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Calculate sum
    int sum = 0;

    while (n > 0) {

        int digit = n % 10;

        int power = 1;

        for (int i = 0; i < count; i++) {
            power = power * digit;
        }

        sum = sum + power;

        n = n / 10;
    }

    return sum == original;
}

int main() {

    int n = 153;

    if (isArmstrong(n)) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}