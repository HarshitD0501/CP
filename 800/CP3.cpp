// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //   int t;
// // //   cin>>t;
// // //   while(t--){
// // //     int n;
// // //     cin>>n;
// // //     string s ;
// // //     cin>>s;
// // //     int emp=0;
// // //     int seg=0;
// // //     if(s.length()==n){
// // //       for(int i=1;i<n;i++){
// // //         if(s[i]=='.'){
// // //           emp++;
// // //           if(i==0 || s[i-1]=='#'){
// // //             seg++;
// // //           }
// // //         }
// // //       }
// // //     }else{
// // //       cout<<"Enter valid string of size "<<n;
// // //     }
// // //     if(emp==0){
// // //       cout<<"0"<<endl;
// // //     }else{
// // //       cout<<emp-seg<<endl;
// // //     }

// // //   }
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;

// //         string s;
// //         cin >> s;

// //         int emptyCells = 0;
// //         int segments = 0;

// //         for (int i = 0; i < n; i++) {
// //             if (s[i] == '.') {
// //                 emptyCells++;

// //                 // Start of a new segment of empty cells
// //                 if (i == 0 || s[i - 1] == '#') {
// //                     segments++;
// //                 }
// //             }
// //         }

// //         if (emptyCells == 0) {
// //             cout << 0 << endl;
// //         } else {
// //             cout << emptyCells - segments << endl;
// //         }
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         int ans = 0;
//         int cnt = 0;

//         for (int i = 0; i < n; i++) {

//             if (s[i] == '.') {
//                 cnt++;
//             } else {
//                 // For every segment of empty cells
//                 ans += (cnt + 1) / 2;
//                 cnt = 0;
//             }
//         }

//         // last segment
//         ans += (cnt + 1) / 2;

//         cout << ans << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        if (s.find("...")!=string::npos){
            cout<<2<<endl;
        }
        else {
            int cnt=0;
            for (char c : s) {
                if (c=='.') {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}