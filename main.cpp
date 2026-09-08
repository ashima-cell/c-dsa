/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    cout<<"enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter elements: ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int max_index=i;
        
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[max_index]){
            max_index=j;
        }
    }
    swap(arr[i],arr[max_index]);
}
    cout << "Sorted array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
int main(){
    int arr[100];
    int n;
    SelectionSort(arr,n);

    return 0;
}