#include <iostream>
#include <vector>
using namespace std;

int is_valid(vector<int> books, int mx ,int stu){
    int stu_curr=1;
    int sz= books.size();
    int curr_pages=0;

    for(int i=0;i<sz;i++){
        if(books[i]>mx){
            return 0;
        }

        if(curr_pages+books[i]<=mx){
            curr_pages+=books[i];
        }else{
            curr_pages=books[i];
            stu_curr+=1;
        }
    }
    if(stu_curr<=stu){
        return 1;
    }else{
        return 0;
    }


    
}


int allocateBooks(vector <int> books,int stu){
    int str=0;
    int end=0;
    for(int i=0;i<books.size();i++){
        end+=books[i];
    }
    int mid=0;
    int ans=0;
    while(str<=end){
        
        mid=str+(end-str)/2;
        if(is_valid(books,mid,stu)==1){
            ans=mid;
            end=mid-1;
        }else{
            str=mid+1;
        }
    }
    return ans;
}

int main(){

    return 0;
}