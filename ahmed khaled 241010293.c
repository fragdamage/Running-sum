#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n], runningSum[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    runningSum[0] = arr[0];
    for(i = 1; i < n; i++) runningSum[i] = runningSum[i-1] + arr[i];
    for(i = 0; i < n; i++) printf("%d ", runningSum[i]);
    return 0;
}
