// we will solve this question by linear search Moores algorithm
#include <iostream>
#include <vector>
using namespace std;

int moores(vector<int> vec){

    int ans=vec[0];
    int freq=1;
    int sz = vec.size();

    for(int i=1;i<sz;i++){

        if(freq==0){
            ans=vec[i];
        }        
        if(vec[i]==ans){
            freq++;
        }else{
            freq--;
        }        
    }

    int count=0;
    for(int i=0;i<sz;i++){
        if(vec[i]==ans){
            count++;
        }
    }

    if (count>sz/2){
        return ans;
    }else{
        cout<<"No majority element exist"<<endl;
        return 0;
    }
    
}