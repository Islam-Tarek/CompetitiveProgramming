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

ll n , k;
ll dp[10005][22][22];
ll arr[10005];

void pre(){
    memset(arr, 0 , sizeof arr);
    memset(dp , -1 , sizeof dp);
}

ll solve(ll idx_i , ll frontAdd , ll backAdd){

    ll idx_j = n - idx_i - 1 - frontAdd + backAdd;

    if(idx_i >= idx_j)
        return 0;

    ll &ret = dp[idx_i][frontAdd][backAdd];
    if(ret != -1)
        return ret;

    if(frontAdd + backAdd > k)
        return 10000;

    if(arr[idx_i] == arr[idx_j])
        return ret = solve(idx_i+1, frontAdd, backAdd);

    return ret = 1 + min(solve(idx_i, frontAdd+1, backAdd) , solve(idx_i+1, frontAdd, backAdd+1));

}

int main(){

    int T;  cin >> T;
    int casee = 1;

    while(T--){
        pre();
        cin >> n >> k;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = solve(0 , 0 , 0);

     //   cout << "ans = " << ans << endl;

        cout << "Case " << casee++ << ": ";
        if(ans == 0)
            cout  << "Too easy\n";
        else if(ans <= k)
            cout << ans << endl;
        else
            cout << "Too difficult\n";

    }




  return 0;
}
