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
    cout << endl;
    
}
void spiralMatrix(int a[][5], int r, int c){
     int topRow = 0 ,bottomRow = r-1, leftCol = 0 , rightCol = c-1;
     
     while(leftCol <= rightCol && topRow <= bottomRow){
            for(int i=leftCol ; i<rightCol ; i++){
                cout << a[topRow][i]  << " ";
            }
            topRow++;

            for(int j=topRow ; j<bottomRow ; j++){
                cout << a[j][rightCol] << " ";

            }
            rightCol--;        
           
            for(int k=rightCol ; k<leftCol ; k++){
                cout <<a[bottomRow][k] << " ";
            }
            bottomRow++;

            for(int l=bottomRow ; l<topRow ; l++){
                 cout << a[l][leftCol] << " ";
            }
            leftCol++;
     }


}




int main(){
    int x[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    display(x,5,5);

    spiralMatrix(x,5,5);
}