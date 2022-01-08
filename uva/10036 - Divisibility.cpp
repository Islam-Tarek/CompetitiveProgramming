#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const double OO = 1e9;
const double EPS = 1e9 * -1;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n , k;
vector<ll>v;
bool ok;
ll mem[10005][150];

int solve(int idx , ll currSum){
    if(idx == n){
        if(currSum % k == 0){
            ok = true;
            return 1;
        }
        return 0;
    }



    ll &ret = mem[idx][currSum];
    if(ret != -1)
        return ret;

    ret = solve(idx + 1 , ((currSum + v[idx]) % k + k) % k);
    ret = solve(idx + 1 , ((currSum - v[idx]) % k + k) % k);

    return ret;

}

int main(){


    int T;   cin >> T;

    while(T--){

        cin >> n >> k;
        ok = false;
        v.clear();
        v.resize(n);

        memset(mem , -1 , sizeof mem);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        solve(0 , 0);
        cout << (ok ? "Divisible" : "Not divisible") << endl;
    }


  return 0;
}
