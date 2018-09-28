### BinarySearch

1. The array is sorted.
2. O(log(n))

```cpp
int binarySearch(vector<int> data, int key) {
    int low = 0;
    int high = data.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == data[mid]) {
            return mid;
        } else if (key < data[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}
```
