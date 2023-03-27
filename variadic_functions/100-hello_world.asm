section .data
	message db 'Hello, world', 10
	message_len equ $-message

section .text
	global main

main:
	mov eax, 4
	mov ebx, 1
	mov ecx, message
	mov edx, message_len
	int 0x80
	mov eax, 1
	xor ebx, ebx
	int 0x80
