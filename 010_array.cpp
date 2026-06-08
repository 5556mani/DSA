#include <iostream>
using namespace std;

void array_notes(){

    // same type of data can be stored 
    // contigous in memory
    // linear
    // initialisation of array
    int marks[]={1,2,3};
    int half_full[6]={1,2};
    int vacant[5]; // 5 is the size of the array
    // indexing start from 0

    // loop on array
    int siz= sizeof(marks)/sizeof(marks[0]);
    for(int i=0; i<siz; i++){
        cout<<marks[i]<<endl;
    }


}

void pass_by_reference(){
    // address
    // for nom-primitive datatype
    // function call non-primitive datatype by reference
    // 
}


// MAD FACT : swap(i,j) function for array EXIST!!!!!!!!!!!!!!


int HW1(){
    int list[]={1,3,5,2,7,4,2,3,2,5,3,32,56,6,3,2,5,6,3,2,5,5};

    int siz= sizeof(list)/sizeof(list[0]);

    int smallest=INT16_MAX;
    int largest= INT16_MIN;

    int small_index=0;
    int large_index=0;


    for (int i=0; i< siz; i++){
        
        if (list[i]<smallest){
            smallest=list[i];
            small_index=i;
        }
        
        if (list[i]>largest){
            largest=list[i];
            large_index=i;
        }
    }
    cout<<"index of largest: "<<large_index<<endl;
    cout<<"index of smallest: "<<small_index<<endl;
        
    return 0;
}

int HW2(){
    // we have to find  all unique num in array 
    int original[]={3,5,23,6,7,4,8,5,3,7,4,7,8,9,9,5,23,3,4,7,7,97,4,3,6,8,65,4,6,6,89,6,4,3,32,2,6,8,9,6,4,36,4,5,7,7,46,4,53};
    int sz= sizeof(original)/sizeof(original[0]);
    //cout<<"size of original:"<<sz<<endl;

    for (int i=0;i<sz;i++){
        //cout<<"i: "<<i<<endl;

        int count=0;

        for (int j=0;j<sz;j++){
            //cout<<"j: "<<j<<endl;

            if(original[i]==original[j]){
                count++;
            }
        }
        
        if (count==1){
            cout<<original[i]<<endl;
        }
    }
    return 0;
}



int main(){
    HW1();
    HW2();
    return 0;
}