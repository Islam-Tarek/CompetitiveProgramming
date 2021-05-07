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




ll arr[100000];



void Solve(){

int a, b, k; cin >> a >> b >> k;
 map<int,int>ma; 
  map<int,int>mb;
   int arra[k];
    int arrb[k];
    
   for(int i=0; i<k; i++){
	  cin >> arra[i];
	 ma[arra[i]]+=1;  
   }
    for(int i=0; i<k; i++){
	   cin >> arrb[i];
	 mb[arrb[i]]+=1;   
   }
    
 ll ans = 0;
  
 for(int i=0; i<k; i++)
  ans += k-((ma[arra[i]]+mb[arrb[i]])-1); 
 
 	
 cout << ans/2 << endl;


}


int main(){
	
int T; cin >> T; 

	
while(T--){

 Solve();	
	
	}
	
	
  return 0;	
}


