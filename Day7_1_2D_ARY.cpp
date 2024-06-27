#include <iostream>
#include <climits>
using namespace std;

 
bool isKeyPresent(int a[][4], int target , int row, int col){

    for(int i = 0 ; i<col ; i++){
        for(int j =0 ; j<row ; j++){
            if(a[i][j] == target)return true;
        }
    }
    return false;
}

void display(int a[][4], int r, int c ){

    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++ ){
            cout << a[i][j] << " ";
        }
        cout << endl;       
    }


    cout << endl;
    
}

 
int max(int a[][4],  int row, int col){
    int max = INT_MIN;
    int max_Row = 0;
    for(int i = 0 ; i<col ; i++){
        int sum = 0;

        for(int j =0 ; j<row ; j++){
            sum += a[i][j];
        }
        
        if(max<sum){
            max = sum;
        }

    }
    cout << "Max of the matrix is " << max << endl;
    return max;
}


void wavePattern(int a[][4] , int r, int c){
    cout << endl;
    for(int i = 0  ; i<r  ; i++){
        if(i%2 == 0){
            for(int j = 0 ; j<c ; j++) cout << a[i][j] << " ";
        }else{
            for(int j = c-1 ; j>=0  ; j--) cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){

    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    display(a,3,4);
/*
    bool res = isKeyPresent(a ,45 , 3, 4 );
    cout <<"Target is available in 1:Yes  & 0:No " << endl;
    cout << res << endl;
    max(a,3,4);
*/
  wavePattern(a,3,4);

}