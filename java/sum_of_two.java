// https://programmers.co.kr/learn/courses/30/lessons/68644

import java.util.Arrays;
import java.util.TreeSet;

class Solution {
    public int[] solution(int[] numbers) {
        Arrays.sort(numbers);
        TreeSet<Integer> s = new TreeSet<>();
        for (int i = 0; i < numbers.length - 1; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                s.add(numbers[i] + numbers[j]);
            }
        }

        int[] answer = new int[s.size()];
        int idx = 0;
        for (int e : s) {
            answer[idx++] = e;
        }

        return answer;
    }
}

// import java.util.HashSet;
// import java.util.Set;

// class Solution {
//      public int[] solution(int[] numbers) {
//         Set<Integer> set = new HashSet<>();

//         for(int i=0; i<numbers.length; i++) {
//             for(int j=i+1; j<numbers.length; j++) {
//                 set.add(numbers[i] + numbers[j]);
//             }
//         }

//         return set.stream().sorted().mapToInt(Integer::intValue).toArray();
//     }
// }