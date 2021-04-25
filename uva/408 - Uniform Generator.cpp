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
 freopen("in.txt","r",stdin);
  freopen("out.txt","w",stdout);
}
 
int mcd(int a, int b){
    if(a%b==0) return b;
    return mcd(b,a%b);
}

int main(){
    input();
    int step,mod,m;
    
    while(cin>>step>>mod){
        m=mcd(step,mod);
        
        cout<<setw(10)<<step<<setw(10)<<mod<<"    ";
        if(m==1) cout<<"Good Choice"<<endl;
        else cout<<"Bad Choice"<<endl;
        cout<<endl;
    }
    
    return 0;
}
