#include <stdio.h>
int main(void){
    long card_number;
    // here we asking the number of card
    printf("Number:");
    scanf("%ld", &card_number);
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
    //now we should find the length and first numbers
    long temp_card = card_number;
    int length = 0;
    long start_digits = 0;
    while (temp_card > 0){
        // we 2 last number remainds we memorize them
        if (temp_card >= 10 && temp_card <= 99){
            start_digits = temp_card;
        }
        temp_card /= 10;
        length++;

    }
    int firt_digit = start_digits / 10;
    // now checking the type of cards
    if (length == 15 && (start_digits == 34 || start_digits == 37)){
        printf("AMEX\n");
    }
    else if (length == 16 && (start_digits >= 51 && start_digits <=55)){
        printf("MASTERCARD\n");
    }
    else if (length == 13 || length == 16 && firt_digit == 4){
        printf("VISA\n");
    }
    else {
        printf("INVALID\n");
    }
    return 0;
}