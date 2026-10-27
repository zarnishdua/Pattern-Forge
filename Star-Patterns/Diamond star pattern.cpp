#include <iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter the value of m:";
  cin>>m;
  for(int i=1; i<=m; i++){
  for(int j=m; j>=i; j--){
  cout<<" ";
  }
  for(int j=1; j<=2*i-1; j++){
  cout<<"*";
    }
  cout<<endl;
  }
  for(int i=m-1; i>=1; i--){
    for(int j=m; j>=i; j--){
        cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
        cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
