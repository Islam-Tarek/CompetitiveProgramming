#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
const int OO = 1e9;
const double EPS = 1e-9;


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


int main(){

    fast();
    long long a , b;
    long long testCase = 1;

    while(cin >> a >> b && a && b){

        /* The solution is :
            a *= (a - 1)
            b *= (b - 1)
            a /= 2 , b /= 2;

            ans = a * b;
        */

        cout << "Case " << testCase++ << ": " << (a * b * (a - 1) * (b - 1)) / 4 << endl;
    }

  return 0;
}
