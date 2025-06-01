#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x=INT_MAX, y=0;
int id=0;
int t;
cin>>t;
vector<int>aa;
vector<int>bb;

for(int i=0;i<t;i++){
int a,b;
cin>>a>>b;
aa.push_back(a);
bb.push_back(b);
if(a<=x && b>=y){
    x=a,y=b;
    id=i+1;
}
}
ll p=*min_element(aa.begin(),aa.end());
ll q=*max_element(bb.begin(),bb.end());
if(p==x && q==y) cout<<id<<endl;
else cout<<-1<<endl;
return 0;
}