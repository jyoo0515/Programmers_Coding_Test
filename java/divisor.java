// https://programmers.co.kr/learn/courses/30/lessons/77884

class Solution {
    boolean evenDivisor(int num) {
        int divisorCnt = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                divisorCnt++;
                if (i * i < num) {
                    divisorCnt++;
                }
            }
        }
        return (divisorCnt % 2) == 0;
    }
    
    public int solution(int left, int right) {
        int answer = 0;
        for (int i = left; i <= right; i++) {
            if (evenDivisor(i)) {
                answer += i;
            } else {
                answer -= i;
            }
        }
        return answer;
    }
}

// class Solution {
//     public int solution(int left, int right) {
//         int answer = 0;

//         for (int i=left;i<=right;i++) {
//             //제곱수인 경우 약수의 개수가 홀수
//             if (i % Math.sqrt(i) == 0) {
//                 answer -= i;
//             }
//             //제곱수가 아닌 경우 약수의 개수가 짝수
//             else {
//                 answer += i;
//             }
//         }

//         return answer;
//     }
// }

// class Solution {
//     public int solution(int left, int right) {
//         int sum = 0;
//         for (int i = left; i <= right; i++) {
//             sum += i * ((countDenominators(i) % 2 == 0) ? 1 : -1);
//         }
//         return sum;
//     }
//     private int countDenominators(int num) {
//         int count = 0;
//         for (int i = 1; i <= num; i++) if (num % i == 0) count++;
//         return count;
//     }
// }