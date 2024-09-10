#include <stdio.h>

int main() {
int RA;
int SC;
int DP;

printf("entrez votre revenu\n");
scanf("%d", &RA);
printf("entrez votre score de credit\n");
scanf("%d", &SC);
printf("entrez votre duree du pret\n");
scanf("%d", &DP);

if(RA >= 30000)
{
    if (SC >= 700 && DP <= 10)
    {
    printf("vous etes eligible");
    }
    else if (SC >= 650 && DP <= 15)
    {
    printf("vous etes eligible avec conditions");
    }
}
else if ((RA < 30000 && SC < 650) || (DP > 15))
{
    printf("non eligible");
    return 0;
}
}