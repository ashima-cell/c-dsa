#include <iostream>
using namespace std;

int count(int x) {
    int cnt = 0;

    while (x > 0) {
        cnt += 1;
        x = x / 10;
    }

    return cnt;
}

int main() {
    int x = 4567;
    cout << count(x);

    return 0;
}
