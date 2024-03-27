public class Main {

    public static void main(String[] args) {
        String testString = "racecar";
        boolean isPalindrome = isPalindrome(testString);
        System.out.println("Is '" + testString + "' a palindrome? " + isPalindrome);
    }

    public static boolean isPalindrome(String str) {
        int i = 0, j = str.length() - 1; 
        while(i < j) { 
            if(str.charAt(i) != str.charAt(j)) {
                return false; 
            } 
            i++;
            j--;
        } 
        return true;
    }
}