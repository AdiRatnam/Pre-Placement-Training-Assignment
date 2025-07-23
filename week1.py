 # 1. Insert an element at end of array
def insert_end(arr, x):
    arr.append(x)
    return arr

arr = list(map(int, input().split()))
x = int(input())
print(insert_end(arr, x))


 # 2. Find largest element in array
def largest(arr):
    max_val = arr[0]
    for i in arr:
        if i > max_val:
            max_val = i
    return max_val

arr = list(map(int, input().split()))
print(largest(arr))


# 3. Find second largest element
def second_largest(arr):
    first = second = -1
    for i in arr:
        if i > first:
            second = first
            first = i
        elif i > second and i != first:
            second = i
    return second

arr = list(map(int, input().split()))
print(second_largest(arr))


# 4. Move all zeros to end
def move_zeros(arr):
    res = []
    count = 0
    for i in arr:
        if i != 0:
            res.append(i)
        else:
            count += 1
    res += [0] * count
    return res

arr = list(map(int, input().split()))
print(move_zeros(arr))


# 5. Rotate array by one
def rotate_by_one(arr):
    return [arr[-1]] + arr[:-1]

arr = list(map(int, input().split()))
print(rotate_by_one(arr))


# 6. Check if array is sorted
def is_sorted(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i-1]:
            return False
    return True

arr = list(map(int, input().split()))
print(is_sorted(arr))


# 7. Reverse a string
def reverse_string(s):
    return s[::-1]

s = input()
print(reverse_string(s))


#8. Check if string is palindrome
def is_palindrome(s):
    return s == s[::-1]

s = input()
print(is_palindrome(s))


# 9. Count frequency of array elements (1 to n)
def count_frequency(arr, n):
    res = [0] * n
    for i in arr:
        if 1 <= i <= n:
            res[i - 1] += 1
    return res

arr = list(map(int, input().split()))
n = len(arr)
print(count_frequency(arr, n))

# Reverse an array
def reverseArray(arr):
    return arr[::-1]

n = int(input())
arr = list(map(int, input().split()))
result = reverseArray(arr)
print(result)
