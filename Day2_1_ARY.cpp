/*
ARRAY


*/


#include <iostream>
using namespace std;


class OPFunction{
public:
    int getMax(int a[] , int size){
        int max = a[0];
        
        for(int i = 0 ; i<size ; i++){
            if(max<a[i]){
                max = a[i];
                break;
            }
        }
        return max;
        
    }


    bool linearSearch(int a[] ,int size, int target){
        for(int i = 0 ; i < size; i++){
            if(a[i] == target)
                return true;
        }
        return false;
    }

     

    void reverseArray(int a[], int size){
        for(int i = 0 ; i<size/2 ; i++)
            swap(a[i] , a[size-i-1]);
    }

    void alternateSwapArray(int a[] , int size){
        for(int i = 0 ; i<size-1 ; i = i+2)
            swap(a[i] , a[i+1]);
        
    }

    void display(int a[], int size){  
        for(int i = 0 ; i<size ; i++)  cout << a[i] << " " ;         
    }


    void display(int a[], int size , int res){
        if(res == 1){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    }
};

int main(){
    int x[] = {1,2,3,4,5,6,7};
    int s = sizeof(x)/sizeof(x[0]);
    
    OPFunction obj1;

    obj1.display(x,s);
    bool res =  obj1.linearSearch(x,s,5);
    cout << res << endl; 
    obj1.display(x,s,res);




}




//Problem for CPP Class

/*
    2 sum
    3 sum
    sort 0's and 1's 
    find duplicate elements
    find unique elments 
    find intersection elements
*/