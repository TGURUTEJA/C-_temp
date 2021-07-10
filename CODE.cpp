#include<iostream>
using namespace std;

int len(int n){
	int c=0;
	while (n>0){
		n=n%10;
		c++;
	}
	return c;
}



void sol(){       //SOLUTION

   


	
	
	//cout<</*OUTPUT*/c<<endl;
}




int main(){ 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int T,C=1;
	cin>>T;
	while(C!=T+1){
		//cout<<"case#"<<C<<": ";        //FOR GOOGLE KICKSTART
		sol();
		C++;
    }
return 0;
}



