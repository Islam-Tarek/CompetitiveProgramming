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


void Solve(){


int n; cin >> n; 
 vector<int>v(n);
  int ans = 0;
   int a,b;
   
 for(auto &i : v) cin >> i;
    
    
  for(int i=0; i<n-1; i++){

    a = min(v[i+1],v[i]);
     b = max(v[i+1],v[i]);	  
	 
	while(a*2 < b){
		a *= 2;
		 ans++;
	   }  
	  //  last = b;
	  
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


