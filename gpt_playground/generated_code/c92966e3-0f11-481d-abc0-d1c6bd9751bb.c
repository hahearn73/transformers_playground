#include <stdio.h>

void convertTemperature(float temp, char originalUnit, char targetUnit){
    float convertedTemp;
    
    if(originalUnit == 'C' && targetUnit == 'F'){
        convertedTemp = (temp * 9.0/5.0) + 32;
        printf("%.2f°C is equal to %.2f°F\n", temp, convertedTemp);
    }else if(originalUnit == 'F' && targetUnit == 'C'){
        convertedTemp = (temp - 32) * 5.0/9.0;
        printf("%.2f°F is equal to %.2f°C\n", temp, convertedTemp);
    }else{
        printf("Conversion not supported.\n");
    }
}

int main(){
    float temperature;
    char originalUnit, targetUnit;

    printf("Enter the temperature followed by its unit (C or F): ");
    scanf("%f %c", &temperature, &originalUnit);
    printf("Enter the target unit (C or F): ");
    scanf(" %c", &targetUnit); // Space before %c to catch any newline character

    convertTemperature(temperature, originalUnit, targetUnit);

    return 0;
}