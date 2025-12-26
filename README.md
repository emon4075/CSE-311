# CSE-311: Data Structures & Algorithms

A comprehensive course repository covering fundamental and advanced data structures and algorithms in C++.

## 📚 Course Overview

This repository contains lecture notes, implementations, and practice problems for CSE-311, focusing on:
- Core data structures (arrays, stacks, queues, trees, graphs)
- Sorting and searching algorithms
- Recursion and backtracking
- Graph theory and graph algorithms
- Tree structures and traversals
- Hashing and hash tables
- Advanced data structures (AVL trees, heaps, BSTs)

## 📁 Repository Structure

### Lectures (Lecture 01 - Lecture 15)

#### **Lecture 01**
- Introduction to Data Structures

#### **Lecture 02: String Matching & Pattern Matching**
- `KMP_Pattern_Matching.cpp` - Knuth-Morris-Pratt algorithm implementation
- `Pattern_Matching_Slow_Method.cpp` - Naive string matching approach
- `RAW_String.cpp / RAW_String.h` - Custom string class implementation

#### **Lecture 03: Linear Search & Sorting Basics**
- `Linear_Search.cpp` - Sequential search implementation
- `Binary_Search.cpp` - Divide-and-conquer search on sorted arrays
- `Bubble_Sort.cpp` - Elementary sorting algorithm
- `Insert_To_Linear_Array.cpp` - Array insertion operations
- `Deleting_From_Linear_Array.cpp` - Array deletion operations

#### **Lecture 04**
- Advanced array operations and manipulations

