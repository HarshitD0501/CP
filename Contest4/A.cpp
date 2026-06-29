  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
      int n;
      long long c;
      cin>>n>>c;
      vector<long long> a(n);
      vector<long long> b(n);
      long long co=0;
      bool t=false,m=false;
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];
      for(int i=0;i<n;i++){
        if(a[i]<b[i]){
          m=true;
        }else{
          co+=a[i]-b[i];
        }
      }
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      long long cu=c;
      for(int i=0;i<n;i++){
        if(a[i]<b[i]){
          t=true;
          break;
        }else{
          cu+=a[i]-b[i];
        }
      }
      if(t){
        cout<<-1<<'\n';
      }else if(m){
        cout<<cu<<'\n';
      }else{
        cout<<min(cu,co)<<'\n';
      }
    }
    return 0;
  }