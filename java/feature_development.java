// https://programmers.co.kr/learn/courses/30/lessons/42586

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        ArrayList<Integer> answer = new ArrayList<>();
        Queue<Integer> daysLeft = new LinkedList<>();

        for (int i = 0; i < progresses.length; i++) {
            int remainder = 100 - progresses[i];
            daysLeft.add((int) Math.ceil(remainder / (double) speeds[i]));
        }

        int cnt = 1;
        int bottleNeck = daysLeft.poll();
        while (!daysLeft.isEmpty()) {
            if (bottleNeck < daysLeft.peek()) {
                answer.add(cnt);
                bottleNeck = daysLeft.poll();
                cnt = 1;
            } else {
                cnt++;
                daysLeft.remove();
            }
        }
        answer.add(cnt);

        return answer.stream().mapToInt(i -> i).toArray();
    }
}

// import java.util.ArrayList;
// import java.util.Arrays;
// class Solution {
//     public int[] solution(int[] progresses, int[] speeds) {
//         int[] dayOfend = new int[100];
//         int day = -1;
//         for(int i=0; i<progresses.length; i++) {
//             while(progresses[i] + (day*speeds[i]) < 100) {
//                 day++;
//             }
//             dayOfend[day]++;
//         }
//         return Arrays.stream(dayOfend).filter(i -> i!=0).toArray();
//     }
// }