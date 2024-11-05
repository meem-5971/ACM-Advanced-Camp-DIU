#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
int n;
cin>>n;
int sum=0;
int count=0;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
     cout<<i<<" "<<n/i<<endl;

     count++;
     sum+=i;
     if(n/i!=i){
        count++;
        sum+=n/i;
     }
    }
}

cout<<"Count: "<<count<<endl;
cout<<"Sum: "<<sum<<endl;

return 0;
}