global  main
    message db "Hello, Holberton", 0
    format db "%s", 0

Global main
    extern printf

global _start
_start:
    sub rsp, 8

    mov rdi, format
    mov rsi, message
    xor eax, eax
    call printf

    add rsp, 8

    mov eax, 60
    xor edi, edi
