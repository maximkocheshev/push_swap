The aim of the main part of this project is to write a program in C called push_swap which calculates and displays
on the standard output the smallest program using Push_swap instruction language that
sorts the integer arguments received with by using  a sorting algorithm.

I am using radix sort for a stack size of more than five numbers.

Also I created an additional array which I sorted immediately by using quicksort. This is necessary in order to firstly check whether the stack is sorted, and secondly, I enter in the field of each order its position in the sorted array + 1.

Quicksort is a sorting algorithm based on the divide and conquer approach where

1. An array is divided into subarrays by selecting a pivot element (element selected from the array).

   While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.

2. The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.

3. At this point, elements are already sorted. Finally, elements are combined to form a sorted array.
