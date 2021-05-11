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


ll n; cin >> n; 
 
 while(n%2 == 0) n /= 2;
  cout << (n>1? "YES":"NO") << endl;


}


int main(){
	
int T; cin >> T; 
	
while(T--){

 Solve();	
	
	}
	
	
  return 0;	
}


