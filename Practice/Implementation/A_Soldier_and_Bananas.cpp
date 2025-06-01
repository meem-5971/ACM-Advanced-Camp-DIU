#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k,n,w;
cin>>k>>n>>w;
cout<<max((k*(w*(w+1))/2)-n,0)<<endl;
return 0;
}