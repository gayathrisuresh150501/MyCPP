#include<iostream>
using namespace std;

int main()
{
 int M, N;
 cin >> M >> N;
 char matrix[M + 1][N + 1][2];
 for (int i = 0; i < M; i++)
 {
     for (int j = 0; j < N; j++)
     {
         getline(cin, matrix[i][j][2]);
     }
 }

 for (int i = 0; i < M; i++)
 {
     for (int j = 0; j < N; j++)
     {
         cout << matrix[i][j][2];
     }
 }
  return 0;
}