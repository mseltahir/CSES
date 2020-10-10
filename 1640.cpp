// https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    array<int, 2> arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
        arr[i][1] = i + 1;
    }
    sort(arr, arr+n);
    for(int i = 0, j = n-1; i < j;){
        if(arr[i][0] + arr[j][0] == x){
            cout << min(arr[i][1], arr[j][1]) << " " << max(arr[i][1], arr[j][1]) << "\n";
            return 0;
        }
        else if(arr[i][0] + arr[j][0] > x) --j;
        else ++i;
    }
    cout << "IMPOSSIBLE\n"; 
    
    return 0;
}
