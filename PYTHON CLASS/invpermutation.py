# Naive Python3 Program to
# find inverse permutation.

# Function to find inverse permutations
def inversePermutation(arr, size):

	# Loop to select Elements one by one
	for i in range(0, size):

		# Loop to print position of element
		# where we find an element
		for j in range(0, size):

		# checking the element in increasing order
			if (arr[j] == i + 1):

				# print position of element where
				# element is in inverse permutation
				print(j + 1, end = " ")
				break

# Driver Code
arr = [2, 3, 4, 5, 1]
size = len(arr)

inversePermutation(arr, size)

