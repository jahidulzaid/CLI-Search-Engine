# CLI Based Search Engine 🔍

A simple yet efficient **Command Line Interface (CLI)** based search engine implemented in **C++**, using **Trie** and **Hashing** data structures. The project supports **exact**, **prefix**, and **substring** (via KMP algorithm) searches across various text datasets.

---

## 🚀 Features

- 🔤 **Exact Match Search**
- 🔍 **Prefix-Based Search**
- 🔎 **Substring Search** using **Knuth-Morris-Pratt (KMP)** algorithm
- ⚡ Fast and memory-efficient
- 🧠 Data structures: Trie and Hash Table
- 🖥️ CLI-based user interface
- 🧩 Modular codebase (organized into separate `.cpp` files)
- 📁 Supports search across multiple text databases (faculty, students, movies, etc.)

---

## 📁 Project Structure

CLI-Search-Engine/
│
├── main.cpp # Entry point and menu
├── prefix_exact_pattern_Search.cpp # Trie-based and KMP search logic
├── utility_functions.cpp # Input/output and helper functions
├── data/ # Sample data files (e.g., faculty.txt, movies.txt)
└── README.md # Project documentation


---

## ⚙️ How It Works

- **Prefix & Exact Search**: Implemented using a Trie data structure to achieve O(L) time complexity where L is the length of the search key.
- **Substring Search**: Efficient pattern matching using the KMP algorithm with preprocessing of the pattern.
- **Hash Table**: For quick lookup and categorization (e.g., movies, students).
- **Menu Driven**: User selects the dataset and search type through a simple CLI interface.

---

## 🔧 How to Run

1. **Clone the Repository**
```bash
git clone https://github.com/your-username/cli-search-engine.git
cd cli-search-engine

2. **Compile the Code**
```bash
g++ main.cpp prefix_exact_pattern_Search.cpp utility_functions.cpp -o search_engine

3. **Run the Program**
```bash
./search_engine



📌 Future Improvements
Add support for persistent storage (database/file I/O)

Implement fuzzy search and ranking

Add GUI using C++ frameworks (Qt, ImGui)

Integrate web-based search interface

🧑‍💻 Author
Jahidul Islam
Fourth Year CSE Student | Green University of Bangladesh
Major: Machine Learning | Passionate about Algorithms and Systems Development


📝 License
This project is licensed under the MIT License.
Feel free to use, modify, and distribute!