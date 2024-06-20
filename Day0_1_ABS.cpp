/*


ABSTRACTION - Private | Public | Default

*/

#include <iostream>
using namespace std;

class Student {

private:
    string name;
   

public:
    Student(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
};

int main(){
    Student object("Guddu");
    string x = object.getName();
    cout << x;
}