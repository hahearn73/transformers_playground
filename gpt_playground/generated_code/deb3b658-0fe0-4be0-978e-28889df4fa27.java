public class PrimeChecker {
    public static void main(String[] args) {
        int number = 29; // You can change this to any number you want to check
        boolean isPrime = true;

        // 0 and 1 are not prime numbers
        if (number <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= Math.sqrt(number); i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
    }
}