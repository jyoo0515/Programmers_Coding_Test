// https://programmers.co.kr/learn/courses/30/lessons/43238

import java.util.*;

class Solution {
    public long solution(int n, int[] times) {
        long max_time = (long) Arrays.stream(times).max().getAsInt() * n;
        long min_time = 1;
        long answer = 1;

        while (min_time <= max_time) {
            long mid = (min_time + max_time) / 2;
            long people = 0;
            for (int time: times) {
                people += mid / time;
                if (people >= n)
                    break;
            }
            if (people >= n) {
                answer = mid;
                max_time = mid - 1;
            } else {
                min_time = mid + 1;
            }
        }

        return answer;
    }
}