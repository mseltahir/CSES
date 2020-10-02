// https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
	LL n, s = 1;
    cin >> n;
    for(int i = 0; i <n; i++){
        s = 2*s % (int(1e9+7));
    }
    cout << s;
    return 0;
}
