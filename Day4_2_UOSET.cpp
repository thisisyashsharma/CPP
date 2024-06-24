#include <iostream>
#include <unordered_set>
using namespace std;




int main(){
    unordered_set<int> US = {3,5,243,7,1};

    for(int i : US){
        cout << i <<" ";
    }
}