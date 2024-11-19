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

int a=59;
printBinary(a);
cout<<"\n";
//clear from ith LSB 
int i=4;
int b=(a & (~((1<<(i+1))-1)));
//int c=(~((1<<(i+1))-1));
//printBinary(c);
printBinary(b);

cout<<"\n";
//clear till ith MSB
i=3;
int c=(a & (((1<<(i+1))-1)));
printBinary(c);


return 0;
}