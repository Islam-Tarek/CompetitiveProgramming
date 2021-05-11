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

 int N, K; cin >> N >> K;
  char S[N+2];
   vector<int>V;

 for(int i=1; i<N+1; i++){
   cin >> S[i];
    if(S[i] == '*')
     V.push_back(i);
 }

  S[V[0]] = 'X';
   S[V[V.size()-1]] = 'X';
     int last ;
     int Cnt = 0;
   V.size()>0 ? Cnt=1,last=V[0] : Cnt=0;
   V.size()>1 ? Cnt=2 : Cnt=Cnt;


   for(int i=1; i<V.size(); i++){
      if(V[i]-last > K)
        last = V[i-1], S[V[i-1]] = 'X', ++Cnt;
     }


  // for(int i=1; i<N+1; i++)
    //  cout << S[i];
    //  cout << endl;
       cout << Cnt << endl;
     //  cout << endl;

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

