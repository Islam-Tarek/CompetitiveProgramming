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

    double cows , cars , shows;

    while(cin >> cows >> cars >> shows){
        cout << setprecision(5) << fixed << (cars * (cows + cars - 1)) / ((cows + cars) * (cows + cars - shows - 1)) << endl;
    }



  return 0;
}
