// https://school.programmers.co.kr/learn/courses/30/lessons/12918

import java.util.regex.Pattern;

class Solution {
    public boolean solution(String s) {
        String pattern = "\\d{4}|\\d{6}";
        
        return Pattern.matches(pattern, s);
    }
}

// class Solution {
//     public boolean solution(String s) {
//         if(s.length() == 4 || s.length() == 6){
//             try{
//                 int x = Integer.parseInt(s);
//                 return true;
//             } catch(NumberFormatException e){
//                 return false;
//             }
//         }
//         else return false;
//     }
// }