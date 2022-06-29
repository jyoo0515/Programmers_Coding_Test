// https://programmers.co.kr/learn/courses/30/lessons/12910

import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        ArrayList<Integer> answer = new ArrayList<>();
        Arrays.sort(arr);
        for (int num : arr) {
            if (num % divisor == 0) {
                answer.add(num);
            }
        }

        if (answer.size() == 0) {
            answer.add(-1);
        }

        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}

// class Solution {
//     public int[] solution(int[] arr, int divisor) {
//         int[] answer = Arrays.stream(arr).filter(factor -> factor % divisor == 0).toArray();
//         if (answer.length == 0) answer = new int[] {-1};
//         Arrays.sort(answer);
//         return answer;
//     }
// }