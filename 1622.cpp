// https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 0;
    vector<string> v;
    do{
        v.push_back(s);
        cnt++;
    } while (next_permutation(s.begin(), s.end()));
    cout << cnt << "\n";
    for(auto i: v) cout << i << "\n";
    return 0;
}
