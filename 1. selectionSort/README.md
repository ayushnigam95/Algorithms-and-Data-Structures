# Selection Sort
## Things to remember for Selection Sort
####First of all, one should ask why use a quadratic sorting algorithm when asymptotically faster alternatives exists, like mergesort or quicksort. For small arrays (less than 20-30 elements), both insertion sort and selection sort are typically faster than the O(n*logn)  alternatives. In fact, many sorting algorithms based on the divide and conquer paradigm switch to insertion sort or selection sort  when the array is small enough.

Between insertion sort and selection sort, when to use which?

Usually, insertion sort will perform less comparisons than selection sort, depending on the degree of "sortedness" of the array.  While selection sort must scan the remaining parts of the array when placing an element, insertion sort only scans as many elements as  necessary. That means that when the array is already sorted or almost sorted, insertion sort performs in O(n) time.

One advantage of selection sort over insertion sort, is that the number of writes (swaps) is in O(n), while in insertion sort it is  in O(n^2). This may be important if you are sorting on Flash memory, for example, because writes reduce the lifespan of Flash memory.
