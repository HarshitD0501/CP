//A. Doremy's Paint 3
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>a[i];
      mp[a[i]]++;
    } 
    if(mp.size()==1){
      cout<<"Yes"<<endl;
    }
    else if (mp.size()>2){
      cout<<"No"<<endl;
    } 
    else{
      auto it = mp.begin();
      int c1 = it->second;
      it++;
      int c2 = it->second;
      if(abs(c1-c2)<=1){
        cout<<"Yes"<<endl;
      }else{
        cout<<"No"<<endl;
      }
    }
    
  }
  return 0;
}
