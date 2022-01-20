//Problema Disponível em:
#include <bits/stdc++.h>
#define DEBUG
#ifdef DEBUG
#define bug(X)                                                                 \
    {                                                                          \
        cout << "*** DEBUG *** " << __LINE__ << " " << #X << " " << X << endl; \
    }
#define bugC(X)                                                   \
    {                                                             \
        cout << "*** DEBUG *** " << __LINE__ << " " << X << endl; \
    }
#define bugV(X, N)                                                \
    {                                                             \
        cout << "*** DEBUG *** " << __LINE__ << " " << #X << ':'; \
        for (int i = 0; i < N; i++)                               \
            cout << X[i] << ' ';                                  \
        cout << endl;                                             \
    }
#define bugP(X, N)                                                \
    {                                                             \
        cout << "*** DEBUG *** " << __LINE__ << " " << #X << ':'; \
        for (int i = 0; i < N; i++)                               \
            cout << '(' << X[i].first << ',' << X[i].second << ')';                                  \
        cout << endl;                                             \
    }
#define bugM(X, N, M)                                             \
    {                                                             \
        cout << "*** DEBUG *** " << __LINE__ << " " << #X << ":\n"; \
        for (int i = 0; i < N; i++)                               \
        {                                                         \
            for (int j = 0; j < M; j++)                           \
                cout << X[i][j] << ' ';                           \
            cout << endl;                                         \
        }                                                         \
    }
#else
#define bug(X) \
    {          \
        ;      \
    }
#define bugC(X) \
    {           \
        ;       \
    }
#define bugV(X, N) \
    {              \
        ;          \
    }
#define bugP(X, N) \
    {              \
        ;
    }
#define bugM(X, N, M) \
    {                 \
        ;             \
    }
#endif
#define FOR(S, E) for (int I = S; I < E; I++)
#define FORJ(S, E) for (int J = S; J < E; J++)
#define FORK(S, E) for (int K = S; K < E; K++)
#define FORT(S, E) for (int T = S; T < E; T++)
#define FORR(S, E) for (int R = S - 1; R >= E; R--)
#define FORIT(OBJ) for (auto &IT : (OBJ))
#define LLMAX 12345678901234567
#define LLMIN -12345678901234567
#define MAX 123456789
#define LL long long
#define MIN -123456789
#define PI pair<int, int>
#define PL pair<LL, LL>
#define PB push_back
#define F first
#define S second
#define LIM 100001
#define MOD 1'000'000'007
using namespace std;

LL mod_sum(LL a, LL b){
    return (a + b) % MOD;
}

LL pd(int n){
    LL gauss = (n * (n + 1)) / 2;

    if(gauss % 2)
        return 0;

    LL target = gauss / 2;
    LL mem[target + 1] = {1,0};
    FOR(2,n + 1){
        FORR(target + 1, I){
            mem[R] = mod_sum(mem[R], mem[R - I]);
        }
    }

    return mem[target];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << pd(n) << endl;

    return 0;
}