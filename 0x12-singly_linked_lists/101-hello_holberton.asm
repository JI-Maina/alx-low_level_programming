;Declare needed C functions
	extern  printf		; the c function to be called

	section .data		; data section, initialized variables
msg:	db "Hello, Holberton",0 ; c string needs 0
fmt:	db "%s", 10, 0		; the printf format, "\n",'0'

	section .text		; code section

	global main		; the standard gcc entry point
main:				; the program label for entry point
	push	rbp		; set up stack frame, must be alligned

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0		; or can be  xor  rax,rax
	call	printf		; Call C function

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret			; return
