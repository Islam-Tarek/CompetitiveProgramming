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
 freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

}


int gcd(int a, int b){
    if(!b)
      return a;
       return gcd(b, a%b);
}



void solve(){

 long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long x=0;
        long long ans=0;
        for(long long i=0;i<n;i++)
            ans+= s[i]-48;
        for(long long i=0;i<k;i++)
            x+= s[i]-48;
        if(k>1)
            ans += x*(x-1);
        for(long long i=k;i<n;i++){
            ans += (x)*(s[i]-48)*2;
            x=x+(s[i]-48)-(s[i-k]-48);
        }
        long long btm=n*n;
        long long g= gcd(btm,ans);
        cout<<ans/g<<"/"<< btm/g<<endl;


}




int main()
{



int T; cin >> T;


  while(T--){


    solve();

  }





    return 0;
}