#### **Lecture 05: Sorting Algorithms**
- `BucketSort.cpp` - Bucket sort implementation
- `CountingSort.cpp` - Counting sort (non-comparison based)
- `InsertionSort.cpp` - Insertion sort algorithm
- `MergeSort.cpp` - Merge sort implementation
- `RadixSort.cpp` - Radix sort for integers
- `SelectionSort.cpp` - Selection sort algorithm
- **Problems/** - Additional practice problems for sorting

#### **Lecture 06: Recursion & Problem Solving**
- `Tower_Of_Hanoi.cpp` - Classic Tower of Hanoi solution
- `Josephus.cpp` - Josephus problem implementation
- `Josephus_Bitwise.cpp` - Bitwise optimization of Josephus problem
- `Lines_In_The_Plane.cpp` - Recursive line computation
- **Recursion Problems/** - Practice problems including:
  - `A_Print_Recursion.cpp` - Printing recursion problems
  - `F_Print_Even_Indices.cpp` - Even index printing
  - `R_Palindrome_Array.cpp` - Palindrome checking
  - `Weird_Algorithm.cpp` - Algorithm exploration
  - Additional recursion challenges

#### **Lecture 07: Stack Data Structure**
- `Stack_Implementation_Integer.cpp` - Integer stack implementation
- `Stack_Implementation_Char.cpp` - Character stack implementation
- `Stack_Implementation_String.cpp` - String stack implementation
- `Stack_Generic.cpp` - Generic/template-based stack
- `Monotonic_Stack.cpp` - Monotonic stack for optimization problems
- **Problems/** - Stack-based problems:
  - `BackSpace_Leetcode.cpp` - Backspace string comparison
  - `Reverser_Using_String.cpp` - String reversal using stack

#### **Lecture 08: Queue Data Structure**
- `Queue_Implementation.cpp` - Basic queue implementation
- `Queue_Generic.cpp` - Generic queue using templates
- **Problems/** - Queue applications:
  - `Easy_Queue.cpp` - Queue fundamentals
  - `Mountain_Peak.cpp` - Peak-finding problem
  - `Reverse_Queue.cpp` - Queue reversal techniques
  - `Reverse_Queue_ALT.cpp` - Alternative reversal approaches

#### **Lecture 09: Graph Representations & Traversal**
- `01_Adjacency_Matrix.cpp` - Graph using 2D matrix
- `02_Adjacency_List.cpp` - Graph using adjacency lists
- `03_Pair.cpp / 03_Pair_STL.cpp` - Pair implementations
- `04_Edge_List.cpp` - Edge list representation
- `05_BFS.cpp` - Breadth-First Search
- `06_BFS_Level_Tracking.cpp` - BFS with level information
- `07_Shortest_Path.cpp` - Shortest path finding
- `08_DFS.cpp` - Depth-First Search
- `09_Naive_Dijkstra.cpp` - Basic Dijkstra implementation
- `10_Optimized_Dijkstra.cpp` - Optimized Dijkstra algorithm

#### **Lecture 10: Advanced Graph Algorithms**
- `BFS_Kahn's_Topological_Sort.cpp` - Kahn's topological sorting
- `DFS_Topological_Sort.cpp` - DFS-based topological sorting
- `BFS_Undirected_Cycle_Detection.cpp` - Cycle detection in undirected graphs
- `DFS_Undirected_Cycle_Detection.cpp` - DFS cycle detection
- `DFS_Directed-Cycle_Detection.cpp` - Directed graph cycle detection
- `Bipartite.cpp` - Bipartite graph checking
- `Chromatic_Number.cpp` - Graph coloring and chromatic number
- `Planarity_Check.cpp` - Planarity testing algorithms

#### **Lecture 11: Trees & Spanning Trees**
- `01_Intro_Tree.cpp` - Tree fundamentals
- `02_Pre_Order.cpp` - Pre-order traversal
- `03_Post_Order.cpp` - Post-order traversal
- `04_In_Order.cpp` - In-order traversal
- `05_Level_Order.cpp` - Level-order (BFS) traversal
- `Prims_Algorithm.cpp` - Prim's MST algorithm
- `Kruskarls_Algorithm.cpp` - Kruskal's MST algorithm

#### **Lecture 12: Heap Data Structure**
- `01_Complete_Binary_Tree.cpp` - Complete binary tree implementation
- `02_Complete_Binary_Check.cpp` - Validation of complete binary trees
- `03_Max_Heap_Implementation.cpp` - Max heap implementation
- `04_Min_Heap_Implementation.cpp` - Min heap implementation

#### **Lecture 13: Binary Search Trees**
- `01_Binary_Search_Tree_Implementation.cpp` - BST creation and operations
- `02_Search_In_BST.cpp` - Searching in BST
- `03_Validate_BST.cpp` - BST validation
- `04_Delete_in_BST.cpp` - Node deletion in BST
- `05_Huffman_Code.cpp` - Huffman coding tree implementation

#### **Lecture 14: Hash Tables & Collision Handling**
- `01_Simple_Hash_Table.cpp` - Basic hash table implementation
- `02_Linear_Probing.cpp` - Linear probing collision resolution
- `03_Quadratic_Probing.cpp` - Quadratic probing method
- `04_Double_Hashing.cpp` - Double hashing approach

#### **Lecture 15: AVL Trees**
- `AVL_Insertion.cpp` - AVL tree insertion with balancing
- `AVL_Deletion.cpp` - AVL tree deletion with rebalancing
- `AVL_Check.cpp` - AVL tree validation

### Exams

#### **Continuous Tests (CT)**
- **CT1/** - First continuous test
  - `README.md` - Test details and instructions
  - `Syllabus.txt` - Topics covered
  
- **CT2/** - Second continuous test
  - `Syllabus.txt` - Topics and weightage

#### **Lab Exams**

- **Lab 01 - String and Sorting Algorithms**
  - `ArrayIntersection.cpp` - Finding array intersection
  - `QuickSort.cpp` - Quick sort implementation

- **Lab 02 - Recursion-Stack-Queue**
  - `N1.cpp`, `N2.cpp`, `N3.cpp` - Problem sets on recursion, stacks, and queues

- **LAB1** - First lab practical exam
  - `Syllabus.txt` - Evaluation criteria

## 🛠️ Compilation & Execution

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- C++11 or later standard

### Compiling Individual Files
```bash
g++ -o output_name filename.cpp
./output_name
```

### Using Windows
```cmd
g++ -o output_name.exe filename.cpp
output_name.exe
```

### Compiling with Optimization
```bash
g++ -O2 -o output_name filename.cpp
```

## 📊 Topics Covered

| Topic | Lectures | Complexity |
|-------|----------|-----------|
| String Matching | 02 | O(n+m) |
| Linear/Binary Search | 03 | O(log n) |
| Elementary Sorting | 03, 05 | O(n²) |
| Advanced Sorting | 05 | O(n log n) |
| Recursion | 06 | Variable |
| Stack | 07 | O(1) operations |
| Queue | 08 | O(1) operations |
| Graph Representation | 09 | O(V+E) |
| Graph Traversal (BFS/DFS) | 09, 10 | O(V+E) |
| Shortest Paths | 09 | O((V+E)log V) |
| Tree Traversals | 11 | O(n) |
| Spanning Trees | 11 | O(E log E) |
| Heaps | 12 | O(log n) |
| Binary Search Trees | 13 | O(log n) avg |
| Hashing | 14 | O(1) avg |
| AVL Trees | 15 | O(log n) |

## 🎯 Learning Path

### Beginner
1. Start with Lecture 01-03 (basics and linear search)
2. Move to Lecture 05 (sorting algorithms)
3. Practice with Lab 01

### Intermediate
1. Lecture 06 (recursion fundamentals)
2. Lecture 07-08 (stacks and queues)
3. Lecture 09 (graph basics)
4. Lab 02

### Advanced
1. Lecture 10 (advanced graph algorithms)
2. Lecture 11-15 (trees, heaps, BSTs, hashing, AVL)
3. CT1 and CT2 preparation

## 💡 Key Algorithms & Implementations

- **Sorting**: Bubble, Insertion, Selection, Merge, Quick, Bucket, Counting, Radix
- **Searching**: Linear, Binary, KMP pattern matching
- **Graph**: BFS, DFS, Dijkstra, Kruskal, Prim, Topological Sort
- **Tree Operations**: Traversals (Pre/In/Post/Level-order), Insertion, Deletion, Balancing
- **Data Structures**: Arrays, Stacks, Queues, Linked Lists (implicit), Trees, Graphs, Hash Tables, Heaps

## 📝 Notes

- All implementations are in C++ for consistency with course requirements
- Code includes both naive and optimized versions where applicable
- Comments are included for complex algorithms
- Practice problems are organized by difficulty and topic
- Focus on understanding algorithms before memorizing implementations

## 🔗 Useful Resources

- [CPP Reference](https://en.cppreference.com/)
- [GeeksforGeeks DSA](https://www.geeksforgeeks.org/data-structures/)
- [LeetCode](https://leetcode.com/) - Practice platform
- Course materials provided in each lecture folder

## 📅 Assessment

- **Continuous Tests (CT1, CT2)** - Periodic evaluations
- **Lab Exams** - Practical implementation tests
- **Practice Problems** - Located in Problems/ directories within lecture folders

## ⚠️ Important Notes

- Review the `Syllabus.txt` files in exam folders for specific topics and weightage
- Ensure you understand the underlying concepts, not just the code
- Practice coding without reference materials during exam preparation
- Time complexity analysis is crucial for algorithm selection

---

**Last Updated**: December 2025  
**By**: Md. Abdullah Al Mamun Emon <br>
**Course**: CSE-311  
**Institution**: [University of Chittagong]
