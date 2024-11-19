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
 int cnt=0;
 for(int i=31;i>=0;i--){
    if((a &(1<<i)) !=0){
        cnt++;
    }
 }
 cout<<cnt<<"\n";

 cout<<__builtin_popcount(a);
 cout<<__builtin_popcountll((1ll<<35)-1)<<endl;//for ll data
return 0;
}