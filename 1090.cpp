// https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int paired = 0;
    for(int i = 0, j = n-1; i < j;){
        while(i < j && v[i] + v[j] > x) --j;
        if(i == j) break;
        ++paired;
        ++i; --j;
    }
    cout << n - paired << "\n";
            
    return 0;
}
