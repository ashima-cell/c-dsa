#include <iostream>
using namespace std;
int reverseno(int x){
    int dup=x;
    int rev=0;
    while(x>0){
        int ldigit=x%10;
        x=x/10;
        rev=rev*10+ldigit;
    }
    if (rev==dup){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}
int main(){
    int x=141;
    cout<<reverseno(x);
    return 0;
}