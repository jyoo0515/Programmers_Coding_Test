// https://programmers.co.kr/learn/courses/30/lessons/43162

class Solution {
    void dfs(int[][] computers, boolean[] visited, int cur) {
        visited[cur] = true;
        for (int j = 0; j < computers[cur].length; j++) {
            if (j != cur && !visited[j] && computers[cur][j] == 1)
                dfs(computers, visited, j);
        }
    }

    public int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] visited = new boolean[n];
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(computers, visited, i);
                answer++;
            }
        }
        return answer;
    }
}