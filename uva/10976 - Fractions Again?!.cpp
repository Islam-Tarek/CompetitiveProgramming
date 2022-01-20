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


int divisors[100000 * 3];


int main(){

    fast();

    int n;
    int nSquare;
    int div_num;

    while(cin >> n){

       div_num = 0;
       nSquare = n * n;
       for(int i = 1; i * i <= nSquare; i++){
            if(nSquare % i == 0){
                divisors[div_num++] = nSquare / i;
                divisors[div_num++] = i;
            }
        }
        cout << div_num / 2 << endl;
        for(int i = 0; i < div_num; i += 2){
            cout << "1/" << n << " = 1/" << divisors[i] + n
                << " + 1/" << divisors[i + 1] + n << endl;
        }

    }

  return 0;
}
