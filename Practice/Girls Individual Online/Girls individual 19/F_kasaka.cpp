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
string st=s;
reverse(st.begin(),st.end());
string op2="";
bool ok=false;
int latr=0,prev=0;
for(int i=s.size()-1;i>=0;i--){
if(s[i]=='a'){
    latr++;
  
}
else{
    break;
}
}
for(int i=0;i<s.size();i++){
    if(s[i]=='a'){
       prev++;
      
    }
    else{
        break;
    }
    }
for(int i=prev;i<s.size()-latr;i++){
    op2+=s[i];
}
string op1=op2;
reverse(op1.begin(),op1.end());
//cout<<op1<<endl;
if(st==s){
    cout<<"Yes"<<endl;
    return 0;
} 
else{
    if(prev<=latr && op1==op2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

return 0;
}