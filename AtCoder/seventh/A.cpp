#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  string s ;
  cin>>s;
  int m=0, l=0;
  for(int i=0;i<n;i++){
    if(s[i]=='W'){
      l++;
      m=max(m,l);
    }else{
      l=0;
    }
  }
  cout<<m<<'\n';
  return 0;
}