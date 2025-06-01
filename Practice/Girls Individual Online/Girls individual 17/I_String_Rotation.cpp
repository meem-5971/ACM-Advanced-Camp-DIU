#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s,t;
cin>>s>>t;
string longs=s+s;
if(longs.find(t)!=string::npos){
cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

return 0;
}