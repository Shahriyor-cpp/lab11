#include <iostream>
using namespace std;
#include <string>

//#1

// void inputMatrix(int matrix[][100], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
// int main() {
//     int row, col;
//     cin >> row >> col;
//     int matrix[100][100];
//     inputMatrix(matrix, row, col);
//     for (int i = 0; i < row ; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << matrix[i][j]<<" ";
//         }
//     }
// }

//#2
// void inputMatrix(int matrix[][100], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
// void outputMatrix(int matrix[][100], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int row, col;
//     cin >> row >> col;
//     int matrix[100][100];
//     inputMatrix(matrix, 100, 100);
//     outputMatrix(matrix, row, col);
//     return 0;
// }

//#3
// void sum( int matrix[][100], int N, int M ) {
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             sum += matrix[i][j];
//         }
//     }
//     cout << sum << endl;
// }
// int main() {
//     int matrix[100][100];
//     int N, M;
//     cin >> N >> M;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     sum(matrix, N, M);
// }

//#4

// void rowMax(int matrix[][100],int N, int M) {
//     for(int i=0;i<N;i++) {
//         int max = matrix[i][0];
//         for(int j=1;j<M;j++) {
//             if(matrix[i][j] > max) {
//                 max = matrix[i][j];
//             }
//         }
//         cout<<"The max of row: "<<i+1<<" is"<<" "<<max<<" ";
//     }
//     cout<<endl;
// }
//
// int main() {
//     int matrix[100][100];
//     int N, M;
//     cin >> N >> M;
//     for(int i=0;i<N;i++) {
//         for(int j=0;j<M;j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     rowMax(matrix, N, M);
// }

//#5

// void columnSum(int matrix[][100],int N, int M) {
//     for(int i = 0; i < M; i++) {
//         int sum = 0;
//         for(int j = 0; j < N; j++) {
//             sum += matrix[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main() {
//     int martix[100][100];
//     int N, M;
//     cin>>N>>M;
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < M; j++) {
//             cin>>martix[i][j];
//         }
//     }
//     columnSum(martix, N, M);
// }

//#6

// void diagonalSum(int matrix[][100],int N) {
//     int sum = 0;
//     for(int i = 0; i < N; i++) {
//             sum += matrix[i][i];
//     }
//         cout<<sum<<endl;
// }
// int main() {
//     int martix[100][100];
//     int N;
//     cin>>N;
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             cin>>martix[i][j];
//         }
//     }
//     diagonalSum(martix, N);
// }

//#7

void matrixTranspose(int matrix[][100],int swap[][2000],int N, int M) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            swap[j][i]=matrix[i][j];
        }
    }
    cout<<swap<<endl;
}
int main() {
    int matrix[100][100];
    //create swap array
    int N, M;
    cin>>N>>M;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin>>matrix[i][j];
        }
    }
matrixTranspose(matrix,swap,N,M);
}