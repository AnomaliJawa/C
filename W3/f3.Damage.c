#include <stdio.h>
//Ananda Samudra Maha Putra_2702260552
int main() 
{
    int Ph, M, Pu;
    
    scanf("%d %d %d", &Ph, &M, &Pu);
    double total_damage = (0.20 * Ph) + (0.30 * M) + (0.50 * Pu);
    printf("%.2lf\n", total_damage);
    
    return (0);
}
