#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;
int on=0,zr=0;
for(int i=0;i<n;i++){
    if(s[i]=='n') on++;
    if(s[i]=='z') zr++;
}
for(int i=0;i<on;i++){
    cout<<1<<" ";
}
for(int i=0;i<zr;i++){
    cout<<0<<" ";
}
cout<<endl;
return 0;
}