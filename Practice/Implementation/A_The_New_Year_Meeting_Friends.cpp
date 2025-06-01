#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y,z;
cin>>x>>y>>z;
cout<<max(max(x,y),z)-min(min(x,y),z)<<endl;
 
return 0;
}