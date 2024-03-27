public class FactorialCalculator {
    public static void main(String[] args) {
        int number = 5; // Example number, for which factorial is to be calculated
        int factorial = calculateFactorial(number);
        System.out.println("Factorial of " + number + " is: " + factorial);
    }

    public static int calculateFactorial(int num) {
        if (num == 0)
            return 1;
        else
            return (num * calculateFactorial(num - 1));
    }
}