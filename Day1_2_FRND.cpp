/*
FRIEND CLASS & FUNCTION


Friend - CLass & Function
*/


#include <iostream>
using namespace std;

class A{
private:
    int key;

    friend int box(int key){
        cout << "key of A : " << key << endl;
    }
};

class B{
    
};


int main(){
    cout << "Friend class B can access the members of class A";
}