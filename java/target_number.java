class Solution {
    static int count;
    void dfs(int[] numbers, int target, int idx, int sum) {
        if (idx == numbers.length && sum == target) {
            count += 1;
            return;
        }
        if (idx == numbers.length)
            return;
        dfs(numbers, target, idx + 1, sum + numbers[idx]);
        dfs(numbers, target, idx + 1, sum - numbers[idx]);
    }

    public int solution(int[] numbers, int target) {
        dfs(numbers, target, 0, 0);
        return count;
    }
}

//class Solution {
//    public int solution(int[] numbers, int target) {
//        int answer = 0;
//        answer = dfs(numbers, 0, 0, target);
//        return answer;
//    }
//    int dfs(int[] numbers, int n, int sum, int target) {
//        if(n == numbers.length) {
//            if(sum == target) {
//                return 1;
//            }
//            return 0;
//        }
//        return dfs(numbers, n + 1, sum + numbers[n], target) + dfs(numbers, n + 1, sum - numbers[n], target);
//    }
//}