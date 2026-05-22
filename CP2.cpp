#include<bits/stdc++.h>
using namespace std;
int main(){ 
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int l = a[0];
    for(int i=1;i<n;i++){
      l = max(l,a[i]-a[i-1]);
    }
    l=max(l,2*(x-a[n-1]));
    cout<<l<<endl;
  }return 0;
}