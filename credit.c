#include <stdio.h>
int main(void){
    long card_number;
    // here we asking the number of card
    printf("Number:");
    scanf("%lld", &card_number);
    long temp = card_number; 
    int sum = 0;
    int position = 0; //calculating the position from the right to the left
    while (temp > 0){
        int last_digit = temp % 10; // getting the last number
        if (position % 2 == 1){
            // every second number we are multiplying by two
            int multiplied = last_digit * 2;
            // now we should find the sum of 2 digit number for example: 14 = 1+4
            sum += (multiplied / 10) + (multiplied % 10);
        } else{
            // one digit number
            sum += last_digit;
        }
        temp /= 10; // cutting the last number
        position++;// to the next position

    }
    if ( sum % 10 != 0){
        printf("Invalid\n");
        return 0; // ending the code
    }
    printf("Valid\n");
    return 0;
}