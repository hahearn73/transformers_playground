import java.util.Scanner;

public class TemperatureConverter {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Temperature Conversion Program");
        System.out.print("Enter temperature in Celsius: ");
        
        double celsius = scanner.nextDouble();
        
        double fahrenheit = convertCelsiusToFahrenheit(celsius);
        
        System.out.println(celsius + " °C = " + fahrenheit + " °F");
    }
    
    public static double convertCelsiusToFahrenheit(double celsius) {
        return (celsius * 9/5) + 32;
    }
}