section .data
	hi db 'Hello, Holberton', 0Ah, 0
	format db '%s'

section .text
	global main
	extern printf

main:
	push format
	push hi
	call printf
	add rsp, 16
	xor eax, eax
	ret
