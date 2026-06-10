#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0;
    int r=s.length()-1;
    int c;
    bool com=false;
    while(l<=r){
      if(s[l]==s[r]){
        cout<<r-l+1<<'\n';
        com=true;
        break;
      }else{
        l++;
        r--;
      }
    }
    if(!com) cout<<0<<'\n';
  }
  return 0;
}