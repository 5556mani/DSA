// we will be writng code to solve two sum problem of leecode
# include <iostream>
# include <vector>
using namespace std;

vector<int> twoSumPair(vector<int> vec,int target){
    // we will be using two pointer approach
    
    int sz = vec.size()/sizeof(vec[0]);
    int i=0,j=sz-1;

    vector<int> ans;

    while (i<j){

        if(vec[i]+vec[j]<target){
            i++;
            continue;
        }

        else if(vec[i]+vec[j]>target){
            j--;
            continue;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);

            return ans;
        }
    }
}
