#include <iostream>
using namespace std;

void display(int a[][5], int r, int c ){

    cout << endl;
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++ ){
            cout << a[i][j] << " ";
        }
        cout << endl;       
    }
    cout << "-------------------------------------" << endl;
    
}
void spiralMatrix(int a[][5], int r, int c){
     int tR= 0 , bR = r-1, lC = 0, rC = c-1;

        while(tR <= bR && lC <= rC ){
            for(int i=lC ; i<rC ; i++)
                cout << a[tR][i] << " " ;
            tR++;

            for(int i=tR ; i<=bR ; i++)
                cout << a[i][rC] << " " ;
            rC--;

            for(int i=rC ; i>=lC ; i--)
                cout << a[bR][i] << " " ;
            bR--;

            for(int i=bR ; i>=tR ;i--)
                cout << a[i][lC] << " " ;
            lC++;

            


        }
}







int main(){
    int x[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    display(x,5,5);

    spiralMatrix(x,5,5);
}