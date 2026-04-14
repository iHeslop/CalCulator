# C Calculator

A simple command-line calculator written in C.  
This program performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

---

## Getting Started

### Prerequisites

You need a C compiler installed on your system:

- GCC (recommended)

Check if GCC is installed:

```bash
gcc --version
```

---

## Compilation

Navigate to the project directory and compile the program:

```bash
gcc helloworld.c -o calculator
```

> Replace `helloworld.c` with your actual file name if different.

---

## Running the Program

### Git Bash / Linux / macOS

```bash
./calculator
```

### Windows (Command Prompt / PowerShell)

```bash
calculator.exe
```

---

## How It Works

- Prompts the user to choose an operation (`+`, `-`, `*`, `/`)
- Takes two numeric inputs
- Performs the calculation
- Outputs the result to the console

---

## Project Structure

```
.
├── helloworld.c
└── README.md
```

---

## Example Usage

```
Enter operation (+, -, *, /): +
Enter two numbers: 5 3
Result: 8
```

---

## Future Improvements

- Add more operations (e.g. modulus, exponentiation)
- Improve input validation and error handling
- Support continuous calculations (loop)
- Build a graphical interface

---

## License

This project is open-source and free to use.
