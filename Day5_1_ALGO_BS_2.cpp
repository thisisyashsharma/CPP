#include <iostream>
 using namespace std;
/*
FO - First occurence
LO - Last occurence


*/

int LOBinarySearch(int a[],int size ,int key){
    int s = 0;
    int e = size-1;
    int m ;
    int x = -1;

    while(s<=e){
        m = (s+e)/2;
        
        if(a[m] <= key){
            x = m ; 
            s = ++m;
        } else {
            e = --m;       
        }
    }
    return x;
};


int main(){
   int x[] = {1,2,3,3,3,3,4};
   int s = sizeof(x)/sizeof(x[0]);

   int res = LOBinarySearch(x,s ,3);
   cout << "at index : " << res;
}