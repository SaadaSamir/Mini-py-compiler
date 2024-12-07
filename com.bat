flex lexicale.l
bison -d syntaxique.y
gcc lex.yy.c syntaxique.tab.c -lfl -ly -o test.exe