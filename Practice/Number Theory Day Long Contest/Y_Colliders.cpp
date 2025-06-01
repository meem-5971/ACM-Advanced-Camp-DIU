#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
vector<bool> isPrime(N, true); 
vector<int> lp(N, 0);
vector<int> hp(N, 0); 
void sieve(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        if(isPrime[i]){ 
            lp[i]=i,hp[i]=i; //lowest highest prime of a prime is itself
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)lp[j]=i;
            }
        }
    }
}

vector<int> get_factors(int n){
    vector<int>factors;
    while(n>1){
    int prime_factor=hp[n];
    factors.push_back(prime_factor);
    while(n%prime_factor==0){
        n/=prime_factor;
        
    }
    
  
}
  return factors;
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
sieve();

int t,n;
cin>>n>>t;
  unordered_map<int,bool>active;
    unordered_map<int,int>active_factors; 
while(t--){
    string query;
    int coldr;
    cin>>query>>coldr;

    if(query=="+"){
        if(active.count(coldr) && active[coldr]){
            cout<<"Already on"<<endl;
        }
        else{
            vector<int>factors=get_factors(coldr);

            int conflict=0;
            for(int f:factors){
                if(active_factors.count(f)){
                    conflict=active_factors[f];
                    break;
                }
            }
                if(conflict) cout<<"Conflict with "<<conflict<<endl;
                else{
                    active[coldr]=true;
                    for(int f:factors){
                        active_factors[f]=coldr;
                    }
                    cout<<"Success"<<endl;
                }
            
        }
    }
    else if(query=="-"){
        if(!active.count(coldr) || !active[coldr]){
            cout<<"Already off"<<endl;
        }
        else{
            active.erase(coldr);
            vector<int>factors=get_factors(coldr);
            for(int f:factors){
                active_factors.erase(f);
            }
            cout<<"Success"<<endl;
        }
    }

}

 
return 0;
}