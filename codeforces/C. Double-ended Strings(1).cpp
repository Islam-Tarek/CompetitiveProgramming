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
 ll dp[30][30][30][30];

ll Solve1(int i, int szA,int j, int szB){

 string str1="", str2="";

 for(int idx=i; idx<szA; idx++)
   str1 += a[idx];
  for(int idx=j; idx<szB; idx++)
     str2 += b[idx];

 if(str1 == str2)
  return 0;
 if(str1.size()== 0)
   return str2.size();
 if(str2.size() == 0)
    return str1.size();

ll &ret = dp[i][szA][j][szB];

  if(ret != -1)
   return ret;

 ll sol1 = Solve1(i+1,szA,j,szB)+1;
  ll sol2 = Solve1(i,szA-1,j,szB)+1;
 ll sol3 = Solve1(i,szA,j+1,szB)+1;
  ll sol4 = Solve1(i,szA,j,szB-1)+1;

 return ret = min(min(sol1,sol2),min(sol3,sol4));


 }




 void Solve(){

//  string a, b;
 cin >> a >> b;

// if(a == b){
//  cout << 0 << endl;
//   return;
// }

  memset(dp,-1,sizeof dp);

  ll ans = 0;


 cout << Solve1(0,a.size(),0,b.size()) << endl;


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
