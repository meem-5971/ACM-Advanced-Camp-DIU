#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef vector<vector<int>> Matrix;
Matrix normalize(const vector<string>& sheet, int& h, int& w){
    int H=sheet.size();
    int W=sheet[0].size();
    int minrow=H,maxrow=-1,mincol=W,maxcol=-1;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(sheet[i][j]=='#'){
                minrow=min(minrow,i);
                maxrow=max(maxrow,i);
                mincol=min(mincol,j);
                maxcol=max(maxcol,j);
            }
        }
    }
    if(minrow>maxrow){
        h=0,w=0;
        return {};
    }
    h=maxrow-minrow+1;
    w=maxcol-mincol+1;
    Matrix result(h,vector<int>(w,0));
    for(int i=minrow;i<=maxrow;i++){
        for(int j=mincol;j<=maxcol;j++){
            if(sheet[i][j]=='#'){
                result[i-minrow][j-mincol]=1;
            }
        }
    }
    return result;
}
bool match(const Matrix& a, const Matrix& b, const Matrix& x, int Hx, int Wx, int ha, int wa, int hb, int wb) {
for(int ai=0;ai+ha<=Hx;ai++){
    for(int aj=0;aj+wa<=Wx;aj++){
        for(int bi=0;bi+hb<=Hx;bi++){
            for(int bj=0;bj+wb<=Wx;bj++){
                vector<vector<int>> combined(Hx, vector<int>(Wx, 0));
                for (int i = 0; i < ha; i++) {
                    for (int j = 0; j < wa; j++) {
                        if (a[i][j]) combined[ai + i][aj + j] = 1;
                    }
                }
                for (int i = 0; i < hb; i++) {
                    for (int j = 0; j < wb; j++) {
                        if (b[i][j]) combined[bi + i][bj + j] = 1;
                    }
                }
                bool ok = true;
                for (int i = 0; i < Hx; i++) {
                    for (int j = 0; j < Wx; j++) {
                        if (combined[i][j] != x[i][j]) {
                            ok = false;
                            break;
                        }
                    }
                    if (!ok) break;
                }

                if (ok) return true;
            }
        }
    }

}
return false;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int Ha,Wa;
cin>>Ha>>Wa;
vector<string>A(Ha);
for(int i=0;i<Ha;i++){
    cin>>A[i];
}
int Hb,Wb;
cin>>Hb>>Wb;
vector<string>B(Hb);
for(int i=0;i<Hb;i++){
    cin>>B[i];
}
int Hx,Wx;
cin>>Hx>>Wx;
vector<string>X(Hx);
for(int i=0;i<Hx;i++){
    cin>>X[i];
}
int ha,wa,hb,wb;
Matrix a = normalize(A, ha, wa);
Matrix b = normalize(B, hb, wb);
Matrix x = normalize(X, Hx, Wx); 
if (match(a, b, x, Hx, Wx, ha, wa, hb, wb)) {
    cout << "Yes" << endl;
} else {
    cout << "No" << endl;
}
 
return 0;
}