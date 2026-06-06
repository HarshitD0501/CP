#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ti=0;
    int c=0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x==0){
        ti+=1;
      }else{
        ti=0;
      }
      c=max(c,ti);
    }
    cout<<c<<endl;
  }
  return 0;
}