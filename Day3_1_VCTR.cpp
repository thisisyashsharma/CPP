#include <iostream>
#include <vector>


using namespace std;


void sort0sand1s (int a[] , int size){
    int i = 0;
    int j = size-1;
    while(i<j){
        if( (a[i] == 1) &&(a[j] == 0) ){
            swap(a[i],a[j]);
            i++;
            j--;
        }else if(a[i]==0){
            i++;
        }else if(a[j]==1){
            j--;
        }
    }
     
};


void display(int a[], int size){
    cout << "[ " ;
    for(int i = 0 ; i<size ; i++){
        cout << a[i] << " ";
    }
    cout << "]" ;
    cout << endl;
}


int main(){
   int x[] = {1,0,1,1,1,0,0,1,0,1,0};
   int s = sizeof(x)/sizeof(x[0]);

   sort0sand1s(x,s);
   display(x,s);
}
