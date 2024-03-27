public class FactorialCalculator {

    public static void main(String[] args) {
        int number = 5; // Example number
        int factorial = calculateFactorial(number);
        System.out.println("Factorial of " + number + " is: " + factorial);
    }

    public static int calculateFactorial(int number) {
        if (number <= 1)
            return 1;
        else
            return number * calculateFactorial(number - 1);
    }
}