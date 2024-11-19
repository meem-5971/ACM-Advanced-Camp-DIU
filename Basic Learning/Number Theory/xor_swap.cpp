#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
 int a=4,b=6;
 a=a^b;
 b=b^a; //b=b^(a^b)=b^b^a=0^a=a
 a=a^b; //a=a^b^a=a^a^b=0^b=b
 cout<<a<<" "<<b<<" "<<"\n";
return 0;
}