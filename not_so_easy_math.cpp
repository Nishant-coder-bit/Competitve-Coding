#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	//ignore
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    //ignore

   ll t;
   cin>>t;

   ll primes[]={2,3,5,7,11,13,17,19};

   while(t--){
   	 ll n;
   	 cin>>n;
     ll ans=0;
   	 ll subsets=(1<<8)-1;

   	 for(ll i=1;i<=subsets;i++){
   	 	ll denom=1ll;
   	 	ll setBits= __builtin_popcount(i);

   	 	for(ll j=0;j<=7;j++){
   	 		if(i&(1<<j)){
   	 			denom=denom*primes[j];
   	 		}
   	 	}
   	 	if(setBits&1){
   	 		ans += n/denom;
   	 	}
   	 	else{
   	 		ans -= n/denom;
   	 	}
   	 }
   	 cout<<ans<<endl;
   }
}