#include <iostream>
using namespace std;
// use this in terminal to run this file ==> g++ vid3_statementsANDloops.cpp -o vid3.exe; .\vid3.exe

int main(){
    cout<<"Lovely\n"<<"Anand\n";
    

    // conditional statements ans is either yes or no
    int n = -9;
    // we can ignore {} blocks if writng single statement
    if (n>=0){
        cout<<"yes it is +ve"<<endl;
    }else{
        cout<<"negative"<<endl;
    }
    
    

    // if--else if-else if---....-else
    // ternary statement
    //                  ==> statement? statement1:statement2;  for eg
    cout<<(n>0?"positive":"negative")<<endl;
    //------------------------------------------------------------------------------------------------


    //LOOPS;
    // avoid infinte loop
    // while loops;
    int m =5;
    while(m>0){
        cout<<m<<endl;
        m--;
    }
    
    // for loop(initilization;condition;updation)
    for(int i=1; i<5; i++){
        cout<<i<<endl;
    }

    // do while loops, benifit of this action will be sure taken atleast one time as execution happens first then check 
    do{
        cout<<"mani";
    }while(5<3);

    // we can create nested loop
    for(int i=0; i<5; i++){
        for(int j=0; j<5;j++){
            cout<<i*j;
        }
        cout<<endl;
    }
}
