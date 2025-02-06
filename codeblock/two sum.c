#include <stdio.h>

int main() {
    int arr[50], target, i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d %d]\n",i,j);
            }
        }
    }
    return 0;
}
