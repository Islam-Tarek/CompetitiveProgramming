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

int gcd(int a, int b) {
  return a % b == 0 ? b : gcd(b, a % b);
}

int main() {
  int n;
  while (scanf("%d", &n) && n > 0) {
    vi nums(n);
    for (int i = 0; i < n; ++i) scanf("%d", &nums[i]);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        if (gcd(nums[i], nums[j]) == 1) ++cnt;
      }
    }

    if (cnt > 0) {
      printf("%.6f\n", sqrt(n * (n - 1) / 2 * 6.0 / cnt));
    } else {
      printf("No estimate for this data set.\n");
    }
  }
  return 0;
}
