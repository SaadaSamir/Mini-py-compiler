# Mini-py-compiler

A mini-compiler project for the MiniPy language using FLEX and BISON tools.

## Overview

This project implements a mini-compiler in C that performs:
- Lexical analysis using FLEX
- Syntactic and semantic analysis using BISON
- Intermediate code generation
- Symbol table management
- Error handling

## Language Description

MiniPy is a simplified Python-like language with the following characteristics:

### Basic Rules
- Each instruction must be on a single line (no semicolon needed)
- Blocks are identified by indentation (4 spaces)
- Comments start with '#'

### Data Types
- `int`: Signed integers (-32768 to 32767)
- `float`: Decimal numbers
- `char`: Single characters
- `bool`: Boolean values (true/false)

### Variable Declaration
Two forms are supported:
1. `TYPE variable_list` (e.g., `int x` or `int y, z`)
2. `variable_name = value` (type inferred from value)

### Arrays
Declared as: `type name[size]` (e.g., `bool Tab[10]`)

### Operators
- Arithmetic: `+`, `-`, `*`, `/`
- Logical: `and`, `or`, `not`
- Comparison: `>`, `<`, `>=`, `<=`, `==`, `!=`

### Control Structures

#### If-Else
```python
if condition:
    statements
elif condition:
    statements
else:
    statements


#### While Loop
while condition:
statements


#### For Loop
for i in range(start, end, step):
statements


### Functions
Functions are declared using the `def` keyword:
def function_name(parameters):
statements
return value # optional



### Input/Output
- Input: `input(prompt_message)`
- Output: `print(expression)`

## Project Structure
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
