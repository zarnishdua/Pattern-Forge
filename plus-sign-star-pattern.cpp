#include <iostream>
using namespace std;
int main(){
int m;
cout<<"Enter  a m :";
cin>>m;
for(int i=0; i<=m; i++){
for(int j=0; j<=m; j++){
    if(i==m/2 || j==m/2)
    cout<<"*"<<" ";
    else
        cout<<"  ";
}
cout<<endl;
}
return 0;
}
