#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  long long m;
  cin>>n>>m;
  vector<long long> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  long long s=0;
  for(int i=0;i<n;i++){
    if(v[i]<0){
      s+=-v[i];
    }
    else if(v[i]>m){
      s+=v[i]-m;
    }
  }cout<<s<<'\n';

  return 0;
}