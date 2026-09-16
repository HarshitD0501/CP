  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      long long a, b, x;
      cin>>a>>b>>x;
      vector<pair<long long, long long>>A,B;
      long long s=0;
      A.push_back({a, s});
      while (a>0) {
          a/=x;
          s++;
          A.push_back({a, s});
      }
      long long s2=0;
      B.push_back({b, s2});
      while (b>0) {
          b /= x;
          s2++;
          B.push_back({b, s2});
      }
      long long m = LLONG_MAX;
      for (auto &pA : A) {
          long long val1 = pA.first;
          long long l= pA.second;
          for (auto &pB : B) {
              long long val2 = pB.first;
              long long i = pB.second;
              long long c = l + i  + abs(val1 - val2);        
              m= min(m, c);
          }
      }
      cout<<m<<'\n';
    } 
    return 0;
  }