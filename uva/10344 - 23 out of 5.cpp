#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int OO = 1e9;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

char operations[] = {'+' , '-' , '*'};
int arr[5];
bool vis[5];
bool ok;

void BackTracking(int i , int res , bool flag){
    if(i == 5){
        if(res == 23)
            ok = true;
        return;
    }

        for(int j = 0; j < 5; j++){
            if(vis[j])
                continue;

            vis[j] = 1;
            if(flag){
                BackTracking(i + 1 , res + arr[j] , true);
                  //  res -= arr[i];
                BackTracking(i + 1  , res * arr[j] , true);
                 //   res /= arr[i];
                BackTracking(i + 1 , res - arr[j] , true);
                 //   res += arr[i];
            }
            else{
                BackTracking(i + 1 , arr[j] , true);
            }
            vis[j] = 0;
        }
}


int main(){

    while(true){

        memset(vis , false , sizeof vis);
        ok = false;
        for(int i = 0; i < 5; i++)
            cin >> arr[i];

        if(arr[0] == 0 && arr[1] == 0)
            break;

        BackTracking(0 , 0 , false);

       cout << (ok ? "Possible" : "Impossible") << "\n";

    }

  return 0;
}
