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


 /////// First of all write the algorithm on PAPIR  ///////


vector<vector<int>> edges;
bool vis[105];
int n;

void unreachable(int start){

    memset(vis , false , sizeof vis);

    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int i = 0; i < edges[node].size(); i++){
            if(vis[edges[node][i]])
                continue;

            vis[edges[node][i]] = true;
            q.push(edges[node][i]);
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(!vis[i])
            cnt++;

    cout << cnt;

    for(int i = 0; i < n; i++)
        if(!vis[i])
            cout << ' ' << i + 1 ;

    cout << endl;


}




void Solve(){

    int a , b;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        edges.clear();
        edges.resize(n);

        while(true){
            cin >> a;
            if(a == 0)
                break;

            while(true){
                cin >> b;
                if(b == 0)
                    break;

                edges[a - 1].push_back(b - 1);
            }
        }

        int m; cin >> m;
        for(int i = 0; i < m; i++){
            cin >> a;
            unreachable(a - 1);
        }
    }

}



int main(){

 //   fast();
    int T = 1; // cin >> T;

    while(T--){

        Solve();


    }


  return 0;
}
