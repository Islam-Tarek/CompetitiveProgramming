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



void  Solve(){

int N;  cin >> N;
int Arr[N+1];
int Idx = 0;
 for(int i=1; i<N+1; i++)
   cin >> Arr[i];


 for(int i=2; i<N+1; i++){
    if(Arr[i]!=Arr[i-1] && Arr[i-1]==Arr[i+1] && i<N){
       Idx = i;
         break;
       }

     else if(Arr[i]!=Arr[i-1] && Arr[i-1]!=Arr[i+1] && i==2){
       Idx = 1;
         break;
       }
       else if(Arr[i]!=Arr[i-1] && Arr[i-1]==Arr[i-2] && i==N){
       Idx = i;
         break;
       }


    }


         cout << Idx << endl;
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

