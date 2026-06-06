#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int m=INT_MAX;
    bool f=false;
    for(int i=0;i<n-1;i++){
      if(a[i]>a[i+1]){
        f=true;
        break;
      }else{
        int d=a[i+1]-a[i];
        m=min(m,(d/2)+1);
      }
    }
    if(!f){
      cout<<m<<'\n';
    }else{
      cout<<"0"<<'\n';
    }
  }
  return 0;
}