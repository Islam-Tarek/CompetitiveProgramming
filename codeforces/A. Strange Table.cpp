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
ll N, M; cin >> N >> M;
 ll Num; cin >> Num;
  Num--;
  ll C = Num/N;
   ll R = Num%N;

   cout << C + R*M + 1  << endl;


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

