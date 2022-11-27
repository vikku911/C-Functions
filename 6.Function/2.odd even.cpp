#include <iostream>
using namespace std;

bool isEven(int a){
    if (a&1){
        return 0;
    }
    return 1;
}

int main() {
    int a ;
    cin>>a;
   
    if (isEven(a)){
        cout<<"Even";
    }
    else
    cout<<"Odd";
}
/*

5
Odd

4 
Even

*/