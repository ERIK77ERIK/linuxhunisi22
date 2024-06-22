section .data
 	; aa db "hello, word", 10 ,0
	format db "%d"
	
section .bss

section .text
	extern printf
 	global main
main:
    mov rbp, rsp; for correct debugging 
	;mov rcx, 4
	;mov rax, 2
	;cycle:  add rax, rax

	;loop cycle
	;mov r10, rax
	;mov rax,   ; 1=write
	
	mov rdi, format   ; 1=stdout
	mov rsi, 5
	call printf

;	mov rdx, 3
;	syscall

	mov rax, 60
	xor rdi,rdi ;mov rdi, 0
	syscall

; Tamara cikl
