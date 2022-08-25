#include<string>
#include <iostream>

using namespace std;
void print(int mat[M][N]);
void print(int mat[M][N])
{
	// Traverse through all rows
	for (int i = 0; i < M; i++, cout << endl) {

		// If current row is even, print from
		// left to right
		if (i % 2 == 0) {
			for (int j = 0; j < N; j++)
				cout << mat[i][j] << " ";

		// If current row is odd, print from
		// right to left
		} else {
			for (int j = N - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
	}
}

// Driver code
int main()
{
  int M, N;
  cin >> M >> N;
	string mat[M][N];
  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < N; j++)
    {
      cin >> mat[i][j];
    }
  }

	print(mat[M][N]);
	return 0;
}
