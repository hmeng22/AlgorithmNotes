## Binary Search

```cpp
int low = 0;
int high = n;

while(low <= high) {
  int mid = low + (high - low) / 2;
  
  if (key == mid) {
    return mid;
  } else if (key <= mid) {
    high = mid - 1;
  } else {
    low = mid + 1;
  }
  
  return -1;
}
```

## Quick Select

Find Kth largest element in an unsorted array.

```cpp
quickSelect(nums, 0, nums.size() - 1, k);

int quickSelect(vector<int> &nums, int low, int high, int k) {
  int high_right_pos = partition(nums, low, high);
  
  if (high_right_pos - low == k - 1) {
    return nums[high_right_pos];
  }
  
  if (high_right_pos - low > k - 1) {
    return quickSelect(nums, low, high_right_pos - 1, k);
  }
  
  return quickSelect(nums, high_right_pos + 1, high, k - high_right_pos + low - 1);
}

int partition(vector<int> &nums, int low, int high) {
  int high_num = nums[high];
  int higher_pivot_index = low;
  for(int i = low; i < high; i++) {
    if (nums[i] > high_num) {
      swap(nums[higher_pivot_index], nums[i]);
      high_pivot_index++;
    }
  }
  swap(nums[higher_pivot_index], nums[high]);
  
  return higher_pivot_index;
}
```

## Merge Sort

```cpp
void mergeSort(vector<int> &nums, int left, int right) {
  if (left < right) {
    int mid = left + (righ - left) / 2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    
    merge(nums, left, mid, right);
  }
}

void merge(vector<int> &nums, int left, int mid, int right) {
  int nums_left_length = mid - left + 1;
  int nums_right_length = right - mid;
  
  vector<int> nums_left();
  vector<int> nums_right();
  
  for (int i = 0; i < nums_left_length; i++) {
    nums_left[i] = nums[left + i];
  }
  
  for (int i = 0; i < nums_right_length; i++) {
    nums_right[i] = nums[mid + 1 + i];
  }
  
  int i = 0;
  int j = 0;
  int k = left;
  while(i < nums_left_length && j < nums_right_length) {
    nums[k++] = nums_left[i] <= nums_right[j] ? nums_left[i++] : nums_right[j++];
  }
  
  while(i < nums_left_length) {
    nums[k++] = nums_left[i++];
  }
  
  while(j < nums_left_length) {
    nums[k++] = nums_right[j++];
  }
}
```

## Union Find

Track a set of elements partitioned into a number of disjoint subsets.

```cpp
class UnionFind {
  vector<int> parent;
  int sz = 0;
  
public:
  UnionFind(int n) {
    sz = n;
    parent.resize(n);
    for(int i = 0; i < n;i++) {
      parent[i] = i;
    }
  }
  
  int find(int i) {
    if (parent[i] != i) {
      parent[i] = find(parent[i]);
    }
    return parent[i];
  }
  
  void uinionij(int i, int j) {
    int ui = find(i);
    int uj = find(j);
    
    if (ui != uj) {
      parent[ui] = uj;
      sz--;
    }
  }
  
  int size() {
    reutrn sz;
  }
};
```
