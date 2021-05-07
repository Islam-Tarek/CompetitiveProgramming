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



// First of all write the algorithm on PAPIR 

void Solve(){
int n;  cin >> n; 
 int arr[3]={0};
 //// int c0=0, c1=0, c2=0;
   // vector<vector<int>>v(3);
      
   
  for(int i=0; i<n; i++){
    int x; cin >> x;
     arr[x%3]++;
   }
   
   int limit = n/3;
    int cnt = 0;
  
  for(int i=0; i<3*2; i++){
	  
	  while(arr[i%3] > limit){
	    arr[i%3]--;
	     arr[(i+1)%3]++;
	      cnt++;
	    } 
  
    }
  
  
   cout << cnt << endl;
  
   




}


int main(){
	
int T; cin >> T; 
	
while(T--){

 Solve();	
	
	}
	
	
  return 0;	
}



