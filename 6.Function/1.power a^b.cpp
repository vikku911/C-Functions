#include <iostream>
#include <math.h>
using namespace std;
int power(){
    int a, b;
    cout<<"Enter the no and its power"<<endl;
    cin>> a>>b;
    for(int i =1; i<=b; i++){
         int ans = pow(a,b);
    return ans;
    } return 0;
}
int main(){
    int ans = power();
    cout<<ans;
    return 0;
}

/*

Enter the no and its power
4 5
1024

*/