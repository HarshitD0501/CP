#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  cin>>x;
  bool p=false;
  for(int i=0;i<x;i++){
    int m;
    cin>>m;
    if(m>=0){
      p=true;
    }
  }
  if(!p) cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n';
  return 0;
}