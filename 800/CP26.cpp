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
    int c=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==2) c++;
    }
    int b=0;
    if(c%2!=0) cout<<-1<<'\n';
    else if(c==0) cout<<1<<'\n';
    else{
      for(int i=0;i<n;i++){
        if(v[i]==2) b++;
        if(b==(c/2)){
          cout<<i+1<<'\n';
          break;
        } 
      }
    }
  }
  return 0;
}