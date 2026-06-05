# include <iostream>
using namespace std;
#include <climits>
//data stored in continous manner 

// homework=> find index or largest and minimum 
// int size(int array[]){
//     int size=sizeof(array)/sizeof(array[0]);
//     return size;
// }     this function will never work as pointer is at first element when fucntion called on array


int main(){
    int array[]={1,2,3,5,6,7,4,2,4,6,7,9,5,3,5,7,8,5,3};
    int size= sizeof(array)/4 ;

    int maxm=INT_MIN;
    int minm=INT_MAX;
    for(int i=0;i<size;i++){
        maxm= max(maxm,array[i]);
        minm= min(minm,array[i]);
    }
    cout<<"max: "<<maxm<<"min: "<<minm<<endl;

    for(int i=0;i<size;i++){
        if (array[i]==maxm){
            cout<<"index of highest entry is: "<<i<<endl;
        }
        if (array[i]==minm){
            cout<<"index of lowest entry is: "<<i<<endl;
        }
    }
    return 0;

}

// pass by reference - address is passed - non primitive data structures are generalled passed by reference
// array name is pointer

// reverse the array use 2 pointers approach
