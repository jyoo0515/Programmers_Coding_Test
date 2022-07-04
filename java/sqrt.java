// https://programmers.co.kr/learn/courses/30/lessons/12934

class Solution {
    public long solution(long n) {
        long answer = 0;
        double root = Math.sqrt(n);
        if (root - Math.floor(root) == 0) {
            return (long) Math.pow(root + 1, 2);
        } else {
            return -1;
        }
    }
}

// class Solution {
//     public long solution(long n) {
//         if (Math.pow((int)Math.sqrt(n), 2) == n) {
//             return (long) Math.pow(Math.sqrt(n) + 1, 2);
//         }
//         return -1;
//     }
// }