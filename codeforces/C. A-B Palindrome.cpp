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

 int A, B; cin >> A >> B;
  string S; cin >> S;
   int N = S.size();
    bool Ok = true;
     int Q = 0;


//    if((A%2&&B>0) || (B%2&&A>0)){
//     cout << -1 << endl;
//      cout << "**************************" << endl;
//      return;
//    }

 for(int i=0; i<S.size(); i++)
  (S[i]=='0') ? --A : (S[i]=='1')? --B :++Q;


  if(A<0 || B<0 || (A+B)!=Q ){
   cout << -1 << endl;
  //  cout << "**************************" << endl;
     return;
   }


 for(int i=0; i<N/2; i++){

   if((S[i]=='?'&&S[N-1-i]!='?') || (S[i]!='?'&&S[N-1-i]=='?')){
     if((S[i]=='0'||S[N-1-i]=='0') && A){
     S[i] = S[N-1-i] = '0';
        --Q, --A;
     }
      else if((S[i]=='1'||S[N-1-i]=='1') && B){
        S[i] = S[N-1-i] = '1';
           --Q, --B;
       }
        else
           Ok = 0;
      }
     else if(S[i]!='?' && S[N-1-i]!='?' && S[i]!=S[N-1-i])
           Ok = 0;

 }

   for(int i=0; i<N/2; i++)
    if(S[i]=='?'&&S[N-1-i]=='?')
    (A>1)? S[i]=S[N-1-i]='0',A-=2 : (B>1)? S[i]=S[N-1-i]='1' ,B-=2: Ok=0;



   if(N%2 && S[N/2]=='?'){
      if(A) S[N/2]='0';
       else if(B) S[N/2]='1';
        else
          Ok = 0;
   }

       if(!Ok){
    cout << -1 << endl;
  //   cout << "**************************" << endl;
      return;
   }


 cout << S << endl;
//cout << "**************************" << endl;


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

