  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      string s ;
      cin>>s;
      int n=s.length() , ones=0,zeroes=0;
      bool p=false;
      for(char c : s){
        if(c=='1') ones++;
        else if(c=='0') zeroes++;
      }
      for(int i=0;i<n;i++){
        if(s[i]=='0'){
          if(ones>0){
            ones--;
          }else{
            cout<<n-i<<'\n';
            p=true;
            break;
          }
        }else{
          if(zeroes>0) zeroes--;
          else{
            cout<<n-i<<'\n';
            p=true;
            break;
          }
        }
      }
      if(p==false){
          cout<<0<<'\n';
        }
    }
    return 0;
  }