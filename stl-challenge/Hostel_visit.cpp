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
   int n,k;
   cin>>n>>k;
   PBDS st;

    for(int i=0;i<n;i++){
    	int q,x,y;
    	cin>>q;

    	if(q==1){
    		cin>>x>>y;
    		int dis=x*x+y*y;
    		st.insert(dis);
    	}
    	if(q==2){
    		cout<<*st.find_by_order(k-1)<<endl;
    	}

    }
   



    return 0;
}