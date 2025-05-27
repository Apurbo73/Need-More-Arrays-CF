### Need More Arrays CF:


This C++ code processes multiple test cases, each involving a sequence of integers, and determines how many **"arrays"** (segments or groups) can be formed based on a specific rule.

Let’s break it down clearly:

---

### ✅ **Code Structure Breakdown:**

```cpp
int t;
cin >> t;
```

* Reads the number of test cases.

---

### 🔁 **Loop over test cases**:

```cpp
while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
```

* For each test case, reads an integer `n` (the number of elements), and then reads the array `a`.

---

### 🧠 **Core Logic – Grouping Rule**:

```cpp
int last = -1e9;
int arrays = 0;
```

* `last` keeps track of the last added value (initialized to a very small number).
* `arrays` counts how many separate "arrays" or groups are formed.

Then:

```cpp
for (int i = 0; i < n; ++i) {
    if (a[i] > last + 1) {
        arrays++;
        last = a[i];
    } else {
        // do nothing, skip a[i]
    }
}
```

### 💡 **Explanation of the Logic**:

* You start a **new array** every time `a[i] > last + 1`.
* This ensures the current element is **not close** to the previous one in the same group.
* Otherwise, the element is **ignored/skipped**.

So essentially, it forms as many **non-overlapping segments** as possible such that each element in a segment is strictly more than the previous element **+1**.

---

### 🧾 **Example**:

Input:

```
1
5
1 2 5 6 10
```

Process:

* Start with `last = -1e9`.
* `1 > last + 1` → `arrays = 1`, `last = 1`
* `2 ≤ 1 + 1` → skip
* `5 > 1 + 1` → `arrays = 2`, `last = 5`
* `6 ≤ 5 + 1` → skip
* `10 > 5 + 1` → `arrays = 3`, `last = 10`

**Output**: `3`

---


