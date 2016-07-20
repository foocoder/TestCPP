	.file	"testCondTransfer.cpp"
	.text
	.globl	_Z7absdiffii
	.type	_Z7absdiffii, @function
_Z7absdiffii:
.LFB12:
	.cfi_startproc
	movl	%esi, %edx
	subl	%edi, %edx
	movl	%edi, %eax
	subl	%esi, %eax
	cmpl	%esi, %edi
	cmovl	%edx, %eax
	ret
	.cfi_endproc
.LFE12:
	.size	_Z7absdiffii, .-_Z7absdiffii
	.globl	_Z8cmovdiffii
	.type	_Z8cmovdiffii, @function
_Z8cmovdiffii:
.LFB13:
	.cfi_startproc
	movl	%edi, %edx
	subl	%esi, %edx
	movl	%esi, %eax
	subl	%edi, %eax
	cmpl	%edi, %esi
	cmovle	%edx, %eax
	ret
	.cfi_endproc
.LFE13:
	.size	_Z8cmovdiffii, .-_Z8cmovdiffii
	.section	.rodata.str1.1,"aMS",@progbits,1
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
.LFB14:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$2, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$2, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$2, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$2, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE14:
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
