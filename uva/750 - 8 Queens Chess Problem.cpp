#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int OO = 1e9;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool diagonal1[16];
bool diagonal2[16];
bool row_vis[8];
int ans[8];
int cnt = 0;
int r , c;

void BackTracking(int currCol){
    if(currCol == 8){
        if(cnt < 10)
            cout << " ";
        cout << cnt++ << "      ";
        for(int i = 0; i < 8; i++){
            if(i)
                cout << ' ';
            cout << ans[i] + 1;
        }
        cout << endl;
    }

    if(currCol == c){
        BackTracking(currCol + 1);
    }
    else{
        for(int i = 0; i < 8; i++){
            if(row_vis[i] || diagonal1[currCol - i + 7] || diagonal2[currCol + i])
                continue;
            row_vis[i] = diagonal1[currCol - i + 7] = diagonal2[currCol + i] = true;
            ans[currCol] = i;
            BackTracking(currCol + 1);
            row_vis[i] = diagonal1[currCol - i + 7] = diagonal2[currCol + i] = false;
        }
    }
}

int main(){

   int T;  cin >> T;

   bool newLine = false;
   while(T--){

        memset(diagonal1 , false , sizeof diagonal1);
        memset(diagonal2 , false , sizeof diagonal2);
        memset(row_vis , 0 , sizeof row_vis);
    //    memset(ans , 0 , sizeof ans);
        cnt = 1;

        cin >> r >> c;
        r-- , c--;

        row_vis[r] = diagonal1[c - r + 7] = diagonal2[c + r] = true;
        ans[c] = r;

        if(newLine)
            cout << "\n";

        cout << "SOLN       COLUMN\n";
        cout << " #      1 2 3 4 5 6 7 8\n\n";
        BackTracking(0);

        newLine = true;
   }


  return 0;
}
