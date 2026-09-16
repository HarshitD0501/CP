#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int s=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x%k==0) s++;
  }
  cout<<s<<'\n';
  return 0;
}