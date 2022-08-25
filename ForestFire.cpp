#include<iostream>
using namespace std;

int main()
{
    int M, N, X, Y;
    cin >> M >> N;
    char forest[M][N];
    cin >> X >> Y;

    for(int i = 1; i <= M; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> forest[i][j];
        }
    }

    for(int i = 1; i <= M; i++, cout << endl)
    {
        for(int j = 1; j <= N; j++)
        {
            cout << forest[i][j] << " ";
        }
    }

    return 0;
}