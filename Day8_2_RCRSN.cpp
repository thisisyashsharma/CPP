#include <iostream>
using namespace std;

/*
RECURSION
function calling itself



*/



int fibonaci(int n){
    
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonaci(n-2) + fibonaci(n-1);
}



bool isSorted(int a[] , int size){

    if(size == 0 || size == 1 ) return 0;
    if(a[0]>a[1]){
        return false;
    }else{
        return isSorted(a+1,size-1);
    }
}

int sumOfArray(int a[], int size){
    if(size == 0 ) return 0 ;
    if(size == 1) return a[0]; 
    return a[0] + sumOfArray(a+1,size-1);
}



int main(){

    int x[] = {1,2,3,4,5,6};
    int s = sizeof(x)/sizeof(x[0]);
    isSorted(x,s);


    int sum = sumOfArray(x,s);
    cout << "Sum " << sum << endl;
}