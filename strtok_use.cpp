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

    char input[10000];
    cin.getline(input,1000);

    char* token=strtok(input," ");

     while(token!=NULL){
     	cout<<token<<" "<<endl;
     	token=strtok(NULL," ");
     }
     return 0;
}