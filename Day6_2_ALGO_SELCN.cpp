#include <iostream>
using namespace std;

int SelectionSort(int a[], int size){
 
int min_idx ; 

    for(int i = 0 ; i<size ; i++){
        min_idx = 1;
        for(int j = i+1 ; j< size ; j++){
            if(a[min_idx] > a[j]){
                min_idx = j;
            }
        }
        swap(a[i],a[min_idx]);

    }
}


void display(int a[] , int size ){
    cout << "[ ";
    for(int i = 0 ; i<size ; i++){
        cout << a[i] << " " ;
    }
    cout << " ]" << endl;
}





int main(){

  int x[] = {1,6,2,3,8,4,7,5};
  int s = sizeof(x)/sizeof(x[0]);
  
  display(x,s);
  SelectionSort(x,s);
  display(x,s);

}