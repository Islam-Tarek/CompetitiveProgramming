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
 



 int main(){  
 
   int n, x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d, e, f, det;  
   double k;  
   scanf("%d",&n);  
   printf("INTERSECTING LINES OUTPUT\n");  
   while(n--){  
     scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);  
     a = y1 - y2;  
     b = x2 - x1;  
     c = x2*y1 - x1*y2;  
     d = y3 - y4;  
     e = x4 - x3;  
     f = x4*y3 - x3*y4;  
     k = (a*1.0)/(d*1.0);  
     if ( k*d == a && k*e == b && k*f == c ){  
       printf("LINE\n");  
       continue;  
     }  
     det = a*e - b*d;  
     if( !det ){  
       printf("NONE\n");  
       continue;  
     }  
     printf("POINT %.2lf %.2lf\n",(double)((c*e-b*f)*1.0/(det*1.0)),(double)((a*f-c*d)*1.0/(det*1.0)));  
   }  
   printf("END OF OUTPUT\n"); 
   
   return 0;  
 }  
