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


int main()
{
  double total; cin >> total;
   int x, y; cin >> x >> y;

    double ans = 1;
   
         ans = ((total/100)*x) + ((total/100)*y);

        cout << int(ans+total) << endl;    
 


    return 0;
}

