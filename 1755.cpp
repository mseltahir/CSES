// https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    set<char> unique(s.begin(), s.end());
    vector<pair<int, char>> m;
    for(auto c: unique){
        int cnt = count(s.begin(), s.end(), c);
        m.push_back(make_pair(cnt , c));
    }
    int x = 0;
    for(auto p: m) if(p.first % 2 == 1 ) x++;
    if(x > 1 || (x == 1 && s.size()%2 == 0)) cout << "NO SOLUTION";
    else{
        string fh = "", sh="";
        pair<int, string> b;
        for(auto p: m){
            if(p.first % 2 == 1) b = p;
            else{
                string s(p.first/2, p.second);
                fh += s;
                sh = s + sh;
            }
        }
        string ans;
        if(x == 1){
            ans = fh;
            for(int i = 0; i < b.first; i++) ans += b.second;
            ans += sh;
        }
        else ans = fh + sh;
        cout << ans;
    }
    return 0;
}
