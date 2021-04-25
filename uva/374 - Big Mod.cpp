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
 


int mod(int a, int b, int c)
{
    if(b==0) return 1;
    
    if(b%2==0)
    {
        int x=mod(a,b/2,c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}

int main(){
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    int B,P,M;
    
    while(cin>>B>>P>>M)
        cout<<mod(B,P,M)<<endl;

	return 0;
}
