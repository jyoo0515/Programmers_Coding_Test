// https://programmers.co.kr/learn/courses/30/lessons/42842

import java.util.ArrayList;

class Solution {
    public ArrayList<Integer> getDivisors(int num) {
        ArrayList<Integer> divisors = new ArrayList<>();
        for (int i = 1; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                divisors.add(i);
            }
        }
        return divisors;
    }

    public int[] solution(int brown, int yellow) {
        ArrayList<Integer> yellow_divisors = getDivisors(yellow);
        for (int d : yellow_divisors) {
            int yellow_width = yellow / d;

            if ((2 * yellow_width + 2 * d + 4) == brown) {
                return new int[]{yellow_width + 2, d + 2};
            }
        }
        return null;
    }
}