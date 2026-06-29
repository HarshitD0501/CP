#include<bits/stdc++.h>
using namespace std;
int solve(string s , char c1 , char c2){
  int n= s.length();
  int d=0 , idx=-1;
  for(int i=n-1;i>=0;i--){
    if(s[i]==c2){
      idx=i;
      break;
    }d++;
  }
  if(idx==-1) return 1e9;
  bool b=false;
  for(int i=idx-1;i>=0;i--){
    if(s[i]==c1){
      b=true;
      break;
    }d++;
  }
  return (b ? d : 1e9);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int ans = min({
      solve(s,'0','0'),
      solve(s,'2','5'),
      solve(s,'5','0'),
      solve(s,'7','5')
    });
    cout<<ans<<'\n';
  }
  return 0;
}