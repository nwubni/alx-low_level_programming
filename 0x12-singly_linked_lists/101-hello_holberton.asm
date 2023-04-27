section .data
	msg db "Hello, Holberton", 0
	fmt db "%s\n", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, fmt
	mov rsi, msg
	mov eax, 0
	call printf

	mov eax, 0

	mov rsp, rbp
	pop rbp
	ret

