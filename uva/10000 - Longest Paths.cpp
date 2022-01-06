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



vector<vector<int>> nodes(105);
int vis[105];
int casee = 1;
int start;

bool SORT(vector<vector<int>> &a , vector<vector<int>> &b){
    int i;
    return a[i].size() > b[i].size();
}


void Bfs(){

    queue<pair<int, int>> q;
    q.push({start , 0});
    int longest = 0;
    int lastAns = start;

    while(!q.empty()){

        pair<int,int> p = q.front();
        q.pop();

        if(p.second > vis[p.first]){
            vis[p.first] = p.second;

            if(p.second > longest){
                longest = p.second;
                lastAns = p.first;
            }else if(p.second == longest && p.first < lastAns){
                lastAns = p.first;
            }

            for(int i = 0; i < nodes[p.first].size(); i++)
                q.push({nodes[p.first][i] , p.second + 1});

        }
    }


    cout << "Case " << casee++ << ": The longest path from "
         << start << " has length " << longest << ", finishing at "
         << lastAns << ".\n\n";

}



void Solve(){

    int t;

    while(true){

        cin >> t;
        if(t == 0)
            break;

        cin >> start;

        memset(vis , -1 , sizeof vis);
        for(int i = 0; i < 105; i++)
        nodes[i].clear();

        int a , b;
        while(cin >> a >> b){

            if(a == 0  &&  b == 0)
                break;

            nodes[a].push_back(b);
        }

        Bfs();

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
