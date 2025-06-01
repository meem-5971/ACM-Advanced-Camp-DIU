#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
char a,b,c,x,y,z;
cin>>a>>b>>c>>x>>y>>z;
if((a==y && b==x) || (a==z && c==x) || (b==z && c==y)) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
 
return 0;
}