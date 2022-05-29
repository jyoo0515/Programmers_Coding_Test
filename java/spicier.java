// https://programmers.co.kr/learn/courses/30/lessons/42626

import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for (int s: scoville) {
            minHeap.add(s);
        }

        while (minHeap.peek() < K) {
            if (minHeap.size() == 1) {
                answer = -1;
                break;
            }
            int min = minHeap.remove();
            int secondMin = minHeap.remove();
            int newScov = min + (secondMin * 2);
            minHeap.add(newScov);
            answer++;
        }

        return answer;
    }
}