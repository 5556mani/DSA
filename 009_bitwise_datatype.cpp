#include <iostream>
using namespace std;

void notes(){
    // bitwise operators && || ^ << >>
    // scope- local and gobal variable
    // operator precedance -> unary-> *,/,% > +,- > relational > bitwise > assignment
    // datatype modifiers long,long-long,unsigned , signed, short
    
}

int HW1(int a){


    // while(a>0){
    //     if (a==1){
    //         cout<<"NOT a power of 2"<<endl;
    //         break;
    //     }else {
    //         a=a>>1;
    //     }
    //}
    
    // this method is not right
    // we should we use bitwise && between input and 1
    // if output is 1 then not a power of 2 if 0 then power of 2
    //////////////////////////////////////////////////////////////////////////////////

    // bool value = 1&a;
    // if(value){
    //     cout<<"NOT power of 2"<<endl;
    // }else{
    //     cout<<"power of 2"<<endl;
    // }
    // this is also wrong, this checks for even odd not for the power of the 2
    //////////////////////////////////////////////////////////////////////////////////

    bool value=(a & (a-1));
     if (value){
        cout<<"NOT a power"<<endl;
     }else{
        cout<<"POWER of 2"<<endl;
     }


    return 0;
}

int HW2(int a){
    int rev_num=0;
    
    while (a>0){
        int remainder=a%10;
        rev_num = rev_num*10;
        rev_num = rev_num + remainder;
        a=a/10;

    }
    cout<<rev_num<<endl;
}


int main(){
    HW1(1288);
    HW2(138945);
    return 0;
}

