/**
 * Author : Maulidan Nashuha
 * Date : 5 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int currency[] = {100000, 50000, 20000, 10000, 5000, 1000, 500, 100};
    int amountCurrency[] = {0, 0, 0, 0, 0, 0, 0, 0}, money;

    printf("Masukkan nilai uang : ");
    scanf(" %d", &money);

    for (int i = 0; i < 8; i++)
    {
        while (money - currency[i] >= 0)
        {
            money -= currency[i];
            amountCurrency[i]++;
        }
        
        if (money < 100)
            break;        
    }
    
    for (int i = 0; i < 8; i++)
        printf("Rp.%d : %d\n", currency[i], amountCurrency[i]);

    return 0;
}

