// https://cses.fi/problemset/task/1070/

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int n;
    cin >> n;
    if(n == 2 || n == 3) cout << "NO SOLUTION";
    else if(n == 4) cout << "2 4 1 3";
    else {
        int ans[n]; 
        ans[0] = 1;
        int k = 1, i = 3;
        bool second = false;
        while(true){
            if(i > n && !second){
                i = 2;
                second = true;
            } else if(i > n && second) {
                for(int j = 0; j < n; j++) cout << ans[j] << " ";
                break;
            } else {
                ans[k++] = i;
                i += 2;
            }
        }
    }
    return 0;
}
