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

      string input;

      getline(cin,input);

      //creates a string stream object

       stringstream ss(input);
        string token;
        vector<string> tokens;
       while(getline(ss,token,' ')){
       	       tokens.push_back(token);
       }
       for(string token:tokens){
       	cout<<token<<"%20";
       }
       return 0;
}