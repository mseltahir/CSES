// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, d;
    cin >> n >> m >> d;
    int ap[n], cus[m];
    for(int i = 0; i < n; i++)
        cin >> ap[i];
    for(int i = 0; i < m; i++)
        cin >> cus[i];
    sort(ap, ap + n);
    sort(cus, cus + m);
    stack<int> a, c;
    for(auto i : ap) a.push(i);
    for(auto i : cus) c.push(i);
    int ans = 0;
    while(!a.empty() && !c.empty()){
        if(abs(a.top() - c.top()) <= d){
            ans++;
            a.pop();
            c.pop();
        }
        else {
            if(a.top() > c.top()){
                a.pop();
            } else {
                c.pop();
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
