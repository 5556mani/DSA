#include <iostream>
#include <vector>
using namespace std;


int maxArea(vector<int>& height) {
    // We will be using two pointer approach
    int i=0;
    int j= height.size()-1;
    int width=j-i;
    int heightBar=0;
    int maxWater=0;
    // int loop_count=0;
    while(i<j ){
        // cout<<"loop is initialised"<<endl;
        heightBar=min(height[i],height[j]);
        // cout<<"height now: "<<heightBar<<endl;
        width=j-i;
        maxWater=max(maxWater,((heightBar)*(width)));
        // cout<<"max water right now: "<<maxWater<<endl;
        if(height[i]<height[j]){
            int curr_i=i;
            while(height[i]>=height[curr_i] && curr_i<j){
                curr_i++;
            }
            i=curr_i;
            
            // cout<<"Right shift"<<endl;
        }else{
            int curr_j=j;
            while(height[j]>=height[curr_j] && curr_j>i){
                curr_j--;
            }
            j=curr_j;
            
            // cout<<"Left shift"<<endl;
        }
        //loop_count+=1;
    }
    return maxWater;
    
}



int main(){
    vector<int> Bar={9,4,1,8,7,6,8,9,8,5,4,3,2,7};
    int Area=maxArea(Bar);
    cout<<Area<<endl;
}