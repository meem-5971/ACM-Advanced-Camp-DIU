#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll res;
void dfs(int id, ll curr_sum, ll curr_num){
if(id==s.size()){
res+=curr_num+curr_sum;
return;
}
int dig=s[id]-'0';
dfs(id+1,curr_sum+curr_num,dig); //when + is encountered
dfs(id+1,curr_sum,curr_num*10+dig); //+ is not here
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>s;

dfs(1,0,s[0]-'0');
cout<<res<<endl;
 
return 0;
}