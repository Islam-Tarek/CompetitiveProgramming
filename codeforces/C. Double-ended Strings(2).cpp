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





 string a, b;



 void Solve(){

 cin >> a >> b;

  if(a == b){
    cout << 0 << endl;
     return;
 }

  ll ans = 0;
  
  int n=a.size(), m=b.size();

  for(int i=1; i<min(n,m)+1; i++){
   for(int j=0; j<n-i+1; j++){
    for(int k=0; k<m-i+1; k++){
       if(a.substr(j,i) == b.substr(k,i)){
          ans = max(ans,(ll)2*i);
     }    }
  }
  }



      cout << n+m-ans << endl;






}




int main()
{
   fast();
//// input();


 int T=1;  cin >> T;

 while(T--){

   Solve();

 }

   return 0;
}
