# Push_swap
## Mandatory part
The aim of the mandatory part is to write a program in C called push_swap which calculates and displays on the standard output the smallest program using Push_swap instruction language that sorts the integer arguments received with by using  a sorting algorithm.
## Sorting Algorithms
### Radix sort
I am using radix sort for a stack size of more than five numbers.
### Quicksort
I created an additional array which I sorted immediately by using quicksort. This is necessary in order to firstly check whether the stack is sorted, and secondly, I enter in the field of each order its position in the sorted array + 1.

Quicksort is a sorting algorithm based on the divide and conquer approach where
1. An array is divided into subarrays by selecting a pivot element (element selected from the array).

   While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
2. The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
3. At this point, elements are already sorted. Finally, elements are combined to form a sorted array.
## Usage
```
./push_swap 2 1 3 6 5 8
```
## Output
```
sa
pb
pb
pb
sa
pa
pa
pa
```
## Usage
```
./push_swap 0 one 2 3
```
## Output
```
Error
```
## Usage
```
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```
## Output
```
6
```
>Random values.
## Bonus part
The aims of the bonus part:
- To write a program named checker, which will get as an argument the stack a formatted as a list of integers.
- Checker will then wait and read instructions on the standard input, each instruction will be followed by ’\n’.
- If after executing those instructions, stack a is actually sorted and b is empty, then checker must display "OK". In every other case, checker must display "KO".
## Usage
```
./checker 3 2 1 0
rra
pb
sa
rra
pa
```
>To press CTRL+D to stop reading during the instruction phase.
## Output
```
OK
```
## Usage
```
./checker 3 2 1 0
sa
rra
pb
```
## Output
```
KO
```
## Usage
```
./checker 3 2 one 0
```
## Output
```
Error
```
## Usage
```
./checker "" 1
```
## Output
```
Error
```
## Usage
```
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```
## Output
```
OK
```
