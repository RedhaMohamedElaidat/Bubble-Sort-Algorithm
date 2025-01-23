# **Bubble Sort Algorithms**

This repository showcases the implementation of the **Bubble Sort** algorithm in C, including both the standard and optimized versions. Bubble Sort is a fundamental sorting technique often used to introduce sorting concepts in programming.

---

## **Features**

### 1. **Standard Bubble Sort**
- Iterates through the array multiple times, swapping adjacent elements if they are in the wrong order.
- Simple and easy to understand but not the most efficient for larger datasets.

### 2. **Optimized Bubble Sort**
- Introduces a "swapped" flag to detect if any swaps occurred during a pass.
- If no swaps are made during a pass, the algorithm terminates early, saving unnecessary iterations.
- More efficient for nearly sorted or small datasets.

---

## **Getting Started**

### **Prerequisites**
- A C compiler (e.g., GCC) installed on your system.

### **Clone the Repository**
```bash
git clone https://github.com/YourUsername/bubble-sort-algorithms.git
cd bubble-sort-algorithms
```
### **Compile and Run**
Standard Bubble Sort:
```bash
gcc bubble_sort.c -o bubble_sort
./bubble_sort 
```

## **Complexity Analysis**

| **Algorithm**         | **Best Case**         | **Worst Case**         | **Average Case**       |
|------------------------|-----------------------|-------------------------|-------------------------|
| Standard Bubble Sort   | O(n²) (Full Iteration) | O(n²) (Full Iteration) | O(n²)                  |
| Optimized Bubble Sort  | O(n) (Early Termination) | O(n²) (Full Iteration) | O(n²)                  |
