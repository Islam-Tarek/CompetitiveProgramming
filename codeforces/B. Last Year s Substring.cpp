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
  string s; cin >> s;
   string target = "2020";

 for(int i=0; i<=4; i++){
  if(s.substr(0 , i) + s.substr(n - 4 + i , 4 - i) == target){
    cout << "YES\n";
       return;
     }
  }

 cout << "NO\n";
}


int main(){

int T = 1;  cin >> T;

while(T--){

 Solve();

	}


  return 0;
}



