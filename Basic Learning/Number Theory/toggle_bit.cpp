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
 int a=12;
 int n=5;
 //nth bit toggle
 printBinary(a ^ (1<<n));
return 0;
}