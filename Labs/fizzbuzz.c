#include <stdio.h>

int main () {
    for (int i = 1; i<= 100; i++){
        if (i % 3 == 0 && i % 5 != 0)
        {
            printf("Lana\n");

        }
        else if (i % 5 == 0 && i % 3 != 0){
            printf("Banana\n");
        }
        else if (i % 3 == 0 && i % 5 == 0){
            printf("LanaBanana\n");
        }
        else { 
            printf("%d\n", i);
        }
    }
}