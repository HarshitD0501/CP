#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='0'){
        s.erase(i,1);
        break;
      }
    }
    for(int i=0;i<s.length();i++){
      if(s[i]=='1'){
        s.erase(i,1);
        break;
      }
    }
    cout<<s<<'\n';
  }
  return 0;
}