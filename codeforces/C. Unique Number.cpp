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

int n; cin >> n;

 if(n > 45){
    cout << -1 << endl;
    return;
  }

 vector<int>v;

 for(int i = 9; i > 0; i--)
        if(n >= i) n -= i , v.pb(i);

 reverse(v.begin() , v.end());

  for(auto &i : v)
        cout << i;

   cout << '\n';


}


int main(){

int T; cin >> T;


while(T--){

 Solve();

	}


  return 0;
}


