#include<bits/stdc++.h>
#include<vector>
using namespace std;

void removeChar(string s,char c){
int j;
for(int i=0;i<s.size();i++){  
    if(s[i]!=c){
        s[j++]=s[i];

    }
}
s.resize(j);
}
  
int main () {
    string s="Sanjeev";
    removeChar(s,'e');
    cout<<s;
  
  
return 0;
}