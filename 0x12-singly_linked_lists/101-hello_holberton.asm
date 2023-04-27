global _start

section .data
	hello: db 'Hello, Holberton', 0
	format: db '%s', 10, 0

section .text
_start:
	mov rdi, format
	mov rsi, hello
	xor rax, rax

	call printf

	xor rdi, rdi
	mov rax, 60
	syscall

