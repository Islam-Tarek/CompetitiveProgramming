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


void Solve(){

int n; cin >> n;
 unordered_map<int,ll>m;
  ll ans = 0;
 for(int i=0; i<n; i++){
   int x; cin >> x;
    ans += m[x-i];
     m[x-i] += 1;
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


