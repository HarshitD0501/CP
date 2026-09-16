#include<bits/stdc++.h>
using namespace std;
bool consecutive(long long n){
  bool k=false;
  while(n>0){
    if(n%10==0){
      if(k) return true;
      k=true;
    }else{
      k=false;
    }
    n/=10;
  }return false;
}
long long solve(long long n){
  for(long long i=1;i<=100;i++){
    long long l=n*i;
    if(consecutive(l)){
      return l;
    }
  }return 0;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long k;
    cin>>k;
    cout<<solve(k)<<'\n';
  }
  return 0;
}