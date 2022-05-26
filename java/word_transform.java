class Solution {
    boolean isOneCharDiff(String a, String b) {
        int cnt = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i))
                cnt++;
        }
        return cnt == 1;
    }

    int dfs(String[] words, boolean[] visited, String begin, String target, int cur, int cnt) {
        if (begin.equals(target))
            return cnt;
        if (visited[cur])
            return cnt;

        visited[cur] = true;
        int answer = 0;
        for (int i = 0; i < words.length; i++) {
            if (i != cur && isOneCharDiff(begin, words[i]) && !visited[i]) {
                answer = dfs(words, visited, words[i], target, i, cnt + 1);
            }
        }
        return answer;
    }

    public int solution(String begin, String target, String[] words) {
        int answer = Integer.MAX_VALUE;
        for (int i = 0; i < words.length; i++) {
            boolean[] visited = new boolean[words.length];
            if (isOneCharDiff(begin, words[i])) {
                answer = Math.min(answer, dfs(words, visited, words[i], target, i, 1));
            }
        }

        if (answer == Integer.MAX_VALUE)
            return 0;
        else
            return answer;
    }
}