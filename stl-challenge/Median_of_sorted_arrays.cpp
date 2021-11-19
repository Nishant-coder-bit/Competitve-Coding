#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int main(){
	//ignore
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    //ignore

   int n;
   cin>>n;
   int a[n],b[n];
   PBDS st;
   for(int i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
   }

    for(int i=0;i<n;i++){
       cin>>b[i];
       st.insert(b[i]);  
   }
   int ans=st.size()/2-1;

   cout<<*st.find_by_order(ans)<<endl;



    return 0;
}