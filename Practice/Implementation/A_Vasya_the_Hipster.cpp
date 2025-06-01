#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a>>b;
cout<<min(a,b)<<" ";
int d=min(a,b);
cout<<max(0,(a-d)/2)+max(0,(b-d)/2)<<endl;
 
return 0;
}