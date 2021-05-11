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
 string s;   cin >> s;
  bool vis[26]={0};
   char last;
last = s[0];


 for(int i=0; i<n+1; i++){
   if(last != s[i]){
     if(vis[last-'A']){
     cout << "NO\n";
       return;
    }
     else vis[last-'A'] = 1, last = s[i];
   }
 }

cout << "YES\n";




}






int main(){

int T; cin >> T;

while(T--){

 Solve();

	}


  return 0;
}


