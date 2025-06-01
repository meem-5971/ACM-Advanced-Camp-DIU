#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
bool flag=true;
for(int i=0;i<s.size();i++){
    if(s[i]=='0' && flag==false){
        cout<<s[i];
    }
    else if(s[i]=='0' && flag==true){
        flag=false;
    }
    else if(i==s.size()-1 && flag==true) break;
    else{
        cout<<s[i];
    }
}
return 0;
}