// https://school.programmers.co.kr/learn/courses/30/lessons/12940

class Solution {
    public int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        if (n < m) {
            int tmp = n;
            n = m;
            m = tmp;
        }
        answer[0] = gcd(n, m);
        answer[1] = (n * m) / gcd(n, m);
        
        return answer;
    }
}