#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s ;
    cin>>s;
    int c=1;
    int m=1;
    for(int i=1;i<n;i++){
      if(s[i]==s[i-1]){
        c++;
      }else{
        m=max(c,m);
        c=1;
      }
    }
    m=max(m,c);
    cout<<m+1<<'\n';
  }
  return 0;
}