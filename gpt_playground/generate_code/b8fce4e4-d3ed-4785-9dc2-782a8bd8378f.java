public class PerfectSquareChecker {
    public static boolean isPerfectSquare(int num) {
        long left = 1, right = num;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long square = mid * mid;
            
            if (square == num) {
                return true;
            } else if (square < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }

    public static void main(String[] args) {
        int testNumber = 16;
        System.out.println("Is " + testNumber + " a perfect square? " + isPerfectSquare(testNumber));
    }
}