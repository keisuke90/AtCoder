// #include <bits/stdc++.h>
// using namespace std;

// vector<string> vec(100009);

// int main(){
//     int Q;
//     int x;
//     string s;

//     cin >> Q;
//     for(int i = 0; i < Q; i++){
//         cin >> x;
        
//         if(x == 1){
//             cin >> s;
//             vec.push_back(s);
//         } else if(x == 2){
//             cout << vec[vec.size()-1] << endl;
//         } else if(x == 3){
//             vec.pop_back();
//         }
//     }
// } 


// stackを使った解法
#include <bits/stdc++.h>
using namespace std;

int Q;
int type[100009]; string x[100009];
stack<string> S;

int main(){
    cin >> Q;
    for(int i = 1; i <= Q; i++){
        cin >> type[i];
        if (type[i] == 1) cin >> x[i];
    }

    for(int i = 1; i <= Q; i++){
        if(type[i]==1) S.push(x[i]);
        if(type[i]==2) cout << S.top() << endl;
        if(type[i]==3) S.pop();
    }
} 