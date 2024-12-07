# Mini-py-compiler

A mini-compiler project for the MiniPy language using FLEX and BISON tools.

## Overview

This project implements a mini-compiler in C that performs:
- Lexical analysis using FLEX
- Syntactic and semantic analysis using BISON
- Intermediate code generation
- Symbol table management
- Error handling

### Input/Output
- Input: `input(prompt_message)`
- Output: `print(expression)`

## Project Structure
```python
Mini-py-compiler/
├── src/
│ ├── lexer.l # FLEX lexical analyzer
│ ├── parser.y # BISON grammar rules
│ ├── symtable.c # Symbol table implementation
│ └── codegen.c # Intermediate code generator
├── include/
│ ├── symtable.h # Symbol table header
│ └── codegen.h # Code generator header
└── examples/ # Sample MiniPy programs
