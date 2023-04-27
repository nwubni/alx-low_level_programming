section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	extern printf
	global main

main:
	mov esi, msg
	mov edi, fmt
	xor eax, eax
	call printf

	xor eax, eax
	ret

