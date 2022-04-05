#include <vector>
#include <algorithm>

using namespace std;

int M, N;
int cnt = 0;
vector<vector<int>> matrix;
vector<vector<bool>> visited;
vector<int> arr;

void dfs(int i, int j)
{
    if (visited[i][j])
        return;

    visited[i][j] = true;
    if (i - 1 >= 0 && matrix[i - 1][j] == matrix[i][j])
    {
        arr[cnt]++;
        dfs(i - 1, j);
    }
    else if (j - 1 >= 0 && matrix[i][j - 1] == matrix[i][j])
    {
        arr[cnt]++;
        dfs(i, j - 1);
    }
    else if (i + 1 < M && matrix[i + 1][j] == matrix[i][j])
    {
        arr[cnt]++;
        dfs(i + 1, j);
    }
    else if (j + 1 < N && matrix[i][j + 1] == matrix[i][j])
    {
        arr[cnt]++;
        dfs(i, j + 1);
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    M = m;
    N = n;
    visited = vector<vector<bool>>(m, vector<bool>(n, false));
    matrix.assign(picture.begin(), picture.end());
    arr.resize(m * n + 1);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > 0 && !visited[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    vector<int> answer(2);
    answer[0] = cnt + 1;
    answer[1] = *max_element(arr.begin(), arr.end());
    return answer;
}