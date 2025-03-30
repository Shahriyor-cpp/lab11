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

void transposeMatrix(int M, int N, int matrix[10][10]) {
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int M, N;
    cin >> M >> N;
    
    int matrix[10][10]; 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(M, N, matrix);

    return 0;
}

//8

void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int M, int N, int P) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;  
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M, N, P;
    cin >> M >> N;  
    cin >> N >> P;  
    
    int A[10][10], B[10][10], C[10][10]; 

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }

    multiplyMatrix(A, B, C, M, N, P);

    return 0;
}

//9
     void rotateMatrix(int matrix[10][10], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < N; i++) {
        int start = 0, end = N - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int matrix[10][10];  

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix(matrix, N);

    return 0;
}

//10

void count(const string& s) {
    int vowels = 0, consonants = 0;
    for (char ch : s) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    cout << vowels << " " << consonants << endl;
}

int main() {
    string s;
    cin >> s;
    count(s);
    return 0;
}
//11

void reverseString(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    cout << s << endl;
}

int main() {
    string s;
    cin >> s;
    reverseString(s);
}

//12

void palindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            cout << "No" << endl;
            return;
        }
        start++;
        end--;
    }
    cout << "Yes" << endl;
}

int main() {
    string s;
    cin >> s;
    palindrome(s);
    return 0;
}

//13
void character(string s) {
    int freq[26] = {0};
    
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    int maxFreq = 0;
    char mostFrequent = s[0];
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequent = i + 'a';  
        }
    }
    cout << mostFrequent << endl;
}
int main() {
    string s;
    cin >> s;
    character(s);
    return 0;
}

//14

void remove(string& s) {
    bool seen[26] = {false}; 
    string result = ""; 
    for (char ch : s) {
        if (!seen[ch - 'a']) {
            seen[ch - 'a'] = true;  
            result += ch;  
        }
    }
    cout << result << endl;  
}
int main() {
    string s;
    cin >> s;
    remove(s);
    return 0;
}
//15

void LongestWord(string sentence) {
    string longest = "";
    string current = "";
    for (char ch : sentence) {
        if (ch != ' ') {
            current += ch;
        } else {
            if (current.length() > longest.length()) {
                longest = current;  
            }
            current = "";  
        }
    }
    if (current.length() > longest.length()) {
        longest = current;
    }
    cout << longest << endl; 
}

int main() {
    string sentence;
    getline(cin, sentence); 
    LongestWord(sentence);
    return 0;
}

//16
void check(string s1, string s2) {
    if (s1.length() != s2.length()) {
        cout << "No" << endl;
        return;
    }
    int freq2[26] = {0};  

    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl; 
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    check(s1, s2);
    return 0;
}
