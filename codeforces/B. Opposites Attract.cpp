#include <bits/stdc++.h>
using namespace std;


    void solve(){
        int n; cin >> n;
        map<int,int>mpPos;
        map<int,int>mpNeg;
        
        for(int i = 0 ; i < n; i++){
            int x;  cin >> x;
            if(x < 0){
                mpNeg[-x]++;
            }
            else{
                mpPos[x]++;  
            }
        }
        
        long long ans = 0;

        if(mpPos[0]){
            int x = mpPos[0];
            ans +=   (1ll*x * (1ll*x-1))/2;
        }

        for(int i = 0; i < max(mpNeg.size(), mpPos.size()); i++){
           ans += (1ll*mpPos[i] * 1ll*mpNeg[i]);
        }

        cout << ans << endl;

    }
    

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();
  
    return 0;
}
