# Login-Registration-System
A simple C++ console-based Login and Registration System that allows users to securely register and log in using masked password input. User credentials are stored locally in a text file for persistence.

# Features
User Registration with username and password
User Login authentication
Masked password input (password hidden with *)
Data persistence using file handling
Simple, menu-driven console interface

# Technologies Used
C++
File Handling (fstream)
Console I/O
conio.h for masked password input
Standard Template Library (STL)

# Login-Registration-System/
│
├── main.cpp
├── userdatabase.txt
└── README.md

# How It Works
The program displays a menu:
1.Register
2.Login
3.Exit

During registration:
User enters a username
Password input is masked
Credentials are saved to userdatabase.txt

During login:
Entered credentials are verified against stored data
Successful login grants access; otherwise, an error is shown

# Compilation & Execution
g++ main.cpp -o login_system
login_system
Note: This project uses conio.h, which is Windows-specific.

# Security Notes
Passwords are stored in plain text (for learning purposes only)
Not recommended for real-world or production use
Can be improved using:
Password hashing
Encrypted storage
Database integration

# Why This Project?
This project was built to:
Practice real-world C++ concepts
Understand authentication fundamentals
Gain experience with file-based storage
Write clean, readable, modular code

# Author
Shahriar Islam Tamim
CSE student | C++ | Problem Solving
