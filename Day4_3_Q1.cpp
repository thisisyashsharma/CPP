#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[] , int size){
    cout << "[ "; 
    for(int i = 0 ; i<size ; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl; 
}




void sortUnique(int a[] , int size){
    int i = 0 ; 
    int j = 1;
    sort(a,a+size);

    display(a,size);

    while(j<size){
        if(a[i] != a[j] ){
            a[i] = a[j];
            i++;
        }
        j++;
    }

}   




int main(){

   int a[] = {6,4,3,6,2,3,2,1};
   int size = sizeof(a)/sizeof(a[0]);

   cout << "input : " ;
   display(a,size);
   sortUnique(a,size);


   cout << "output : " ;
   display(a,size);
}