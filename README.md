
# CLI Based Search Engine 🔍

A simple yet efficient **Command Line Interface (CLI)** based search engine implemented in **C++**, using **Trie** and **Hashing** data structures. The project supports **exact**, **prefix**, and **substring** (via KMP algorithm) searches across various text datasets.

---

## 🚀 Features

- 🔤 **Exact Match Search**: Find exact text matches across datasets.  
- 🔍 **Prefix-Based Search**: Search for words or patterns starting with a given prefix.  
- 🔎 **Substring Search**: Uses the **Knuth-Morris-Pratt (KMP)** algorithm for efficient substring pattern matching.  
- ⚡ **Fast & Memory Efficient**: Optimized with **Trie** and **Hash Table** for quick lookups.  
- 🧠 **Data Structures**: Utilizes **Trie** for prefix/exact searches and **Hash Table** for categorization.  
- 🖥️ **CLI Interface**: Simple and intuitive command-line interface for seamless user interaction.  
- 🧩 **Modular Codebase**: Organized into separate `.cpp` files for easier management and extension.  
- 📁 **Supports Multiple Datasets**: Test across datasets such as **faculty**, **students**, **movies**, and more.  

---

## 📁 Project Structure

```
CLI-Search-Engine/
│
├── main.cpp                      # Entry point and CLI menu  
├── prefix_exact_pattern_Search.cpp  # Trie-based and KMP search logic  
├── utility_functions.cpp         # Input/output and helper functions  
├── data/                         # Sample data files (e.g., faculty.txt, movies.txt)  
└── README.md                     # Project documentation  
```

---

## ⚙️ How It Works

- **Prefix & Exact Search**: Utilizes a **Trie** data structure to achieve **O(L)** time complexity, where *L* is the length of the search key.
- **Substring Search**: Implemented using the **KMP algorithm** for fast and accurate pattern matching.
- **Hash Table**: Used for quick categorization and fast access to different datasets.
- **Menu-Driven CLI**: Allows users to choose a dataset and select a search method through an intuitive interface.

---

## 🔧 How to Run

1. **Clone the Repository**

```bash
git clone https://github.com/your-username/cli-search-engine.git
cd cli-search-engine
```

2. **Compile the Code**

```bash
g++ main.cpp prefix_exact_pattern_Search.cpp utility_functions.cpp -o search_engine
```

3. **Run the Program**

```bash
./search_engine
```

---

## 📌 Future Improvements

- Add support for persistent storage (database/file I/O)  
- Implement fuzzy search and ranking  
- Add GUI using C++ frameworks (Qt, ImGui)  
- Integrate a web-based search interface  

---

## 🧑‍💻 Author

**Jahidul Islam**  
Fourth Year CSE Student | Green University of Bangladesh  
**Major**: Machine Learning  
**Interests**: Algorithms, Systems Development  

---

## 📝 License

This project is licensed under the **MIT License**.  
Feel free to use, modify, and distribute!
