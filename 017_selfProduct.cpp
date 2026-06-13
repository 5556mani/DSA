#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int preffix=1;
        int sze=nums.size();
        vector <int> product(sze,1);
        for(int i=0;i<sze;i++){
            product[i]=preffix;
            preffix*=nums[i];
        }
        int suffix=1;
        for(int i=sze-1;i>-1;i--){
            product[i]*=suffix;
            suffix=suffix*nums[i];
        }
        return product;
    }
};