
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend()
ll M = 1e9+7;
ll po(ll a , ll b)
{
 ll ans = 1;
 while(b>0){
   if(b%2!=0){
      ans = (ans*a)%M;
   }
   a = (a*a)%M;
   b = b/2;
   // b = b>> 1;
 }

   return ans;
}


   int main()
   {
      int t;
      cin >> t;
      while (t--)
      {
         ll a , b ;
         cin >> a >> b ;
         cout << po(a , b) << endl;
      }
   }

   
