import java.util.Random;

public class RandomNumberGenerator {
    public static void main(String[] args) {
        // Create instance of Random class
        Random random = new Random();
        
        // Generating 5 pseudorandom numbers
        for (int i = 0; i < 5; i++) {
            int number = random.nextInt(); // Generate a random number
            System.out.println(number);
        }
    }
}