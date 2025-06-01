#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s1,s2;
cin>>s1>>s2;
map<char,int>mp;
map<char,int>mq;
for(int i=0;i<s1.size();i++){
    if(s1[i]=='@') mp['@']++;
    else mp[s1[i]]++;
}
bool flag=true;

for(int i=0;i<s2.size();i++){
    if(s2[i]=='@') mq['@']++;
    else mq[s2[i]]++;
}
int x=0,y=0;
    for(char i='a';i<='z';i++){
        if(i!='a' && i!='t' && i!='c' && i!='o' && i!='d' && i!='e' && i!='r'){
            if(mp[i]!=mq[i]) flag=false;
        }
        else{
            x+=max(mp[i]-mq[i],0);
            y+=max(mq[i]-mp[i],0);
        }
    }
    if(x>mq['@']) flag=false;
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}