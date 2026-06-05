//header
//Boilerplate code
#include <iostream>
using namespace std;
#include <string>

//writing main function
int main(){

    // writing code for print
    // use end line character <<endl,<<"\n"
    cout<<"Lovely Anand\nloves\nManish kumar"<<endl;
    

    //  ==>  "Variables"
    //start name with _ or some alphabet
    // always declare data type  
    
    // char-1bytes-->use ASCI codes,

    // int-4bytes (8bits=1bytes),
    int age=21;
    cout<<age<<endl;
    cout<<sizeof(age)<<"-bytes"<<endl;

    // float=>4 bytes
    float f=9.9999f;
    cout<<sizeof(f)<<"-bytes"<<endl;

    // Bool=> either true or false stored as 1 or 0

    // double=> float but of 8bytes

    // till this all are primitive data types
    
    //------------------------------------------------------------------------------
    
    // Typecasting:

    //typeconversion -- implicit
    char grad='A';    
    int grade =grad;
    cout<<grade<< " this is ascii value of "<< grad <<endl;

    // typecasting - big size to small size
    double price =100.99;
    int priceint=(int)price; //(new data type) do typecasting
    cout<<priceint<<endl;


    // taking input
    string say;
    // cin>>say;
    // cout<<say<<endl;

    //operators
    //Arithmetic
    int a=8,b=4;
    int sum=a+b;
    int diff=a-b;
    int mult=a*b;
    int div=a/b;
    cout << sum << "\n" << diff << "\n" << mult << "\n" << div << endl;
    // % for modulo, remainder
    // if in division we have different data type , higher size will be preffered

    //relational operators
    //<,<=,>,>=,==,!=  returns either true or false

    //logical operators

    // ! logical not 1-->0,0-->1
    // || , && like AND and OR gates , logical operation


    // unary operators
    //  ++,-- increment and decrement  
    //  a++ pehle kam phir update
    //  ++q pehle update then kam 
    


    


    // at end always
    //return 0;
}