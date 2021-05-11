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

 /////// First of all write the algorithm on PAPIR  ///////


void Solve(){

int n; cin >> n;
 vector<int>v(n);

for(auto &i : v)
    cin >> i;

 int req = 0;
  for(int i = 0; i < n; i++){

        req += v[i];
        int cnt = 0, sum = 0;
        for(int j = 0; j < n; j++){

              if(sum == req)
                        sum = 0 , cnt++;
              sum += v[j];
        }
        if(sum == req){

            cnt++;
            cout << n - cnt << endl;
            break;
        }
   }


}


int main(){

int T; cin >> T;

while(T--){

 Solve();

	}


  return 0;
}



