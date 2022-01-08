#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
const int OO = 1e9;
const int EPS = 1e-9;


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



int graph[105][105];


int floyd(int c){

    for(int k = 1; k <= c; k++){
        for(int i = 1; i <=c; i++){
            for(int j = 1; j <=c; j++){
                if((graph[i][k] <= graph[i][j] && graph[k][j] <= graph[i][j]) && (graph[i][k] != OO && graph[k][j] != OO)){
                    graph[i][j] = min(graph[i][j] , max(graph[i][k] , graph[k][j]));
                }

            }
        }
    }


}

/*

int getQuery(int c , int from , int to){

    int ans = max(graph[from][to] , EPS);
    int test = EPS;

    for(int i = 1; i <= c; i++){
        for(int j = 1; j <= c; j++){
            if(from != i && j != to){
                if(graph[from][i] != EPS && graph[j][to] != EPS){
                   test = max(test , max(graph[from][i], graph[j][to]));
                }
            }
        }
    }

    return (ans == EPS && test == EPS ? EPS : min(ans , test));

}

*/


void Solve(){

    int casee = 1;

    int c , s , q;
    while(cin >> c >> s >> q && c && s && q){

        for(int i = 0; i < 105; i++)
            for(int j = 0; j < 105; j++)
                graph[i][j] = OO;

        int a , b , weight;
        while(s--){
            cin >> a >> b >> weight;
            graph[a][b] = weight;
            graph[b][a] = weight;
        }

        floyd(c);

        if(casee > 1)
            cout << "\n";

        cout << "Case #" << casee++ << "\n";

        int from , to;
        while(q--){
            cin >> from >> to;
            if(graph[from][to] == OO){
                cout << "no path\n";
            }
            else{
                cout << graph[from][to] << "\n";
            }

        }
  //      cout << "\n";

    }



}



int main(){

 fast();


    int T = 1; // cin >> T;

    while(T--){

        Solve();

    }


  return 0;
}
