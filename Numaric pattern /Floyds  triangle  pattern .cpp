#include <iostream>
using namespace std; 
int main(){
	int m;
	cout<<"Enter a sides of triangle :";
	cin>>m;
	int a=1;
	for(int i=1; i<=m; i++){
	for(int j=1; j<=i; j++){
		cout<<a<<" ";
		a++;
	}
	cout<<endl;
	}
	return 0;
}
