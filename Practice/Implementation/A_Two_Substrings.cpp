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
int cnt=0;
bool checkAB=false,checkBA=false;
for(int i=0;i<s.size()-1;i++){
    if(!checkAB && s[i]=='A' && s[i+1]=='B'){
        checkAB=true;
        i++;
    }
    else if(checkAB && s[i]=='B' && s[i+1]=='A'){
       cout<<"YES"<<endl;
       return 0;
    }

}
for(int i=0;i<s.size()-1;i++){
    if(!checkBA && s[i]=='B' && s[i+1]=='A'){
        checkBA=true;
        i++;
    }
    else if(checkBA && s[i]=='A' && s[i+1]=='B'){
       cout<<"YES"<<endl;
       return 0;
    }

}
cout<<"NO"<<endl;

return 0;
}