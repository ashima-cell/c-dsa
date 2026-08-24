#include <iostream>
using namespace std;
void fun(){
    cout<<("hello");
    fun();
}
int main(){
    fun();
    return 0;
}

// this is an example of infinite recursion where the loop continues because there is no condition specified