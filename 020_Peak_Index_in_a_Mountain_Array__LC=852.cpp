#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int sz=arr.size();

        if(sz==1){
            return 0;
        }
         
        if(sz==2){
            if(arr[0]>arr[1]){
                return 0;
            }else{
                return 1;
            }
        }
        int str=0;
        int end=sz-1;
        int mid=0;
        while(str<=end){
            mid=str+(end-str)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                return mid;
            }else{
                if(arr[mid]<arr[mid+1]){
                    str=mid;
                }else{
                    end=mid;
                }
            }

        }
    }
};
