#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,d,st;
  cin>>n>>d>>st;
  vector<int> v(n);
  int s=0;
  for(int i=0;i<n;i++){
    cin>>v[i];
    s+=v[i];
  }
  if(st>(n-st)){
    s+=d*(st+2*(n-st)-1);
  }else{
    s+=d*(2*st-1+n-st);
  }

  // if(n==s){
  //   s+=d*(st-1);  
  // }else{
  //   s+=d*(st-1)+d*(n-1);
  // }
  
  cout<<s<<'\n';
  return 0;
}