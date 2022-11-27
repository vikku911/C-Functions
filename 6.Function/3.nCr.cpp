#include <iostream>
using namespace std;

int factn(int n){
    
    int ans = 1;
    for(int i =1; i<=n;i++){
         ans= ans*i; 
         
    }return ans;
}
int factr(int r){
    
    int ans = 1;
    for(int i =1; i<=r;i++){
         ans= ans*i; 
         
    }return ans;
}
int factc(int c){
    
    int ans = 1;
    for(int i =1; i<=c;i++){
         ans= ans*i; 
         
    }return ans;
}
int main() {
   int  n, r;
    cin>>n>>r;
   int c= n-r;
  
   int ncr = ((factn(n))/(factr(r)*factc(c)));
   cout <<ncr;
   return 0;
   
}
/*

7 4           //7c4
35

10 2          //10C2
45


*/