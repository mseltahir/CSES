// https://cses.fi/problemset/task/1071

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int tt;
    cin >> tt;
    while(tt--){
        LL y, x;
        cin >> y >> x;
        LL ans;
        if(y >= x){
            if(y % 2 == 0) ans = y*y - x + 1;
            else ans = (y-1)*(y-1) + x; 
        } else {
            if(x % 2 == 1) ans = x*x - y + 1;
            else ans = (x-1)*(x-1) + y;
        }

        cout << ans << "\n"; 
    }    
    return 0;
}
