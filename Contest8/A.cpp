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
    vector<int> a(n);
    int p=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==1){
        p++;
      }
    }
    if(n%2==0 && (p%2==(n/2)%2)){
      cout<<"YES"<<"\n";
      continue;
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}