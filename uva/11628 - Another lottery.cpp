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

    int n , m;
    int casee = 1;

    while(cin >> n >> m){

        if(n == 0 && m == 0)
            return 0;

        ll total = 0;
        int arr[n];

        memset(arr , 0 , sizeof arr);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin >> arr[i];

            total += arr[i];
        }

        int gcd;
        for(int i = 0; i < n; i++){
            gcd = __gcd(total , 1ll * arr[i]);
            cout << arr[i] / gcd << " / " << total / gcd << endl;

        }

    }


  return 0;
}
