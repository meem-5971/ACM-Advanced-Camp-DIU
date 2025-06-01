#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int cnt=0;
bool flag=false;
int l=-1,r=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        l=i;
        break;
    }
}
for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='1'){
        r=i;
        break;
    }
}
for(int i=l;i<=r;i++){
    if(s[i]=='0') cnt++;
}
cout<<cnt<<endl;

}
return 0;
}