#include <iostream>
using namespace std;






int main(){

int n ; 
cin >> n;

int r,c;
cout << "Enter rows : " ;
cin >> r ; 
cout << endl;

cout << "Enter columns : " ;
cin >> c;
cout << endl;

        int** a = new int*[r];

        for(int i=0 ; i<r ; i++){
            a[i] =new int[c];
        }

        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ;j++)  cin >> a[i][j];
            cout << endl;
        }


    for(int j=0 ; j<r ; j++){
        delete []a[j];
    }

    delete []a;

}