//Problema Disponível em: 
#include <bits/stdc++.h>
#define DEBUG
#ifdef DEBUG 
    #define bug(X) { cout<<"*** DEBUG *** "<<__LINE__<<" "<<#X <<" "<< X <<endl; }
    #define bugC(X) { cout<<"*** DEBUG *** "<<__LINE__<<" "<< X <<endl; }
    #define bugV(X,N) { cout<<"*** DEBUG *** "<<__LINE__<<" "<<#X <<':'; for(int i = 0; i < N; i++ ) cout<< X[i] <<' ';  cout<<endl; }
    #define bugM(X,N,M) { cout<<"*** DEBUG *** "<<__LINE__<<" "<<#X <<':'; for(int i = 0; i < N; i++ ) { for(int j = 0; j < M; j++) cout<< X[i][j] << ' ' ;  cout<<endl; }}
#else
    #define bug(X) {;}
    #define bugC(X) {;}
    #define bugV(X,N) {;}
    #define bugM(X,N,M) {;}
#endif
#define FOR(S,E) for(int I = S; I < E; I++)
#define FORJ(S,E) for(int J = S; J < E; J++)
#define FORK(S,E) for(int K = S; K < E; K++)
#define FORT(S,E) for(int T = S; T < E; T++)
#define FORR(S,E) for(int R = S-1; R>= E; R--)
#define FORIT(OBJ) for(auto IT: (OBJ))
#define LLMAX 123456789012345
#define LLMIN -123456789012345
#define MAX 123456789
#define MIN -123456789
#define PI pair<int,int>
#define PB push_back
#define LL long long
#define F first
#define S second
#define LIM 1000001
#define TYPES 7
#define MOD 1'000'000'007
using namespace std;

int sum(int a, int b){
    return (a+b) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    int mem[LIM][TYPES];
    
    FOR(1,TYPES)
        mem[1][I] = 1;

    FOR(2,LIM){
        FORJ(1,TYPES){
            if(J > 2){
                mem[I][J] = sum(mem[I-1][1], mem[I-1][3]);
                mem[I][J] = sum(mem[I][J], mem[I-1][4]);
                mem[I][J] = sum(mem[I][J], mem[I-1][5]);
                mem[I][J] = sum(mem[I][J], mem[I-1][6]);
            }else{
                mem[I][J] = sum(mem[I-1][1], mem[I-1][2]);
                mem[I][J] = sum(mem[I][J], mem[I-1][4]);
            }
        }
    }

    cin >> t;
    while(t--){
        cin >> n;
        cout << sum(mem[n][1], mem[n][4]) << endl; 
    } 
    return 0;
}