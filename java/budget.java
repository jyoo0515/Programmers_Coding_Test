// https://programmers.co.kr/learn/courses/30/lessons/12982/solution_groups?language=java

import java.util.Arrays;

class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0, sum = 0;
        Arrays.sort(d);
        for (int num : d) {
            sum += num;
            if (sum <= budget)
                answer++;
            else
                break;
        }
        return answer;
    }
}