#include<bits/stdc++.h>
using namespace std;

/* Give a string ,write a fn to replace all space with %20 it 
is also given that string has enough additional space*/


string replace(char* s){
	int space=0;

	for(int i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			space++;
		}
	}
	int idx=strlen(s)+space*2;
	s[idx]='\0';

	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]==' '){
             s[idx-1]='0';
             s[idx-2]='2';
             s[idx-3]='%';
             idx=idx-3;
		}
		else{
			s[idx-1]=s[i];
			idx--;
		}
	}
	return s;
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
       char s[10000];
       cin.getline(s,1000);

       replace(s);

       cout<<s<<endl;
    return 0;
}