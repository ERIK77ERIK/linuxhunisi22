section .data
	msg1 db "Enter your numbers", 10, 0
	scan-fmt db "%hd %hd"
	print-lm  db "your result %d:", 10 ,0
section .bss
	num1 resw 1
	num2 resw 1
	res resd 1
section .text
	global main
	extern printf
	extern scanf
main: 
	push rbp
	mov rbp. rsp 
	mov rax, 0  ;   0-integer
	mov rdi, scan-fmt   ;  rdi -in talisen formaty
	mov rsi, num1
	mov rdx, num2
	call scanf

	mov rax, 0
	mov ax, word[num1]  ; ax-i mej qci wordi chapov num1-i arjeqy
	add ax, word[num2]  ; ax-i mej qci wordi chapov num2-i arjeqy
	mov dword[res], eax

	mov rax, 0
	mov rdi, print_f
	mov rsi, 0
	mov esi, dword[res]
	call printf

	pop rbp
	mov rsp, rbp
	ret
; Kima , 2 tiv tanq stananq gumary
	
