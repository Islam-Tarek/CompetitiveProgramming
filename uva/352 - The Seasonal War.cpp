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
 
int visited[25][25];
int n,cont,I,J;
vector<string> v;
pair<int, int> P;

int di[]={1,1,1,0,0,-1,-1,-1};
int dj[]={1,0,-1,1,-1,1,0,-1};

void fill(int a, int b){
    cont++;
    
    stack< pair<int, int> > X;
    
    X.push(make_pair(a,b));
    
    while(!X.empty()){
        P=X.top();
        X.pop();
        
        visited[P.first][P.second]=1;
        
        for(int i=0;i<8;i++){
            I=P.first+di[i];
            J=P.second+dj[i];
            
            if(I>=0 && I<n && J>=0 && J<n && !visited[I][J])
                X.push(make_pair(I,J));
        }
    }
}

int main(){
   
   input();
   
    string s;
    int caso=1;
    
    while(cin>>n){
        v.clear();
        
        for(int i=0;i<n;i++){
            cin>>s;
            v.push_back(s);
        }
        
        memset(visited,0,sizeof(visited));
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(v[i][j]=='0') visited[i][j]=1;
        
        cont=0;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(v[i][j]=='1' && !visited[i][j]) fill(i,j);
                
        cout<<"Image number "<<caso<<" contains "<<cont<<" war eagles."<<endl;
        caso++;
    }
}
