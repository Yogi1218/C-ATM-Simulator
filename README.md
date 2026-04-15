# C ATM Simulator

A simple ATM simulation program written in C. Demonstrates basic banking operations with PIN authentication in a terminal interface.

---

## Features

- PIN-based login with 3 attempts before lockout
- Check balance
- Deposit money
- Withdraw money (with balance validation)
- Clean menu-driven interface

---

## How to Compile and Run

**Requirements:** GCC (any version supporting C99 or later)

```bash
gcc main.c -o atm
./atm
```

---

## Usage

```
Enter PIN: ****
Access Granted!

--- ATM Menu ---
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
```

- Default PIN: `1234`
- Starting balance: `1000`
- After 3 wrong PIN attempts, the program exits (card blocked)

---

## Project Structure

```
C-ATM-Simulator/
└── main.c      # All source code in a single file
```

---

## Limitations

This is a learning project. It is not designed to simulate real banking:

- PIN and balance are hardcoded — data resets every run
- No file storage or persistent accounts
- Single account only
- No transaction history

---

## Language

C (standard C99) — no external libraries required
