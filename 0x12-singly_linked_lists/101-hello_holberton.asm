section .data
    msg db "Hello, Holberton", 10  ; the string to be written
    len equ $ - msg + 1           ; calculate the length of the string

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]      ; load address of message into rdi
    xor eax, eax        ; zero out eax (first parameter for printf)
    call printf         ; call printf function

    mov eax, 0          ; set return value to 0
    leave               ; restore the stack pointer and base pointer
    ret                 ; return from function
