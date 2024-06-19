//Making Template class generic so we can pass the different type of data type , we are trying to not make the function strong binding with specific data type.
#include <iostream>
using namespace std;



template <class T>

class Number{
public:
    template <typename X, typename Y> 
    T add(X x, Y y){
        cout << x+y << endl;
        return x+y;
    }
};



int main(){
    Number<float> n;
    n.add( 1.0 , 3.0);

    //How to make it different data type in one function 
}