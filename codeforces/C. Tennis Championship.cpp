#include <bits/stdc++.h>
using namespace std;

 #define ll             long long
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

 ll N; cin >> N;
  int Ans = 0;
   ll F[1000];
    F[0] = 1;
     F[1] = 2;

   for(int i=2; i<1000; i++){
     F[i] = F[i-1]+F[i-2];
       if(F[i] > N){
         cout << i-1 << endl;
          return;
        }
         else if(F[i] == N){
           cout << i << endl;
            return;
         }
     }


int main()
{

   fast();
// input();

 int T=1; // cin >> T;

  while(T--){

    Solve();

 }




   return 0;
}

