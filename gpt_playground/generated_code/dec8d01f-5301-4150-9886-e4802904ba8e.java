public class StringDigitChecker {
    
    public static boolean containsOnlyDigits(String input) {
        if (input == null || input.isEmpty()) {
            return false;
        }
        
        for (int i = 0; i < input.length(); i++) {
            if (!Character.isDigit(input.charAt(i))) {
                return false;
            }
        }
        
        return true;
    }

    public static void main(String[] args) {
        String testString = "12345";
        System.out.println(containsOnlyDigits(testString)); // Output: true

        testString = "1234a5";
        System.out.println(containsOnlyDigits(testString)); // Output: false
    }
}