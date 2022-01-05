#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int OO = 1e9;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

string str1 , str2;
int dp[105][105];


int LCS(int i , int j){

    if(i == str1.size() || j == str2.size())
        return 0;

    int &ret = dp[i][j];

    if(ret != -1)
        return ret;

    if(str1[i] == str2[j]){
        ret = LCS(i + 1 , j + 1) + 1;
    }
    else{
        int choice1 = LCS(i + 1 , j);
        int choice2 = LCS(i , j + 1);

        ret = max(choice1 , choice2);
    }

    return ret;
}



int main(){

   fast();

   int casee = 1;

   while(true){

        memset(dp , -1 , sizeof dp);
        getline(cin , str1);
        if(str1 == "#")
            break;
        getline(cin , str2);

        cout << "Case  #" << casee++ << ": you can visit at most "
           << LCS(0 , 0) << " cities.\n";
   }

  return 0;
}
