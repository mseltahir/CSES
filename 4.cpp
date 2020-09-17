// https://cses.fi/problemset/task/1094/

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    LL ans = 0;
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        if(arr[i] < arr[i-1]) {
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        } 
    }
    cout << ans;
    return 0;
}
