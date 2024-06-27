#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;


int maxSubarray( int a[], int size){
    int max = INT_MIN;
    int sum = 0;

    for(int i=0 ; i<size; i++){
        sum += a[i];

        if( sum > max ) max = sum ;
        if( sum < 0 ) sum = 0;    
    }

    return max;

    
}



int main(){
    cout << "hs";

    int x[] = {-2,-3,4,-1,-2, 1, 5,-3};
    int s = sizeof(x)/sizeof(x[0]);

    int res = maxSubarray(x,s);
    cout << "max in subarray : " << res << endl;
}