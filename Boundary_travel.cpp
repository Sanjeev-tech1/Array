#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> boundaryTravel(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();

    vector<int>res;

    //travers the top rwo left from 2nd row

    for(int j=0;j<n;j++){
        res.push_back(mat[0][j]);
    }
    for(int i=1;i<n;i++){
        res.push_back(mat[i][m-1]);
    }
    for(int j=m-2;j>=0;j--){
        res.push_back(mat[n-2][j]);
    }
    for(int i=n-2;i>0;i--){
        res.push_back(mat[i][0]);
    }
    return res;
}
  
int main () {
    vector<vector<int>>mat={
        {1,2,3,4},  
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    vector<int>res=boundaryTravel(mat);
    for(auto val:res){
        cout<<val<<" ";
    }
    cout<<endl;
  
  
return 0;
}