	.file	"testCondTransfer.cpp"
	.text
	.globl	_Z7absdiffii
	.type	_Z7absdiffii, @function
_Z7absdiffii:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L2
	movl	-8(%rbp), %eax
	subl	-4(%rbp), %eax
	jmp	.L3
.L2:
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z7absdiffii, .-_Z7absdiffii
	.globl	_Z8cmovdiffii
	.type	_Z8cmovdiffii, @function
_Z8cmovdiffii:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-20(%rbp), %eax
	subl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	setl	%al
	movzbl	%al, %eax
	movl	%eax, -12(%rbp)
	cmpl	$0, -12(%rbp)
	je	.L6
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z8cmovdiffii, .-_Z8cmovdiffii
	.section	.rodata
.LC0:
	.string	"absdiff(3,5) is %d\n"
.LC1:
	.string	"absdiff(5,3) is %d\n"
.LC2:
	.string	"cmovdiff(3,5) is %d\n"
.LC3:
	.string	"cmovdiff(5,3) is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$5, %esi
	movl	$3, %edi
	call	_Z7absdiffii
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$3, %esi
	movl	$5, %edi
	call	_Z7absdiffii
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$5, %esi
	movl	$3, %edi
	call	_Z8cmovdiffii
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$3, %esi
	movl	$5, %edi
	call	_Z8cmovdiffii
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
