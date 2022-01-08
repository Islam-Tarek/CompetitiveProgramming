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

vector<ll>divisors;

ll n;

ll getPower(ll i , bool negative){

    ll power = 1;

    while(pow(i , power) < abs(n))
        power++;

    if(pow(i , power) != abs(n))
        power++;

    if(pow(i , power) == abs(n)){
        if(negative)
          return (power % 2 == 1 ? power : -1);
        else
          return power;
    }

    return -1;
}




int main(){

    fast();

    while(cin >> n){

       if(n == 0)
            break;

       divisors.clear();

       ll ans = 1;

       for(ll i = 2; i * i <= abs(n); i++){
            if(n % i == 0)
                divisors.push_back(i);
       }

       for(auto num : divisors)
            ans = max(ans , getPower(num , (n < 0)));

       cout << ans << endl;

    }



  return 0;
}
