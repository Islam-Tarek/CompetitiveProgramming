#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main(){

   int T;  cin >> T;

   while(T--){

        int n;  cin >> n;
        bool vis[n + 1][n + 1];
        int rankk[n + 1];
        int inDegree[n + 1];

        memset(inDegree , 0 , sizeof inDegree);
        memset(vis , false , sizeof vis);
        memset(rankk , 0 , sizeof rankk);

        for(int i = 1; i <= n; i++){
            int a;  cin >> a;
            rankk[a] = i;
        }

        vector<int>adj[n + 1];
        int m;  cin >> m;

        for(int i = 1; i <= m; i++){

            int a , b;  cin >> a >> b;
            vis[a][b] = true;
            if(rankk[a] < rankk[b]){
                inDegree[a]++;
                adj[b].push_back(a);
            }
            else{
                inDegree[b]++;
                adj[a].push_back(b);
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){

                if(!vis[i][j]){
                    if(rankk[i] < rankk[j]){
                        adj[i].push_back(j);
                        inDegree[j]++;
                    }
                    else{
                        adj[j].push_back(i);
                        inDegree[i]++;
                    }

                }
            }
        }

        vector<int>ans;
        queue<int>Q;

        for(int i = 1; i <=n; i++){
            if(inDegree[i] == 0){
                Q.push(i);
            }
        }

        while(!Q.empty()){

            int u = Q.front();
            Q.pop();
            ans.push_back(u);
            for(auto node : adj[u]){
                inDegree[node]--;
                if(inDegree[node] == 0){
                    Q.push(node);
                }
            }
        }

        bool ok = true;

        if(ans.size() < n ){
            cout << "IMPOSSIBLE\n";
        }
        else{
            for(int node : ans){
                if(!ok)
                     cout << " ";

                cout << node;
                ok = false;
            }
            cout << endl;
        }

   }




  return 0;
}
