@echo off
zig cc -std=c11 -D_CRT_SECURE_NO_WARNINGS src/main.c -o rct.exe -lm
