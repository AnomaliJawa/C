#include <stdio.h>
//Reynard Wistara Huga Wijaya_27022234024
int main() 
{
    int A;
    scanf("%d", &A);
	int B;
    scanf("%d", &B);
    int C;
    scanf("%d", &C);

    //Reaumur
    float reaumurA = A * 4.0 / 5.0;
    float reaumurB = B * 4.0 / 5.0;
    float reaumurC = C * 4.0 / 5.0;
    
    //Fahrenheit
    float fahrenheitA = (A * 9.0 / 5.0) + 32.0;
    float fahrenheitB = (B * 9.0 / 5.0) + 32.0;
    float fahrenheitC = (C * 9.0 / 5.0) + 32.0;
    
    //Kelvin
    float kelvinA = A + 273.00;
    float kelvinB = B + 273.00;
    float kelvinC = C + 273.00;
    
    printf("%.2f %.2f %.2f\n", reaumurA, fahrenheitA, kelvinA);
    printf("%.2f %.2f %.2f\n", reaumurB, fahrenheitB, kelvinB);
    printf("%.2f %.2f %.2f\n", reaumurC, fahrenheitC, kelvinC);

    return (0);
}

