#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    cout << ls.front();

    return 0;
}