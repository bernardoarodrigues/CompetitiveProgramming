#include <bits/stdc++.h>

using namespace std;

long long countWays(int N, int M) {
    // Inicialização da matriz dp
    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(M + 1, vector<long long>(M + 1, 0)));
    
    for (int j = 1; j <= M; ++j) {
        for (int k = 1; k <= M; ++k) {
            dp[1][j][k] = 1;
        }
    }
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            for (int k = 1; k <= M; ++k) {
                for (int a = 1; a <= j; ++a) {
                    for (int b = 1; b <= k; ++b) {
                        dp[i][j][k] += dp[i - 1][a][b];
                    }
                }
            }
        }
    }
    
    long long totalWays = 0;
    for (int j = 1; j <= M; ++j) {
        for (int k = 1; k <= M; ++k) {
            totalWays += dp[N][j][k];
        }
    }
    
    return totalWays;
}

int main() {
    int N, M;
    cin >> N >> M;

    if(M*3 < N) {
        printf("0");
        return 0;
    }

    cout << countWays(N, M) << "\n";

    return 0;
}