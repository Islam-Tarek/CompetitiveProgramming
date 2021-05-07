#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))


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


 /////// First of all write the algorithm on PAPIR  ///////

const ll mod = 1e9+7;
ll fac[1008], inv[1008];

ll fastPower(ll b, ll p, ll mod){
 if(p == 0)
    return 1;
  ll res = fastPower(b*b%mod, p/2, mod);
  return p%2 == 0 ? res : res*b%mod;
}


ll ncr(ll cnt, ll insr){
 return fac[cnt]*(((inv[insr]%mod)*(inv[cnt-insr]%mod))%mod)%mod;
}




void Solve(){

int n, k; cin >> n >>  k;
 vector<int>v(n);
  for(auto &i : v) cin >> i;
 sort(v.rbegin(),v.rend());

int cnt = count(v.begin(),v.end(),v[k-1]);
 int insr = 0;
   for(int i=0; i<k; i++)
    if(v[i]==v[k-1])insr++;

  cout << ncr(cnt,insr) << endl;


}


int main(){

fac[0] = fac[1] = 1;
inv[0] = inv[1] = 1;
 for(int i=2; i<1005; i++){
   fac[i] = i * fac[i-1] %mod;
    inv[i] = fastPower(fac[i],mod-2,mod);
 }

int T; cin >> T;

while(T--){

 Solve();

	}


  return 0;
}
 
