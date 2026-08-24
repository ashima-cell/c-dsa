#include<iostream>
using namespace std;
void printdivisor(int x){
    for (int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int x=36;
    printdivisor(x);
    return 0;
    
}