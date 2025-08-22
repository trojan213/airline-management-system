#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int solve(string s){
    stack<char> st;
    for(auto it: s){
        if(it == '(') st.push(it);
        else{
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string s;
    cin >> s;
    
    cout << solve(s);
    return 0;
}