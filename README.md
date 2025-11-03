<h1 align="center">🐍 Mastering DSA with Python 🚀</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Status-Learning-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Language-Python-blue?style=for-the-badge&logo=python" />
  <img src="https://img.shields.io/badge/Notebook-Jupyter-orange?style=for-the-badge&logo=jupyter" />
  <img src="https://img.shields.io/github/stars/yourusername/DSA-with-Python?style=for-the-badge" />
</p>

---

## 📖 Introduction
Welcome to my **Data Structures & Algorithms with Python** repository!  
Here, you’ll find **Jupyter Notebooks** organized by topics with clean explanations and working Python code.

📌 File naming format:
```
topicNumber_topicName.ipynb
```

✅ Example:
- `09_loops.ipynb`  
- `10_function.ipynb`  
- `11_Oops.ipynb`  

---

## 🛠️ Learning Roadmap

## 🛠️ Learning Roadmap  

| Status | Topic # | Topic Name          | File Name                  |
|--------|---------|---------------------|----------------------------|
|   ✔️ | 01      | Introduction to DSA | `01_Introduction_to_DSA`   |
|     | 02      | Comments in Python  | `02_Comment_in_Python`     |
|   x  | 03      | Python Variables    | `03_Python_Variable`       |
|   x  | 04      | Input / Output      | `04_Input-Output`          |
|   x  | 05      | Data Types          | `05_Python_Data_Types`     |
|   x  | 06      | Type Casting        | `06_type_casting`          |
|   x  | 07      | Operators           | `07_Operators`             |
|   x  | 08      | Conditionals        | `08_Conditionals`          |
|   x  | 09      | Loops               | `09_Loops`                 |
|   x  | 10      | Functions           | `10_Function`              |
|   x  | 11      | OOPs Concepts       | `11_OOPS_Consept`          |
|   x  | 12      | NumPy Arrays        | `12_numpy_array.ipynb`     |
|   x  | 13      | Searching & Sorting | `13_sorting.ipynb`         |
|   x  | 14      | Linked List         | `14_linkedlist.ipynb`      |
|   x  | 15      | Stack & Queue       | `15_stack_queue.ipynb`     |
|   x  | 16      | Trees & Graphs      | `16_trees_graphs.ipynb`    |
|   x  | 17      | Dynamic Programming | `17_dp.ipynb`              |


---

## 💻 Featured Python Snippets  

### 🔹 Factorial (Recursion)
```python
def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)

print("5! =", factorial(5))
```

### 🔹 Queue using Deque
```python
from collections import deque

queue = deque()
queue.append("A")
queue.append("B")
queue.append("C")

print("Initial Queue:", list(queue))
queue.popleft()
print("After Dequeue:", list(queue))
```

### 🔹 Binary Search Tree
```python
class Node:
    def __init__(self, key):
        self.key = key
        self.left = self.right = None

def insert(root, key):
    if not root: return Node(key)
    if key < root.key: root.left = insert(root.left, key)
    else: root.right = insert(root.right, key)
    return root

def inorder(root):
    return inorder(root.left) + [root.key] + inorder(root.right) if root else []

root = None
for val in [50, 30, 70, 20, 40, 60, 80]:
    root = insert(root, val)

print("Inorder Traversal:", inorder(root))
```

---

## 📊 Progress Tracker
- [x] Python Basics  
- [ ] Functions  
- [ ] OOPs  
- [ ] NumPy  
- [ ] Searching & Sorting  
- [ ] Linked List  
- [ ] Stack & Queue  
- [ ] Trees & Graphs  
- [ ] Dynamic Programming  

---

## ⚡ Why This Repo?
✔️ Topic-wise Notebooks 📒  
✔️ Pythonic DSA Implementations 🐍  
✔️ Clean Code + Examples 💡  
✔️ Beginner → Advanced Roadmap 🚀  

---

## 📈 GitHub Stats
<p align="center">
  <img src="https://github-readme-stats.vercel.app/api?username=yourusername&theme=tokyonight&show_icons=true" width="48%" />
  <img src="https://github-readme-streak-stats.herokuapp.com/?user=yourusername&theme=tokyonight" width="48%" />
</p>

---

## 🌐 Connect with Me
<p align="center">
  <a href="https://github.com/subodhkryadav"><img src="https://img.shields.io/badge/GitHub-black?style=for-the-badge&logo=github" /></a>
  <a href="https://www.linkedin.com/in/subodh-kumar-yadav-522828293"><img src="https://img.shields.io/badge/LinkedIn-blue?style=for-the-badge&logo=linkedin" /></a>
  <a href="mailto:subodhkumary933@gmail.com"><img src="https://img.shields.io/badge/Email-red?style=for-the-badge&logo=gmail" /></a>
</p>

---

<h3 align="center">✨ Keep Learning • Keep Building • Keep Growing ✨</h3>
