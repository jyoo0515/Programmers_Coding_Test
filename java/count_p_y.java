// https://school.programmers.co.kr/learn/courses/30/lessons/12916

class Solution {
    boolean solution(String s) {
        int pCnt = 0;
        int yCnt = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'p' || s.charAt(i) == 'P') pCnt++;
            else if (s.charAt(i) == 'y' || s.charAt(i) == 'Y') yCnt++;
        }

        return pCnt == yCnt;
    }
}

// class Solution {
//     boolean solution(String s) {
//         s = s.toUpperCase();

//         return s.chars().filter( e -> 'P'== e).count() == s.chars().filter( e -> 'Y'== e).count();
//     }
// }

// class Solution {
//     boolean solution(String s) {
//         s = s.toLowerCase();
//         int count = 0;

//         for (int i = 0; i < s.length(); i++) {

//             if (s.charAt(i) == 'p')
//                 count++;
//             else if (s.charAt(i) == 'y')
//                 count--;
//         }

//         if (count == 0)
//             return true;
//         else
//             return false;
//     }
// }