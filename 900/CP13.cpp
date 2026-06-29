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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    // int l=0;
    // if(s==1){
    //   cout<<1<<'\n';
    //   continue;
    // }else if(s==0){
    //   cout<<0<<'\n';
    //   continue;
    // }
    // while(l<=n){
    //   if(v[l]==0 || v[n-1]==0){
    //     c++;
    //   }n--;
    //     l++;
    // }cout<<c<<'\n';
    int c=0;
    int s=false;
    for(int i=0;i<n;i++){
      if(v[i]!=0){
        if(!s){
          c++;
          s=true;
        }
      }else{
        s=false;
      }
    }
    if(c==0){
      cout<<0<<'\n';
    }  
    else if (c==1){
      cout<<1<<'\n';
    }
    else{
      cout<<2<<'\n';
    } 
  }
  return 0;
}