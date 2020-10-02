// https://cses.fi/problemset/task/1090

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int ans = 0;
    vector<bool> v(n, true);
    for(int i = 0; i < n-1; i++){
        if(v[i]){
            for(int j = i+1; j < n; j++){
                if(v[j]){
                    if(arr[i] + arr[j] > x && v[j-1]){
                        v[i] = false;
                        v[j-1] = false;
                        ans++;
                        break;
                    }
                    else if(arr[i] + arr[j] == x && v[j]){
                        v[i] = false;
                        v[j] = false;
                        ans++;
                        break;
                    }
                    else if(i == n-2 && arr[i] >= x){
                        ans+=2;
                        v[i] = v[i+1] = false;
                        break;
                    }
                }
            }
            if(v[i]) ans++;
        }
    }
    if(v[n-1]) ans++;
    cout << ans << "\n";
    return 0;
}
