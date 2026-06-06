#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    int s=0;
    cin>>n;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x%2!=0){
        s+=1;
      }
    }
    if(s%2==0){
      cout<<"Yes"<<'\n';
    }else{
      cout<<"No"<<'\n';
    }
  }
  return 0;
}