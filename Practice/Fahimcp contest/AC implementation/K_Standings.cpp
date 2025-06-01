#include<bits/stdc++.h>
#define ll long long
using namespace std;


struct Person {
    int id;
    ll heads;
    ll tails;
};

bool cmp(const Person &a, const Person &b) {
    ll left = a.heads * (b.heads + b.tails);
    ll right = b.heads * (a.heads + a.tails);
    if (left != right) {
        return left > right; // Higher success rate first
    } else {
        return a.id < b.id; // Lower ID first if tie
    }
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<Person>pq;
for(int i=1;i<=n;i++){
    ll a,b;
    cin>>a>>b;
    //double rate= (double) a/(a+b);
    pq.push_back({i,a,b});
}
sort(pq.begin(),pq.end(),cmp);
for(auto u:pq){
    cout<<u.id<<" ";
}
cout<<endl;

return 0;
}