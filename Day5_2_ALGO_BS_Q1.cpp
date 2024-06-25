#include <iostream>


using namespace std;


//Given a sorted array of N integers and an integers x, write a program to find the lower bound of x

// the lower bound algo find the l

int LowerboundsearchBS(int a[], int size, int key){

    int s = 0;
    int e = size-1;
    int m ;
    int res = -1;

    while( s<=e ){
        m = (s+e)/2;
        
        if(a[m] >= key){
            e = m-1;
            res = m-1;
        }else{
            s = m+1;
        }
    }
    return res;

}

int UpperboundsearchBS(int a[], int size, int key){

    int s = 0;
    int e = size-1;
    int m ;
    int res = -1;

    while( s<=e ){
        m = (s+e)/2;
        
        if(a[m] <= key){
            res = m;
            s = m+1;
        }else{
            e = m-1;
        }
    }
    return res;

}


int main(){
    int a[] = {1,2,3,3,3,5,5,5,5,8,10};
    int s = sizeof(a)/sizeof(a[0]);

    int x = 5;

    int res1 = LowerboundsearchBS(a,s,x);
    int res2 = UpperboundsearchBS(a,s,x);
    cout << "LowerBound of " << x << " is " << res1 << endl; 
    cout << "UpperBound of " << x << " is " << res2 << endl; 

    // for(int i : res){
    //     cout << res[i] << " " << endl;
    // }

}