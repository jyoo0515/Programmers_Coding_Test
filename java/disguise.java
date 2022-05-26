import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        HashMap<String, Integer> map = new HashMap<>();

        for (String[] clothe: clothes) {
            if (map.containsKey(clothe[1])) {
                int previousVal = map.get(clothe[1]);
                map.put(clothe[1], previousVal + 1);
            } else {
                map.put(clothe[1], 1);
            }
        }

        for (Integer val : map.values()) {
            answer *= val + 1;
        }
        return answer - 1;
    }
}