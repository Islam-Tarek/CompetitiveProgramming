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

int N; cin >> N;
 char S[N+1][N+1];
  int X1=-1, Y1=-1, X2=-1, Y2=-1;
   int X3, Y3, X4, Y4;

 for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
     cin >> S[i][j];
     if(S[i][j] == '*')
    (X1 == -1)? X1=i,Y1=j : X2=i,Y2=j;
    }
 }

 if(X1 == X2){
    if(X1 == N-1){
   S[N-2][Y1] = '*';
   S[N-2][Y2] = '*';
   }
   else if(X1 == 0){
   S[1][Y1] = '*';
   S[1][Y2] = '*';
   }
   else {
    S[X1+1][Y1] = '*';
    S[X1+1][Y2] = '*';
    }
 }
  else if(Y1 == Y2){

     if(Y1 == N-1){
   S[X1][N-2] = '*';
   S[X2][N-2] = '*';
   }
   else if(Y1 == 0){
   S[X1][1] = '*';
   S[X2][1] = '*';
   }
   else {
    S[X1][Y1+1] = '*';
    S[X2][Y2+1] = '*';
    }
 }
   else{
    S[X1][Y2] = '*';
    S[X2][Y1] = '*';
   }

 for(int i=0; i<N; i++){
  for(int j=0; j<N; j++){
     cout <<  S[i][j];
    }
    cout << '\n';
  }

//cout << "************************************************" << endl;
 }




int main()
{
   fast();
//// input();
//
 int T=1;  cin >> T;

 while(T--){

   Solve();

 }

   return 0;
}

