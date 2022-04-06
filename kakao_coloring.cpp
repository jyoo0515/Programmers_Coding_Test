// https://programmers.co.kr/learn/courses/30/lessons/1829

#include <vector>
#include <algorithm>

using namespace std;

int M, N, cnt, tmp;
vector<vector<int>> matrix;
vector<vector<bool>> visited;
vector<int> dx, dy;

void dfs(int i, int j)
{
    visited[i][j] = true;
    tmp++;

    for (int k = 0; k < 4; k++)
    {
        int nx = i + dx[k];
        int ny = j + dy[k];

        if (0 <= nx && 0 <= ny && nx < M && ny < N)
        {
            if (matrix[nx][ny] == matrix[i][j] && !visited[nx][ny])
                dfs(nx, ny);
        }
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    M = m;
    N = n;
    cnt = 0;
    tmp = 0;
    visited = vector<vector<bool>>(m, vector<bool>(n, false));
    matrix.assign(picture.begin(), picture.end());
    dx = {1, -1, 0, 0};
    dy = {0, 0, 1, -1};

    int max_area = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > 0 && !visited[i][j])
            {
                cnt++;
                tmp = 0;
                dfs(i, j);
                max_area = max(max_area, tmp);
            }
        }
    }

    vector<int> answer(2);
    answer[0] = cnt;
    answer[1] = max_area;
    return answer;
}