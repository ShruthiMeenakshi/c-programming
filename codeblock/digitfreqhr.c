#include <stdio.h>

int main() {
    char str[100];
    int freq[10] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }

    printf("Frequency of digits:\n");
    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", i, freq[i]);
    }

    return 0;
}
