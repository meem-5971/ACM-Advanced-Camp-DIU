#include<bits/stdc++.h>
using namespace std;

int main(){
int b;
cin>>b;
vector<int>a(b);
for(int i=0;i<b;i++){
    cin>>a[i];
}
sort(a.rbegin(),a.rend());
string x=to_string(a[0]);
string y=to_string(a[1]);
string z=to_string(a[2]);
vector<string>ans;
string m=x+y+z;
ans.push_back(m);
string n=x+z+y;
ans.push_back(n);
string o=y+z+x;
ans.push_back(o);
string p=y+x+z;
ans.push_back(p);
string q=z+x+y;
ans.push_back(q);
string r=z+y+x;
ans.push_back(r);
long long res=0;
for(auto u:ans){
res=max(res, stoll(u));
}
cout<<res<<endl;
return 0;
}
