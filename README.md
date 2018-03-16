# AlgorithmNotes

## Big O

Big O is a measure of the efficiency of an algorithm. It measuers the growth rate of the time the algorithm takes to complete with respect to the amount of data it is acting on.

## Data Structure

| Collection       |   Access  |   Search  | Insertion |  Deletion | Space |
| :--------------- | :-------: | :-------: | :-------: | :-------: | :---: |
| Array            |    O(1)   |    O(n)   |    O(n)   |    O(n)   |  O(n) |
| Stack            |    O(n)   |    O(n)   |    O(1)   |    O(1)   |  O(n) |
| Queue            |    O(n)   |    O(n)   |    O(1)   |    O(1)   |  O(n) |
| LinkedList       |    O(n)   |    O(n)   |    O(1)   |    O(1)   |  O(n) |
| HashTable        |    N/A    |    O(1)   |    O(1)   |    O(1)   |  O(n) |
| BinarySearchTree | O(log(n)) | O(log(n)) | O(log(n)) | O(log(n)) |  O(n) |
| B-Tree           | O(log(n)) | O(log(n)) | O(log(n)) | O(log(n)) |  O(n) |
| RedBlackTree     | O(log(n)) | O(log(n)) | O(log(n)) | O(log(n)) |  O(n) |

## Sorting

| Algorithm     |   Time Best  | Time Average |  Time Wrost  |   Space   | Stability |
| :------------ | :----------: | :----------: | :----------: | :-------: | :-------: |
| InsertionSort |     O(n)     |    O(n^2)    |    O(n^2)    |    O(1)   |    Yes    |
| BubbleSort    |     O(n)     |    O(n^2)    |    O(n^2)    |    O(1)   |    Yes    |
| HeapSort      | O(n\*log(n)) | O(n\*log(n)) | O(n\*log(n)) |    O(1)   |     No    |
| QuickSort     | O(n\*log(n)) | O(n\*log(n)) |    O(n^2)    | O(log(n)) |    Yes    |
| MergeSort     | O(n\*log(n)) | O(n\*log(n)) | O(n\*log(n)) |    O(n)   |    Yes    |
| SelectionSort |    O(n^2)    |    O(n^2)    |    O(n^2)    |    O(1)   |     No    |
