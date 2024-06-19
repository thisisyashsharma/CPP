#include <iostream>
using namespace std;


/*
POLYMORPHISM

Topic POLY - "many" , MORPHISM - "forms"

Compiled Time - early binding
   - Overloading 
         1.Function Overloading
         2.Operator Overloading


Runtime  - late binding
    - Function Overriding
         1.
*/


//Polymorphism - Compiled Time - Operator Overloading
class Base_CompiledTime{
public:
   int x;

    void display(){
        cout << "x : " << x << endl;
    }

    Base_CompiledTime operator++(int){
        Base_CompiledTime n = *this;
        x = x+100;
        return *this;
    }
};


class Base_Runtime{
public:
    virtual void print(){
        cout << "From Base" << endl;
    }
};

class Derived_Runtime : public Base_Runtime{
    public :
    void print(){
        cout << "From Derived" << endl;
    }
};



int main(){
    
    Base_CompiledTime obj1;
    obj1.x = 7;
    obj1++;

    Derived_Runtime obj;
    Base_Runtime *ptr =  &obj;
    obj.print();
    ptr->print();
    cout << ptr;

}