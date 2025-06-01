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
int id=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        id=i;
        break;
    }
}
if(id==-1){
    cout<<1<<" "<<s.size()<<" "<<s.size()<<" "<<s.size()<<endl;
}
else{
 ll y=id;
 for(int i=id;i<s.size();i++){
    if(y==0) break;
    if(s[i]=='1'){
        break;
    }
    y--;
 }
 cout<<1<<" "<<s.size()<<" "<<y+1<<" "<<y+s.size()-id<<endl;


}
}
return 0;
}