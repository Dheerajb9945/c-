#include <stdio.h>
int main() {
    int a[100], n, i, key, low, high, mid, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            flag = 1;
            break;
        } else if(a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(flag == 1)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found\n");

    return 0;
}
