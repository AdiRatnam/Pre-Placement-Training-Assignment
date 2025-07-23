// 1. Insert an element at end of array
#include <stdio.h>

void insertEnd(int arr[], int n, int x) {
    arr[n] = x;
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, x, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    insertEnd(arr, n, x);
    return 0;
}


//2. Find largest element in array
#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", largest(arr, n));
    return 0;
}


//3. Find second largest element
#include <stdio.h>

int secondLargest(int arr[], int n) {
    int first = -1, second = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", secondLargest(arr, n));
    return 0;
}


//4. Move all zeros to end
#include <stdio.h>

void moveZeros(int arr[], int n) {
    int res[100], j = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) res[j++] = arr[i];
        else count++;
    }
    for (int i = 0; i < count; i++) res[j++] = 0;
    for (int i = 0; i < n; i++) printf("%d ", res[i]);
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    moveZeros(arr, n);
    return 0;
}


//5. Rotate array by one
#include <stdio.h>

void rotateByOne(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    rotateByOne(arr, n);
    return 0;
}


//6. Check if array is sorted
#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return 0;
    }
    return 1;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%s", isSorted(arr, n) ? "True" : "False");
    return 0;
}


//7. Reverse a string
#include <stdio.h>
#include <string.h>

void reverseString(char s[]) {
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) printf("%c", s[i]);
}

int main() {
    char s[100];
    scanf("%s", s);
    reverseString(s);
    return 0;
}


//8. Check if string is palindrome
#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) return 0;
    }
    return 1;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("%s", isPalindrome(s) ? "True" : "False");
    return 0;
}


//9. Count frequency of array elements (1 to n)
#include <stdio.h>

void countFrequency(int arr[], int n) {
    int res[100] = {0};
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) res[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++) printf("%d ", res[i]);
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    countFrequency(arr, n);
    return 0;
}

// reverse an array
#include <stdio.h>

void reverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    return 0;
}

