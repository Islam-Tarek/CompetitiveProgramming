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
const int N = 2e5 + 5;
int a[N], b[N];
vector<ll> v[2];


void Solve(){

ll n, m; cin >> n >>m;
 vector<ll>v(n);
  vector<ll>one,two;
   ll sum = 0;

 for(auto &i : v) cin >> i ;

  for(auto &i : v){
   int x; cin >> x;
   x==1? one.push_back(i) : two.push_back(i);
     sum += i;
  }
     if(sum < m){
     cout << -1 << endl;
      return;
   }

  sort(one.rbegin(),one.rend());
   sort(two.rbegin(),two.rend());

 for(int i=1; i<one.size(); i++)
   one[i] += one[i-1];

ll ans = 10000000000;
 ll have = 0;

  for(ll i=-1; i<(ll)two.size(); i++){

    if(i != -1) have += two[i];
     if(have >= m){
       ans = min(ans, (i+1)*2);
         continue;
      }

   ll l = lower_bound(one.begin(),one.end(),m-have)-one.begin();
     if(l < (ll)one.size())  ans = min(ans, (i+1)*2+l+1);
  }
      cout << ans << endl;




}


int main(){

int T; cin >> T;

while(T--){

 Solve();

	}


  return 0;
}



