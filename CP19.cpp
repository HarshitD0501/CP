#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int neg=0,pos=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==1) pos++;
      else neg++;
    }
    int p=0;
    while(neg>pos){
      neg--;
      pos++;
      p++;
    }
    if(neg%2!=0){
      p++;
    }
    cout<<p<<'\n';
  }
  return 0;
}