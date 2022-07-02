// https://programmers.co.kr/learn/courses/30/lessons/12935

import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr) {
        if (arr.length == 1) {
            return new int[]{-1};
        }
        return Arrays.stream(arr).filter(i -> i != Arrays.stream(arr).min().getAsInt()).toArray();
    }
}

// class Solution {
//   public int[] solution(int[] arr) {
//       if(arr.length <= 1) return new int[]{-1};
//       int minIndex = 0;
//       for(int i = 1; i < arr.length; i++){
//           if(arr[minIndex] > arr[i]){
//               minIndex = i;
//           }
//       }
//       int[] answer = new int[arr.length - 1];
//       int i = 0;
//       int j = 0;
//       while(i < answer.length){
//           if(j == minIndex){
//             j++;
//             continue;  
//           } 
//           answer[i++] = arr[j++];
//       }
//       return answer;
//   }
// }
