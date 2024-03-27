public class HammingDistance {

    public static int calculateHammingDistance(String string1, String string2) {
        if (string1.length() != string2.length()) {
            throw new IllegalArgumentException("Strings must be of the same length.");
        }

        int distance = 0;

        for (int i = 0; i < string1.length(); i++) {
            if (string1.charAt(i) != string2.charAt(i)) {
                distance++;
            }
        }
        
        return distance;
    }

    public static void main(String[] args) {
        String str1 = "karolin";
        String str2 = "kathrin";
        
        System.out.println("Hamming Distance: " + calculateHammingDistance(str1, str2));
    }
}