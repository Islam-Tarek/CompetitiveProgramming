#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back

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

ll n; cin >> n;
int ans = 0;

 for(int i=1; i<=9 ;i++){
    for(ll j=i; j<=n; j=j*10+i){
       ans += 1;
    }
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



