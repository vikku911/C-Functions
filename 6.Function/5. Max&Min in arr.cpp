#include <iostream>
#include <climits>
using namespace std;

int getmax(int arr[], int size)
{
    int max= INT_MIN;                                        // int maxi= INT_MIN;
    for(int i =0 ; i<size ; i ++){
     
        if (max<=arr[i]){                                 //
            max= arr[i];                                 // maxi= max(maxi,arr[i]);
        }                                               //
    }
     return max;
}

int getmin(int arr[],int size)
{
    int min= INT_MAX;                            // int mini= INT_MAX;
    for(int i =0 ; i<size ; i ++){
        if (min>=arr[i]){                      //
            min= arr[i];                      //     mani= min(mini,arr[i]);          
        }                                    //
    }
     return min;
}

int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    
    int arr[100];
    cout<<"Enter the array"<<endl;
    
    for(int i =0 ; i<size ; i ++){
        cin>>arr[i];
    }
     cout <<"Maximum in the array is "<<getmax(arr,size)<<endl;
     cout<<"Minimum in the array is "<<getmin(arr,size)<<endl;
    
    return 0;
}
/*

Enter the size of array
6 
Enter the array
4 5 3 5 7 3
Maximum in the array is 7
Minimum in the array is 3

*/