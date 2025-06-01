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
int on=0,two=0,thr=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        on++;
    }
    else if(s[i]=='2'){
        two++;
    }
    else if(s[i]=='3'){
        thr++;
    }
}

if(on>0){
    cout<<'1';
    for(int i=0;i<on-1;i++){
        cout<<"+1";
    }
}
if(two>0){
    if(on>0){
        cout<<"+2";
    }
    else cout<<'2';
    for(int i=0;i<two-1;i++){
        cout<<"+2";
    }
}
if(thr>0){
    if(on>0 || two>0){
        cout<<"+3";
    }
    else cout<<'3';
    for(int i=0;i<thr-1;i++){
        cout<<"+3";
    }
}

return 0;
}