#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int m , d;
  cin>>m>>d;
  string s ;
  cin>>s;
  int l=0,r=0;
  vector<bool> v(m,false);
  for(int i=0;i<m;i++){
    if(s[i]=='G'){
      l=max(0,i-d);
      r=min(m-1,i+d);
      for(int j=l;j<=r;j++){
        v[j]=true;
      }
    }  
  }
  int st=0;
    for(int i=0;i<m;i++){
      if(v[i]==false){
        st++;
      }
  }
  cout<<st<<'\n';
  return 0;
}