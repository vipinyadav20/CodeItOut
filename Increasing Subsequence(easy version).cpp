#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pb push_back
using namespace std;

int main() {
   ll n;cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)
   cin>>arr[i];
   ll l=0,r=n-1;
   vector<ll>v;
   v.pb(0);
   vector<char>ans;
   while(l<=r)
   {
       if(arr[l]<v.back()&&arr[r]<v.back())
       break;
       if(arr[l]>v.back()&&(arr[r]>=arr[l]||arr[r]<v.back()))
       {
       v.pb(arr[l]);l++;
       ans.pb('L');
       }
       else
       if(arr[r]>v.back()&&(arr[l]>=arr[r]||arr[l]<v.back()))
       {
       v.pb(arr[r]);r--;
       ans.pb('R');
       }
   }
   cout<<ans.size()<<nl;
   for(auto i:ans)
   cout<<i;
   cout<<nl;
}