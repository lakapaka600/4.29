#include <stdio.h>

int main(void) {
    int num1,num2;
  int risultato=0;
    printf("inserisci num1\n");
    scanf("%d",&num1);
    printf("inserisci num2\n");
    scanf("%d",&num2);
    int i = 1;
        while(i <= num2) {
        i++;
            risultato=risultato + num1;

    }

    printf("il risultato equivale ad = %d\n",risultato);


    return 0;
}
