#include <iostream>
using namespace std;

int main() {
    int MAX = 50;
    int M, N;

    cout << "Enter M and N : ";
    cin >> M >> N;

    int a[MAX][MAX];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }


    int rowSum[MAX] = {0};
    int colSum[MAX] = {0};

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }

    cout << "\nRow sums:\n";
    for (int i = 0; i < M; ++i) {
        cout << "Row " << i << ": " << rowSum[i] << "\n";
    }

    cout << "\nColumn sums:\n";
    for (int j = 0; j < N; ++j) {
        cout << "Col " << j << ": " << colSum[j] << "\n";
    }

    
    int maxRowIdx = 0;
    for (int i = 1; i < M; ++i) {
        if (rowSum[i] > rowSum[maxRowIdx]) {
            maxRowIdx = i;
        }
    }
    cout << "\nRow with max sum: " << maxRowIdx << " (sum = " << rowSum[maxRowIdx] << ")\n";


    int t[MAX][MAX];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            t[j][i] = a[i][j];  
        }
    }

    cout << "\nTransposed matrix (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }

  
    bool found = false;
    for (int i = 0; i < M; ++i) {
        
        int minInRow = a[i][0];
        for (int j = 1; j < N; ++j) {
            if (a[i][j] < minInRow) {
                minInRow = a[i][j];
            }
        }

       
        for (int j = 0; j < N; ++j) {
            if (a[i][j] == minInRow) {
                
                bool isMaxInCol = true;
                for (int k = 0; k < M; ++k) {
                    if (a[k][j] > a[i][j]) {
                        isMaxInCol = false;
                        break;
                    }
                }

                if (isMaxInCol) {
                    cout << "\nSaddle point found: value = " << a[i][j]
                         << " at row " << i << ", col " << j << "\n";
                    found = true;
                    
                    break; 
                }
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "\nNo saddle point found.\n";
    }

    return 0;
}
