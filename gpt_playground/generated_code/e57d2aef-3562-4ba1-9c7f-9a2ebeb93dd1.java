public class GCD {
    public static int calculateGCD(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return calculateGCD(b, a % b);
        }
    }

    public static void main(String[] args) {
        int num1 = 36;
        int num2 = 60;
        System.out.println("The GCD of " + num1 + " and " + num2 + " is: " + calculateGCD(num1, num2));
    }
}