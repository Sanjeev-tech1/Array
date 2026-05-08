#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maxSubarray(vector<int>&arr){
    int res=arr[0];

    for(int i=0;i<arr.size();i++){
        int currSum=0;

        for(int j=i;j<arr.size();j++){
            currSum=currSum+arr[j];

            //update resif currsum is greater than res
            res=max(res,currSum);
        }
    }
    return res;

}
  
int main () {
    vector<int>arr={2,3,-8,7 ,-1,2,3};
    cout<<maxSubarray(arr);

  
  
return 0;
}