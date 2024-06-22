; mutqagrenq arjeq mer tvacs arjeqi demi bitery poxi


section .data
	msg db "hello, word", 10, 0
section .bss

section .text
	global main
main: 
	mov rax, 0  ; 0=read    hnaravorutyunna talis grelu
;	mov rdi, 1  ; 0=stdinput
	mov rsi, msg   ;
	mov rdx, 5
	syscall

	mov rax, 1
	mov rdi, 1
	mov rsi, 0
	mov rsi, msg
	mov rdx, 12
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

