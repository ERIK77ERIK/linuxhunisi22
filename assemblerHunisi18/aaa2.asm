section .data
	decimal db "%d"
section .bss
	number resd 1
section .text

extern _printf
extern _scanf
	global _main:
_main:
	push rbp
	mov rax, 0
	mov rdi, decimal
	mov rsi, number
	call _scanf
	



;number resd 1, number-i hamar reserve ara double word chapov mi hat hishoxutyun;number resd 100, compilatiai ardyunqum fiqsvelua vor .bss sekciai hamar 400 byte hishoxutyuna petq, inchi vorovhetev 100hat dword chapov taracsaa petq isk dword chapi hishoxutyuny 4 byte-a

; H.D.
