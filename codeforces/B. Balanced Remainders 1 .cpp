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



// First of all write the algorithm on PAPIR 

void Solve(){
int n;  cin >> n; 
 int arr[3]={0};
 //// int c0=0, c1=0, c2=0;
   // vector<vector<int>>v(3);
      
   
  for(int i=0; i<n; i++){
    int x; cin >> x;
     arr[x%3]++;
   }
  
   vector<pair<int,int>>v;
    for(int i=0; i<3; i++)
     v.push_back({arr[i],i});
   
   sort(v.begin(),v.end()); 
   
   int limit = n/3;
    int cnt = 0;
     int inc2=v[2].first-limit;
      int inc1=v[1].first-limit;
   ////  int ans = 0;
    
    
   //  while(v[2].first != v[0].first || v[2].first != v[1].first){
	  
	   if(v[0].first < limit && v[2].first > limit){
		    	   
	     if(v[0].second==0){
			if(v[2].second==2){
			  int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[0].first+=diff;
			  }
			 else {
		       int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[0].first+=diff; 
			  }  	 
	    }
	     else if(v[0].second==1){
			 if(v[2].second==2){
			  int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[0].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[0].first+=diff; 
			  }  	 
	     }
	       else{
			 if(v[2].second==0){
			  int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[0].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[0].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[0].first+=diff; 
			  }  	   
	     }
	 }
		     
	   if(v[0].first < limit && v[1].first > limit){
		 
	     if(v[0].second==0){
			if(v[1].second==2){
			  int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff, v[1].first-=diff, v[0].first+=diff;
			  }
			 else {
		       int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff*2, v[1].first-=diff, v[0].first+=diff; 
			  }  	 
	    }
	     else if(v[0].second==1){
			 if(v[1].second==2){
			  int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff*2, v[1].first-=diff, v[0].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff, v[1].first-=diff, v[0].first+=diff; 
			  }  	 
	     }
	       else{
			 if(v[1].second==0){
			  int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff*2, v[1].first-=diff, v[0].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[0].first,inc1); 
			   cnt+=diff, v[1].first-=diff, v[0].first+=diff; 
			  }  	   
	      }	   
	  }
		   
		   
	   
	   
	  if(v[1].first < limit && v[2].first > limit){
		  
		  if(v[1].second==0){
			if(v[2].second==2){
			  int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[1].first+=diff;
			  }
			 else {
		       int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[1].first+=diff; 
			  }  	 
	    }
	     else if(v[1].second==1){
			 if(v[2].second==2){
			  int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[1].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[1].first+=diff; 
			  }  	 
	     }
	       else{
			 if(v[2].second==0){
			  int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff*2, v[2].first-=diff, v[1].first+=diff;
		    }
			 else {
		       int diff = min(limit-v[1].first,inc2); 
			   cnt+=diff, v[2].first-=diff, v[1].first+=diff; 
			  }  	   
	       }	 	   
	    }   
	    
  	     
	       cout << cnt << endl;  	 
  
  //}




}


int main(){
	
int T; cin >> T; 
	
while(T--){

 Solve();	
	
	}
	
	
  return 0;	
}



