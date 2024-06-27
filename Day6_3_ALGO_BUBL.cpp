#include <iostream>
using namespace std;


void bubbleSort(int a[], int size){

    int hasSwapped = 0 ;

    for(int i=0 ; i<size ; i++){
        for(int j = 0 ; j< size-i-1 ; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                hasSwapped = 1;
            }
        }
        if(hasSwapped == 0 ) break ;
    }
}

void display(int a[] , int size ){
    cout << "[ ";
    for(int i = 0 ; i<size ; i++){
        cout << a[i] << " " ;
    }
    cout << " ]" << endl;
}


void insertionSort(int a[], int size){
    for(int i= 0; i<size ; i++){
        int j = i; 
        while(j>0 && a[j-1] > a[j]){
            swap(a[j-1], a[j]);
            j--;
        }
    }
}


int main(){

  int x[] = {1,6,2,3,8,4,7,5};
  int s = sizeof(x)/sizeof(x[0]);
  
  display(x,s);
  insertionSort(x,s);
  display(x,s);


}