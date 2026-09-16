#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<2){
      cout<<"No"<<'\n';
      continue;
    }
    int c=0;
    for(int i=2;i<n+1;i++){
      if((n+1)%i==0){
        c++;
      }
    }if(c){
      cout<<"No"<<'\n';
    }else{
      cout<<"Yes"<<'\n';
    }
  }
  return 0;
}