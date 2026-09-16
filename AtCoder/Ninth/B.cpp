#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<char> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int c=0;
  for(int i=0;i<k;i++){
    if(v[i]=='S') c++;
  }
  int m=c;
  for(int i=k;i<n;i++){
    if(v[i]=='S') c++;
    if(v[i-k]=='S') c--;
    m=max(c,m);
  }
  cout<<m<<'\n';
  return 0;
}