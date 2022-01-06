#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const double OO = 1e9;
const double EPS = 1e9 * -1;
const int MOD = 1e9;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


ll dp[55][55];
int arr[55];

ll solve(int start , int endd){

    ll &ret = dp[start][endd];

    if(start + 1 == endd)
        return ret = 0;

    if(ret != -1)
        return ret;

   ll best = 1000000;
   for(int i = start + 1;  i < endd; i++){
        best = min(best , solve(start , i) + solve(i , endd) + arr[endd] - arr[start]);
   }
   return ret = best;
}

void pre(){
    memset(dp , -1 , sizeof dp);
    memset(arr , 0 , sizeof arr);
}

int main(){

    int T;  // cin >> T;
    int len;

    while(cin >> len && len ){
        pre();
        int cuts;  cin >> cuts;

        for(int i = 1; i <= cuts; i++)
            cin >> arr[i];
        arr[0] = 0 , arr[cuts + 1] = len;
        cout << "The minimum cutting is " << solve(0, cuts + 1) << ".\n";
    }



  return 0;
}
