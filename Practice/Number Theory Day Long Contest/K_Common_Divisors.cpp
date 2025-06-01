#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;

vector<ll>arr(n);
vector<ll>fq(1e6,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
    fq[arr[i]]++;
}


for(int i=1e6;i>=1;i--){
    ll multiples=0;
    for(int j=i;j<=1e6;j+=i){
        multiples+=fq[j];
          if(multiples>=2){
        cout<<i<<endl;
        return 0;
    }
    }
  
}
//cout<<1<<endl;
return 0;
}