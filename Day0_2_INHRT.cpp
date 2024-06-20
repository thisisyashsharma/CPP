/*
INHERITANCE
  Base class 
  Child class

*/
#include <iostream>
using namespace std;

int main(){
    cout << "hello"; 
}  


class Base{
public: 
    int parentVariable;
    
    int parentFunction(int parentVariable){
        return  parentVariable+100;
    }
};

class Derived : public Base{
public:
    int childVariable;
    int childFunction(int childVariable){
        return childVariable + parentVariable;
    }

    //Now how to access the parent variable or method on derived class and in main class.
    
};