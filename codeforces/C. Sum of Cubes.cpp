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

ll arr[100000];


void Solve(){

ll n;  cin >> n; 
 //bool ok= 0;
 
for(int i=1; i<(ll)cbrt(n/2)+1; i++){
    ll a = arr[i];
     if((arr[(ll)floor(cbrt(n-a))] == n-a) || (arr[(ll)ceil(cbrt(n-a))] == n-a)){
		cout << "YES" << endl;
		  return;
		 }
	
	 }

      cout << "NO" << endl;


}


int main(){
	
int T; cin >> T; 
	
 for(ll i=0; i<10000+10; i++)
	 arr[i] = i*i*i;
	
while(T--){

 Solve();	
	
	}
	
	
  return 0;	
}


