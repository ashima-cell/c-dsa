#include <iostream>
using namespace std;
int main(){
    int arr[]={45,11,2,44};
    int n=4;
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }
        swap (arr[i],arr[min_index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}