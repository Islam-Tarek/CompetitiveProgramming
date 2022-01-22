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


vector<double>p;

double prepare(int mask , int n){

    double ret = 1;
    for(int i = 0; i < n; i++){
        if(mask & (1 << i))
            ret *= p[i];
        else
            ret *= (1.0 - p[i]);
    }
    return ret;
}



int main(){

    fast();

    int n , r;
    int casee = 1;

    while(cin >> n >> r){

        if(n == 0 && r == 0)
            return 0;

        p.clear();
        p.resize(n);

        for(int i = 0; i < n; i++)
            cin >> p[i];

        double a = 0, b = 0;

        cout << "Case " << casee++ << ":\n";

        for(int i = 0; i < n; i++){
            a = 0 , b = 0;
            for(int mask = 0; mask < (1 << n); mask++){
                int x = mask;
                if(__builtin_popcount(mask) == r){
                    double t = prepare(x , n);

                    b += t;

                    if(mask & (1 << i))
                        a += t;
                }

            }
            cout << setprecision(6) << fixed << a / b << endl;
        }

    }


  return 0;
}
