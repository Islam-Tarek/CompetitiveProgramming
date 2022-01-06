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

vector<ll>vec;

void Solve(ll n){

    if(n < 0){
        vec.push_back(-1);
        n *= -1;
    }

    while(n % 2 == 0){
        vec.push_back(2);
        n /= 2;
    }

    for(ll i = 3; i * i <= n+1; i += 2){
        while(n % i == 0){
            vec.push_back(i);
            n /= i;
        }
    }

    if(n != 1)
        vec.push_back(n);

}


int main(){

    fast();

    long long n;

    while(cin >> n && n != 0){

        if(n == 1){
            cout << "1 = 1\n";
            continue;
        }
        vec.clear();

        cout << n << " = ";

        Solve(n);

        for(ll i = 0; i < vec.size() - 1; i++)
            cout << vec[i] << " x ";

        cout << vec[vec.size() - 1] << endl;

    }


  return 0;
} 
