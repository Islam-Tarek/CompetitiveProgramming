#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
const int OO = 1e9;
const double EPS = 1e-9;


void fast()
{
  ios_base::sync_with_stdio(NULL);
   cin.tie(0);
    cout.tie(0);
}


void input()
{
 freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
}

ll mod = 1000000007;


ll fast_power(ll n , ll power , ll mod){

    if(power == 0)
        return 1;

    ll res = fast_power(n * n % mod , power / 2 , mod);

    return power % 2 == 0 ? res : res * n % mod;
}


ll tower_coloring(ll n){
    return fast_power(3 ,fast_power(3 , n , mod - 1), mod);
}


int main(){

    fast();

    ll n;  cin >> n;

    ll ans = tower_coloring(n);

    cout << ans << endl;


  return 0;
}
