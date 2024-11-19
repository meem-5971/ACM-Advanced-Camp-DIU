#include<bits/stdc++.h>
#define ll long long
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
    cout<<((num>>i)&1);
}     
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 

int a=9;
printBinary(a);
printBinary(~a);

int n=3;
if((a & (1<<n)) !=0){
    cout<<"Set Bit";
}
else{
    cout<<"Unset Bit";
}
return 0;
}