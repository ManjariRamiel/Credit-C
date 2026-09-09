#include <stdio.h>
int main(void){
    long card_number;
    // here we asking the number of card
    printf("Number:");
    scanf("%lld", &card_number);

    //for cheking now this code will just show me number
    printf("Received: %lld\n", card_number);
    return 0;
}