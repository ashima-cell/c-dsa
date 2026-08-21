#include <iostream>
using namespace std;
int main(){
    int n=2240;
    int last_digit;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        cout<<last_digit;
    }
    
    return 0;
}