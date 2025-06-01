#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,l;
cin>>n>>l;
vector<int>a(n);

for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());

double rad=2*max(a[0],l-a[n-1]);

for(int i=0;i<n-1;i++){
    rad=max(rad,double(a[i+1]-a[i]));
}

cout<<setprecision(9)<<rad/2<<endl;
 
return 0;
}