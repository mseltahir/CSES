// https://cses.fi/problemset/task/1092/

#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    LL n;
    cin >> n;
    if (n*(1 + n)/2 % 2 == 1) cout << "NO";
    else {
        vector<LL> odds, evens;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 1) odds.push_back(i);
            else evens.push_back(i);
        }
        LL osum = accumulate(odds.begin(), odds.end(), 0);
        LL esum = accumulate(evens.begin(), evens.end(), 0);
        if(osum > esum){
            int i = 1;
            while(i <= (osum-esum)/2){
                swap(odds[i], evens[i-1]);
                i++;
            }
        } else {
            int i = 0;
            while(i < (esum-osum)/2){
                swap(odds[i], evens[i]);
                i++;
            }
        }
        cout << "YES\n";
        cout << odds.size() << "\n";
        for(auto i: odds) cout << i << " ";
        cout << "\n" << evens.size() << "\n";
        for(auto i: evens) cout << i << " ";
    }
    return 0;
}
