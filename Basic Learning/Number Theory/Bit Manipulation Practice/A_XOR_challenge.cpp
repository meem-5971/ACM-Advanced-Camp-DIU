#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x;
cin>>x;
int bit_ct=(int)log2(x)+1;
int a=0,b=0;
vector<int>set_bits;
for(int i=0;i<bit_ct;i++){
    if(x&(1<<i)){
        set_bits.push_back(i);
    }
    else{
        a|=(1<<i);
        b|=(1<<i);
    }
}
ll ans=-1;
int sz=1<<set_bits.size();

for(int mask=0;mask<sz;mask++){
    int a_copy=a, b_copy=b;
    for(int j=0;j<set_bits.size();j++){
        if(mask&(1<<j)){
        a_copy|=(1<<set_bits[j]);
        }
        else{
            b_copy|=(1<<set_bits[j]);
        }
    }
    ans=max(ans,a_copy*1ll*b_copy);
}
cout<<ans<<endl;

 
return 0;
}