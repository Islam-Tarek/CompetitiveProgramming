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

 ll Gcd(ll A, ll B){
     if(!B)
       return A;
      return Gcd(B, A%B);
 }

 ll Sum(ll N){
  ll Ans = 0;
   while(N){
     Ans += N%10;
      N /= 10;
   }
    return Ans;
 }

 void Solve(){

ll N;  cin >> N;
 while(Gcd(N,Sum(N)) == 1 )
     N++;
     cout << N << endl;



}


int main()
{
   fast();
// input();



 int T=1;  cin >> T;

  while(T--){

    Solve();

 }

   return 0;
}

