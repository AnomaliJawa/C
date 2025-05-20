# 🧠 C Programming Weekly Assignments

This repository contains a collection of weekly assignments and exercises written in the C programming language. Each folder corresponds to a specific week's tasks.

---

## 📁 Folder Structure

C/
├── W2/   # Week 2 assignments
├── W3/   # Week 3 assignments
├── W4/   # Week 4 assignments
├── W5/   # Week 5 assignments
└── W6/   # Week 6 assignments

Each directory contains:
- `.c` source code files
- (Optional) `Makefile` for building projects
- Input/output examples if required

---

## ⚙️ How to Run the Code

You need to have a C compiler such as `gcc` installed on your system.

### 🔹 Option 1: Using Makefile (if available)
```bash
cd W2  # or W3, W4, etc.
make
./output_name

### 🔹 Option 2: Manual Compilation

```bash
cd W3
gcc -o program program.c
./program


### Penjelasan:

- Gunakan tiga backticks (` ``` `) sebelum dan sesudah blok kode.
- Tambahkan penanda bahasa (`bash`) agar GitHub bisa melakukan syntax highlighting otomatis.
- Hindari menulis kata "Copy" atau "Edit" jika tidak menggunakan fitur HTML atau komponen UI khusus.

Jika kamu punya beberapa file `.c` dalam satu folder dan ingin kompilasi semuanya, kamu juga bisa pakai:
```bash
gcc -o program *.c
