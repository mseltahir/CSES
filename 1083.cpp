// https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int n;
    cin >> n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++) cin >> arr[i];
    sort(arr, arr+n-1);
    bool found = false;
    for (int i = 1; i < n-1; ++i) if(arr[i] - arr[i-1] != 1){
        cout << arr[i] - 1;
        found = true;
    }
    if(!found){
        if(arr[0] == 1) cout << n;
        else cout << 1;
    }
    return 0;
}
