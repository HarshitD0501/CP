#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int c=0;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      c=c^a[i];
    }
    if(n%2!=0) cout<<c<<endl;
    else{
      if(c==0) cout<<0<<endl;
      else cout<<-1<<endl;
    }
  }
  return 0;
}