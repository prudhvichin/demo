#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1)
        return false;

    if (num <= 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

void print_primes(int upper_limit) {
    for (int num = 2; num <= upper_limit; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int upper_limit;
    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    printf("Prime numbers between 2 and %d are: ", upper_limit);
    print_primes(upper_limit);

    return 0;
}
