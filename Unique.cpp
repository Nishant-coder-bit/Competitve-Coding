#include<bits/stdc++.h>
using namespace std;

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

    int ans=0;

    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	ans=ans^x;
    }
    cout<<ans;
}