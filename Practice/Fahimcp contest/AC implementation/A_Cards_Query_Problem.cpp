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
 const int MAX = 200005;
 vector<set<int>>box(MAX);
 vector<multiset<int>>cards(MAX);
int q;
cin>>q;
while(q--){
int x;
cin>>x;
if(x==1){
    int i,j;
    cin>>i>>j;
    box[i].insert(j);
    cards[j].insert(i);
}
else if(x==2){
    int y;
    cin>>y;
    for(int val:cards[y]){
        cout<<val<<" ";
    }
    cout<<endl;
}
else{
    int y;
    cin>>y;
    for(int val:box[y]){
        cout<<val<<" ";
    }
    cout<<endl;
}
}
return 0;
}