#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void reverseinGroup(vector<int>& arr,int k){
 
    int n=arr.size();
    for(int i=0;i<n;i+=k){
        int left=i;

        //to handle the sub array[left,right]
        int right=min(i+k-1,n-1);

        while(left<right){
        swap(arr[left++],arr[right]);
        }
    }
}
  
int main () {
    vector<int>arr={1,2,3,4,5,6,7,8};
    int k=3;
    reverseinGroup(arr,k);
    for(int num:arr){
        cout<<num<<" ";
    }
  
  
return 0;
}