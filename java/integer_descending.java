// https://school.programmers.co.kr/learn/courses/30/lessons/12933

import java.util.ArrayList;
import java.util.Comparator;

class Solution {
    public long solution(long n) {
        long answer = 0;
        ArrayList<Long> arr = new ArrayList<>();

        while (n != 0) {
            arr.add(n % 10);
            n /= 10;
        }

        arr.sort(Comparator.reverseOrder());
        StringBuilder sb = new StringBuilder();

        for (Long num : arr) {
            sb.append(num);
        }

        return Long.parseLong(sb.toString());
    }
}

// class Solution {
//     public long solution(long n) {
//         String[] list = String.valueOf(n).split("");
//         Arrays.sort(list);

//         StringBuilder sb = new StringBuilder();
//         for (String aList : list) sb.append(aList);

//         return Long.parseLong(sb.reverse().toString());
//     }
// }

// class Solution {
//     public long solution(long n) {
//         return Long.parseLong(String.valueOf(n).chars().mapToObj(ch -> (char) ch)
//                 .sorted(Comparator.reverseOrder())
//                 .collect(StringBuilder::new, StringBuilder::appendCodePoint, StringBuilder::append)
//                 .toString());
//     }
// }