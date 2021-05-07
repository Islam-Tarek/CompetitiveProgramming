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



 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {

public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int Sum  = 0;
     ListNode *l3 = NULL;
      ListNode **node = &l3;

      while(l1!=NULL || l2!=NULL || Sum > 0){

         if(l1 != NULL){
            Sum += l1->val;
             l1 = l1->next;
          }
         if(l2 = NULL){
            Sum += l2->val;
             l2 = l2->next;
         }

           (*node) = new ListNode(Sum%10);
            Sum /= 10;
         //    node =

      }

       return l3;
    }


};




 void Solve(){
ll n; cin >> n;
 map<ll,ll>m;
  ll x;
 for(ll i=0; i<n; i++){
     cin >> x;
    m[x]++;
 }


vector<ll>v;
  for(pair<ll,ll>y : m) v.push_back(y.second);

 sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
ll sz = n - v[0];
 ll ans = 0;

 v[0]<=sz? ans=n%2 : ans=n-(2*sz);
     cout << ans << endl;



}




int main()
{
   fast();
//// input();


 int T=1;  cin >> T;

 while(T--){

   Solve();

 }

   return 0;
}
