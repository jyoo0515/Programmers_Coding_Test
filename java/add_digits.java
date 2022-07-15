// https://school.programmers.co.kr/learn/courses/30/lessons/12931

public class Solution {
    public int solution(int n) {
        int answer = 0;
        String str = Integer.toString(n);
        
        for (int i = 0; i < str.length(); i++) {
            answer += str.charAt(i) - '0';
        }

        return answer;
    }
}

// public class Solution {
//     public int solution(int n) {
//         int answer = 0;

//         while (n != 0) {
//             answer += n % 10;
//             n /= 10;
//         }

//         return answer;
//     }
// }

// public class Solution {
//     public int solution(int n) {
//         int answer = 0;
//         String[] array = String.valueOf(n).split("");
//         for(String s : array){
//             answer += Integer.parseInt(s);
//         }
//         return answer;
//     }
// }