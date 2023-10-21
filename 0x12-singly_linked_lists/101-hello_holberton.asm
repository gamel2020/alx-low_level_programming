section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	global main
	extern printf

main:
	; Push the format string address onto the stack
	push format
	; Push the hello string address onto the stack
	push hello
	; Call printf
	call printf
	; Clean up the stack
	add rsp, 16

	; Exit the program
	mov eax, 0
	ret
