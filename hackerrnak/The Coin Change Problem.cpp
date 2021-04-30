#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
 
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


int main()
{

  int n , m ;
   scanf("%d%d",&n,&m);
    vector<int>a(m);
     vector<int>b(n+1);
 for(int i=0; i<m; i++)
     scanf("%d",&a[i]);

 b[0]=1;
  for(int i=0; i<m; i++)
    for(int j=a[i]; j<=n; j++)
         b[j] += b[j-a[i]];

     printf("%d\n",b[n]);

    return 0;
}

