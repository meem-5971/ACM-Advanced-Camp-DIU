#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 cout<<gcd(12,14)<<endl;
 cout<<12*18/(gcd(12,18))<<endl;
return 0;
}