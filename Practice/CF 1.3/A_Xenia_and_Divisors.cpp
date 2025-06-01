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
vector<int>a(n);
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
int m=n/3;
int x=0,y=0,z=0;
while(m){
    if(mp[1] && mp[2] && mp[4]){
        x++;
        m--;
        mp[1]--;
        mp[2]--;
        mp[4]--;
    }
    else if(mp[1] && mp[2] && mp[6]){
        y++;
        m--;
        mp[1]--;
        mp[2]--;
        mp[6]--;
    }
    else if(mp[1] && mp[3] && mp[6]){
        z++;
        m--;
        mp[1]--;
        mp[3]--;
        mp[6]--;
    }
    else{
        break;
    }


}
if(m>0) cout<<-1<<endl;
else{
    while(x--) cout<<"1 2 4"<<endl;
    while(y--) cout<<"1 2 6"<<endl;
    while(z--) cout<<"1 3 6"<<endl;
} 

 
return 0;
}