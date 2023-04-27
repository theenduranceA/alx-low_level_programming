extern printf
section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

section .text
	global main

main:

	push rbp
	mov rbp, rsp

	lea rdi, [fmt]
	lea rsi, [msg]

	mov eax, 0
	call printf

	mov rsp, rbp
	pop rbp
	mov eax, 0
	ret
