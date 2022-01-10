#include<bits/stdc++.h>
using namespace std;

void filterchars(int  n,char a[]){
	int j=0;

	while(n>0){
		int last_bit=(n&1);
		if(last_bit){
			cout<<a[j];
		}
		j++;
		n=n>>1;
	}
	cout<<endl;
	return;
}
void printsubsets(char a[]){
	int n=strlen(a);

	for(int i=0;i<(1<<n);i++){
		filterchars(i,a);
		
	}
	return;
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
	char a[100];
	cin>>a;
	printsubsets(a);
	return 0;
}