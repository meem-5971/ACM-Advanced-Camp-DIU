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
while(!s.empty()){
    if(s.size()>=7 && s.substr(s.size()-7)=="dreamer"){
        s.erase(s.size()-7);
    }
    else if(s.size()>=6 && s.substr(s.size()-6)=="eraser"){
        s.erase(s.size()-6);
    }
    else if(s.size()>=5 && s.substr(s.size()-5)=="dream"){
        s.erase(s.size()-5);
    }
    else if(s.size()>=5 && s.substr(s.size()-5)=="erase"){
        s.erase(s.size()-5);
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
}
cout<<"YES"<<endl;
 
return 0;
}