// https://school.programmers.co.kr/learn/courses/30/lessons/12932

import java.util.ArrayList;

class Solution {
    public int[] solution(long n) {
        ArrayList<Long> arrList = new ArrayList<>();
        while (n != 0) {
            arrList.add(n % 10);
            n /= 10;
        }
        return arrList.stream().mapToInt(Long::intValue).toArray();
    }
}

// class Solution {
//     public int[] solution(long n) {
//         String a = "" + n;
//         int[] answer = new int[a.length()];
//         int cnt=0;

//         while(n>0) {
//             answer[cnt]=(int)(n%10);
//             n/=10;
//             System.out.println(n);
//             cnt++;
//         }
//         return answer;
//     }
// }

// class Solution {
//     public int[] solution(long n) {
//         String s = String.valueOf(n);
//         StringBuilder sb = new StringBuilder(s);
//         sb = sb.reverse();
//         String[] ss = sb.toString().split("");

//         int[] answer = new int[ss.length];
//         for (int i=0; i<ss.length; i++) {
//             answer[i] = Integer.parseInt(ss[i]);
//         }
//         return answer;
//     }
// }