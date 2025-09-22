// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 

   
    printf("Enter an integer number: ");
    scanf("%lld", &num);

   
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

   
    int maxFreq = freq[0], digitWithMaxFreq = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            digitWithMaxFreq = i;
        }
    }

    printf("Digit that occurs the most = %d (appears %d times)\n", digitWithMaxFreq, maxFreq);

    return 0;
}
