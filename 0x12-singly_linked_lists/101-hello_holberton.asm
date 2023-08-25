section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	new_line db 10, 0

section .text
	global main
	extern printf

main:
	; Prepare arguments for printf
	mov rdi, format
	mov rsi, hello
	call printf

	; Exit the program
	xor rdi, rdi ; Return code 0
	call _exit   ; Call the _exit function

section .text
	global _exit
	extern _exit

_exit:
	mov rax, 60  ; syscall number for exit
	xor rdi, rdi ; exit status 0
	syscall
