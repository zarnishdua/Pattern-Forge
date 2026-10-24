#include <iostream>
using namespace std;
int main(){
	int m;
	int n;
	cout<<"Enter a number of rows :";
	cin>>m;
	cout<<"Enter a number of column :";
	cin>>n;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=i; j++){
			cout<<(char)(i+64)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
