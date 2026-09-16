#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n ;
  cin>>n;
  vector<int> v(n);
  int s=0;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=1;i<n-1;i++){
    if(v[i-1]<v[i] && v[i+1]<v[i]) s++;
  }
  cout<<s<<'\n';
  return 0;
}