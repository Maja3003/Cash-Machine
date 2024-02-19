# Cash-Machine
This repository contains a simple console-based Automated Teller Machine (ATM) simulation implemented in C++. The project includes various classes to manage the core functionality of the ATM, user input, and screen messages.

## Classes

### 1. Base

The `Base` class initializes a two-dimensional dynamic array (`Tab`) with predefined values, representing a basic structure for storing user IDs and PINs.

### 2. Engine

The `Engine` class manages the core functionality of the ATM, including user input, ID and PIN verification, and displaying messages on the screen. It orchestrates the interaction between the user, the `Base` class, and the `Screen` class.

### 3. Reader

The `Reader` class handles user input, specifically reading integers from the console.

### 4. Screen

The `Screen` class manages various screen messages for the ATM, such as welcome messages, prompts for ID and PIN, and verification outcomes.
