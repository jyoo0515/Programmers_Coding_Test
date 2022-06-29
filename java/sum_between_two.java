// https://programmers.co.kr/learn/courses/30/lessons/12912

class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        if (a > b) {
            int tmp = b;
            b = a;
            a = tmp;
        }

        for (int i = a; i < b + 1; i++) {
            answer += i;
        }

        return answer;
    }
}

// 등차수열 합 공식
// class Solution {

//     public long solution(int a, int b) {
//         return sumAtoB(Math.min(a, b), Math.max(b, a));
//     }

//     private long sumAtoB(long a, long b) {
//         return (b - a + 1) * (a + b) / 2;
//     }
// }