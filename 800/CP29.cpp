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
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
      if((a[i]%2)==(a[i+1]%2)) ans++;
    }
    cout<<ans<<'\n';
  }
  return 0;
}