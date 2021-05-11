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

 for(int i=0; n>=0; i++ ){
    int cur = i , s = 0;
     while(cur > 0 ){
        s += cur % 10;
        cur /= 10;
      }

    if(s == 10) --n;
    if(n == 0){
     cout << i << endl;
       break;
     }
  }

}


int main(){

int T = 1; // cin >> T;

while(T--){

 Solve();

	}


  return 0;
}



