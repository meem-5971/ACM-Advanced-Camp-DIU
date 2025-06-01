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
ll str=0,end=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        str++;
        
    }
    else{
       if(str>0) str--;
       else end++;

    }
}
 for(int i=0;i<end;i++){
    cout<<'(';
 }
 cout<<s;
 for(int i=0;i<str;i++){
    cout<<')';
 }
 cout<<endl;
return 0;
}