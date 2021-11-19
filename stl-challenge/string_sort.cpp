#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;
bool my_compare(string s1,string s2){
    //compare function is used to check the substring 
      if(s1.compare(0,s2.size(),s2)==0)
        return s1.size()>s2.size();
    else 
        return s1<s2;
}
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
     // creating vector of strings
     vector<string> s;
     for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
     }
      // sorting string lexicographically if any other string present as substring
     //in another string then longest string will come first
     sort(s.begin(),s.end(),my_compare);

     for(auto elm:s){
     	cout<<elm<<endl;
     }
     return 0;
    }