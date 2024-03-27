import java.util.Arrays;

public class AnagramCheck {

    public static boolean areAnagrams(String str1, String str2) {
        if(str1 == null || str2 == null || str1.length() != str2.length()) {
            return false;
        }
        
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        return Arrays.equals(arr1, arr2);
    }

    public static void main(String[] args) {
        String string1 = "listen";
        String string2 = "silent";
        
        boolean result = areAnagrams(string1, string2);
        
        System.out.println("The strings are anagrams: " + result);
    }
}