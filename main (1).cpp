/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
          }
      }  
    }
    
}

int main()
{
    int arr[]={10,2,100,1000,5};
    int n=5;
    BubbleSort(arr,n);
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}

    return 0;
}