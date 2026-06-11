#include <iostream>
#include <vector>
using namespace std;

int Maximumsum(vector<int> vec){
    int sz=vec.size();
    cout<<"size of input vector: "<<sz<<endl;
    int curr_sum=0;
    int max_sum=0;

    for(int i=0;i<sz;i++){
        //cout<<"loop started"<<endl;
        
        //cout<<"running loop on: "<<vec[i]<<endl;
        curr_sum+=vec[i];
        max_sum=max(max_sum,curr_sum);

        if (curr_sum<0){
            curr_sum=0;
        }
    }

    return max_sum;


}

int main(){
    vector<int> vec={1,3,-9,8,7,9,5,6,-4,-6,5,8,9};

    int max_sum=Maximumsum(vec);

    cout<<max_sum<<endl;
}