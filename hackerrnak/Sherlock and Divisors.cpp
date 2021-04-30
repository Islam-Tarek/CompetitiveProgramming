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




 void solve()
{

  int N;  cin >> N;
   int ans = 1;
    if(N%2)
     cout << 0 << endl;
      else{
       for(int i=2; i<=sqrt(N); i++)
        if(N%i==0){
         if(i%2==0)  ans++;
          if((N/i)%2==0) ans++;
           if(i==N/i) ans--;
      }

    cout << ans << endl;

    }


}




int main()
{



  int T=1;  cin >> T;


   while(T--)
   {

       solve();

   }




    return 0;
}

