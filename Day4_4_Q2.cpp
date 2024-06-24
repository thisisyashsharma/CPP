#include <iostream>
using namespace std;



void display(int a[] , int size){
    cout << "[ "; 
    for(int i = 0 ; i<size ; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl; 
}

void pairsum(int a[], int size , int target){
    for(int i = 0 ; i<size ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(a[i]+a[j] == target){
                cout << "Target is " << target << " at index ";
                cout << i << ", " << j << endl; 
            }
        }
    }
}


int main(){
    int a[] = {3,2,5,10,1,7};

    int s = sizeof(a)/sizeof(a[0]);
    pairsum(a,s,17);
    display(a,s);
}