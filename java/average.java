// https://programmers.co.kr/learn/courses/30/lessons/12944

import java.util.Arrays;

class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        int sum = Arrays.stream(arr).sum();
        return (double) sum / (double) arr.length;
    }
}

// public int getMean(int[] array) {
//     return (int) Arrays.stream(array).average().orElse(0);
// }