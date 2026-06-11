#include <iostream>
using namespace std;
#include <vector>

void notes(){

    // # creating a vector
    // vector<int> vecname; o size
    //  vector<int> vecname={1,2,3}
    // vector<int> veczero(3,0);


    // #loops for vector
    //for(int i:vec){
    //      loop code
    //   }

    // # function of vector
    // .vector.size()
    // .capacity()
    // .push_back()  # add at last
    // .pop_back() last element will be delted
    // .fromt() return first value
    // .back() return last value
    // .at(index) retrun that indexed element


    // # Static vs dynamic allocation of memory
    // static allocation done while compiling
    // dynamic is done during execution time
    // vectors are dynamic thats why we can modify it 

    // static allocation is done is static memory and dynamic is done in heap

    // vetor have two property size and capacity!!
    // capacity always doubles
    

    // Single number: LC=136
    // generally conainer are passed by values, to pass them add& to pass by reference
    // use XOR "^"


}

void reverse_vec(vector<int>& vect){
    int size=vect.size();
    int loop_limit= size/2;


    for(int i=0; i<loop_limit; i++){
        swap(vect[i],vect[size-(i+1)]);
    }

}

int main(){
    vector<int> vec={2,4,5,7,4,8};
    reverse_vec(vec);
    for(int i: vec){
        cout<<i<<",";
    }
}