// https://programmers.co.kr/learn/courses/30/lessons/86051


import java.util.Arrays;

class Solution {
    public int solution(int[] numbers) {
        int sum = Arrays.stream(numbers).sum();
        return 45 - sum;
    }
}