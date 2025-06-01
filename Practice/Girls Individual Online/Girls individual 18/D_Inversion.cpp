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
ll ans=0,count=0;
for(int i=0;i<n;i++){
if(s[i]=='>'){
    count++;
}
else{
ans+=((count*(count+1))/2);
count=0;
}
}
 cout<<max(ans,count)<<endl;
return 0;
}