# Write a program to find the largest and smallest elements in a list.
nums = list(map(int, input("Enter numbers separated by spaces: ").split()))

largest = nums[0]
smallest = nums[0]
for n in nums:
    if n > largest:
        largest = n
    if n < smallest:
        smallest = n

print("Largest =", largest)
print("Smallest =", smallest)
