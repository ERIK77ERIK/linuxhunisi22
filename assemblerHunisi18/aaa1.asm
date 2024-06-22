section .data
	 msg db "Hello, word", 10, 0
section .bss
section .text
	global main
main:
    	;mov ebp, esp for correct debugging
	mov rax, 1
	mov rdi, 2
	mov rsi, msg
	mov rdx, 5
	syscall
	mov rax, 60
	mov rdi, 0
	syscall


; write=1, read=0, exit=60  10 = \n

; nasm -f elf64 aaa.asm -o hello.o
; nasm -f macho64 aaa.asm -o hello.o
; nasm aneluc heto ... .o fayly petq e gcc-i anel gcc aaa.o -no-pie
