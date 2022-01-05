#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int n , k;
vector<vector<int>> adjList(105);
vector<int> bestBlack;
vector<int>curBlack;
vector<bool>curColor;


bool canBeBlack(int curr){
    // All neighbors MUST be white
    for(auto neighbor : adjList[curr]){
        if(curColor[neighbor] == false)
            return false;
    }
    return true;
}




void backtracking(int curr){

    if(curr == n){
        if(bestBlack.size() < curBlack.size())
            bestBlack = curBlack;
        return;
    }

  //  int rem = n - curr;

 //   if(rem + curBlack.size() <= bestBlack.size())
     //   return;

    backtracking(curr + 1);

    if(canBeBlack(curr)){
        // do...rec...undo

        // white --> true
        // black --> false

        curColor[curr] = false;
        curBlack.push_back(curr);

        backtracking(curr + 1);

        curBlack.pop_back();
        curColor[curr] = true;

    }

}




void Solve(){

    cin >> n >> k;

    bestBlack.clear();
    curBlack.clear();
    for(int i = 0; i < 105; i++)
        adjList[i].clear();

    adjList.resize(n);
    curColor = vector<bool>(n , true);

    int a , b;
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        --a , b--;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    backtracking(0);

    cout << bestBlack.size() << endl;

    for(int i = 0; i < bestBlack.size(); i++){
        if(i != 0)
            cout << ' ';

        cout << bestBlack[i] + 1;

    }
     cout << endl;

}



int main(){

int T = 1;  cin >> T;

while(T--){

    Solve();

 }


  return 0;

}
