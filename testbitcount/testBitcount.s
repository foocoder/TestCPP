	.file	"testBitcount.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	_Z18Fn_BitCount_Normalj
	.type	_Z18Fn_BitCount_Normalj, @function
_Z18Fn_BitCount_Normalj:
.LFB1600:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
.L4:
	cmpl	$0, -20(%rbp)
	je	.L2
	movl	-20(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L3
	addl	$1, -4(%rbp)
.L3:
	shrl	-20(%rbp)
	jmp	.L4
.L2:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1600:
	.size	_Z18Fn_BitCount_Normalj, .-_Z18Fn_BitCount_Normalj
	.globl	_Z27Fn_BitCount_Normal_Simplifyj
	.type	_Z27Fn_BitCount_Normal_Simplifyj, @function
_Z27Fn_BitCount_Normal_Simplifyj:
.LFB1601:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
.L8:
	cmpl	$0, -20(%rbp)
	je	.L7
	movl	-20(%rbp), %eax
	andl	$1, %eax
	addl	%eax, -4(%rbp)
	shrl	-20(%rbp)
	jmp	.L8
.L7:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1601:
	.size	_Z27Fn_BitCount_Normal_Simplifyj, .-_Z27Fn_BitCount_Normal_Simplifyj
	.globl	_Z16Fn_BitCount_Fastj
	.type	_Z16Fn_BitCount_Fastj, @function
_Z16Fn_BitCount_Fastj:
.LFB1602:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
.L12:
	cmpl	$0, -20(%rbp)
	je	.L11
	movl	-20(%rbp), %eax
	subl	$1, %eax
	andl	%eax, -20(%rbp)
	addl	$1, -4(%rbp)
	jmp	.L12
.L11:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1602:
	.size	_Z16Fn_BitCount_Fastj, .-_Z16Fn_BitCount_Fastj
	.globl	_Z25Fn_BitCount_Dynamic_Tablej
	.type	_Z25Fn_BitCount_Dynamic_Tablej, @function
_Z25Fn_BitCount_Dynamic_Tablej:
.LFB1603:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$304, %rsp
	movl	%edi, -292(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-272(%rbp), %rdx
	movl	$0, %eax
	movl	$32, %ecx
	movq	%rdx, %rdi
	rep stosq
	movl	$0, -288(%rbp)
.L16:
	cmpl	$255, -288(%rbp)
	jg	.L15
	movl	-288(%rbp), %eax
	andl	$1, %eax
	movl	%eax, %edx
	movl	-288(%rbp), %eax
	movl	%eax, %ecx
	shrl	$31, %ecx
	addl	%ecx, %eax
	sarl	%eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	addl	%eax, %edx
	movl	-288(%rbp), %eax
	cltq
	movb	%dl, -272(%rbp,%rax)
	addl	$1, -288(%rbp)
	jmp	.L16
.L15:
	movl	$0, -284(%rbp)
	leaq	-292(%rbp), %rax
	movq	%rax, -280(%rbp)
	movq	-280(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %edx
	movq	-280(%rbp), %rax
	addq	$1, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-280(%rbp), %rax
	addq	$2, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-280(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	movzbl	%al, %eax
	cltq
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%edx, %eax
	movl	%eax, -284(%rbp)
	movl	-284(%rbp), %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L18
	call	__stack_chk_fail
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1603:
	.size	_Z25Fn_BitCount_Dynamic_Tablej, .-_Z25Fn_BitCount_Dynamic_Tablej
	.globl	_Z26Fn_BitCount_Static_Table_4j
	.type	_Z26Fn_BitCount_Static_Table_4j, @function
_Z26Fn_BitCount_Static_Table_4j:
.LFB1604:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movb	$0, -32(%rbp)
	movb	$1, -31(%rbp)
	movb	$1, -30(%rbp)
	movb	$2, -29(%rbp)
	movb	$1, -28(%rbp)
	movb	$2, -27(%rbp)
	movb	$2, -26(%rbp)
	movb	$3, -25(%rbp)
	movb	$1, -24(%rbp)
	movb	$2, -23(%rbp)
	movb	$2, -22(%rbp)
	movb	$3, -21(%rbp)
	movb	$2, -20(%rbp)
	movb	$3, -19(%rbp)
	movb	$3, -18(%rbp)
	movb	$4, -17(%rbp)
	movl	$0, -36(%rbp)
.L21:
	cmpl	$0, -52(%rbp)
	je	.L20
	movl	-52(%rbp), %eax
	andl	$15, %eax
	movl	%eax, %eax
	movzbl	-32(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%eax, -36(%rbp)
	shrl	$4, -52(%rbp)
	jmp	.L21
.L20:
	movl	-36(%rbp), %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L23
	call	__stack_chk_fail
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1604:
	.size	_Z26Fn_BitCount_Static_Table_4j, .-_Z26Fn_BitCount_Static_Table_4j
	.section	.rodata
	.align 32
.LC0:
	.byte	0
	.byte	1
	.byte	1
	.byte	2
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	1
	.byte	2
	.byte	2
	.byte	3
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	2
	.byte	3
	.byte	3
	.byte	4
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	3
	.byte	4
	.byte	4
	.byte	5
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	4
	.byte	5
	.byte	5
	.byte	6
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	5
	.byte	6
	.byte	6
	.byte	7
	.byte	6
	.byte	7
	.byte	7
	.byte	8
	.text
	.globl	_Z26Fn_BitCount_Static_Table_8j
	.type	_Z26Fn_BitCount_Static_Table_8j, @function
_Z26Fn_BitCount_Static_Table_8j:
.LFB1605:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movl	%edi, -276(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-272(%rbp), %rax
	movl	$.LC0, %esi
	movl	$32, %edx
	movq	%rax, %rdi
	movq	%rdx, %rcx
	rep movsq
	movl	-276(%rbp), %eax
	movzbl	%al, %eax
	movl	%eax, %eax
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %edx
	movl	-276(%rbp), %eax
	shrl	$8, %eax
	movzbl	%al, %eax
	movl	%eax, %eax
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movl	-276(%rbp), %eax
	shrl	$16, %eax
	movzbl	%al, %eax
	movl	%eax, %eax
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movl	-276(%rbp), %eax
	shrl	$24, %eax
	movl	%eax, %eax
	movzbl	-272(%rbp,%rax), %eax
	movzbl	%al, %eax
	addl	%edx, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L26
	call	__stack_chk_fail
.L26:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1605:
	.size	_Z26Fn_BitCount_Static_Table_8j, .-_Z26Fn_BitCount_Static_Table_8j
	.globl	_Z20Fn_BitCount_Parallelj
	.type	_Z20Fn_BitCount_Parallelj, @function
_Z20Fn_BitCount_Parallelj:
.LFB1606:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$1431655765, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	shrl	%eax
	andl	$1431655765, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$858993459, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	shrl	$2, %eax
	andl	$858993459, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$252645135, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	shrl	$4, %eax
	andl	$252645135, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$16711935, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	shrl	$8, %eax
	andl	$16711935, %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movzwl	%ax, %eax
	movl	-4(%rbp), %edx
	shrl	$16, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1606:
	.size	_Z20Fn_BitCount_Parallelj, .-_Z20Fn_BitCount_Parallelj
	.globl	_Z19Fn_BitCount_Perfectj
	.type	_Z19Fn_BitCount_Perfectj, @function
_Z19Fn_BitCount_Perfectj:
.LFB1607:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	shrl	%eax
	andl	$-613566757, %eax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	subl	%edx, %eax
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	shrl	$2, %eax
	andl	$1227133513, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	shrl	$3, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	andl	$-954437177, %eax
	movl	%eax, %ecx
	movl	$68174085, %edx
	movl	%ecx, %eax
	mull	%edx
	movl	%ecx, %eax
	subl	%edx, %eax
	shrl	%eax
	addl	%edx, %eax
	shrl	$5, %eax
	movl	%eax, %edx
	sall	$6, %edx
	subl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1607:
	.size	_Z19Fn_BitCount_Perfectj, .-_Z19Fn_BitCount_Perfectj
	.globl	_Z20Fn_BitCount_BitFlagsj
	.type	_Z20Fn_BitCount_BitFlagsj, @function
_Z20Fn_BitCount_BitFlagsj:
.LFB1608:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	%edi, -68(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -60(%rbp)
	leaq	-68(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-56(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -40(%rbp)
	movq	-56(%rbp), %rax
	addq	$2, %rax
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rax
	addq	$3, %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	andl	$1, %eax
	movzbl	%al, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	%al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$2, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$3, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$4, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$5, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$6, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$7, %al
	movzbl	%al, %eax
	addl	%edx, %eax
	addl	%eax, -60(%rbp)
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	andl	$1, %eax
	movzbl	%al, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	%al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$2, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$3, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$4, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$5, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$6, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$7, %al
	movzbl	%al, %eax
	addl	%edx, %eax
	addl	%eax, -60(%rbp)
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	andl	$1, %eax
	movzbl	%al, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	%al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$2, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$3, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$4, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$5, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$6, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$7, %al
	movzbl	%al, %eax
	addl	%edx, %eax
	addl	%eax, -60(%rbp)
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	andl	$1, %eax
	movzbl	%al, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	%al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$2, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$3, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$4, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$5, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$6, %al
	andl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %edx
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	shrb	$7, %al
	movzbl	%al, %eax
	addl	%edx, %eax
	addl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L33
	call	__stack_chk_fail
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1608:
	.size	_Z20Fn_BitCount_BitFlagsj, .-_Z20Fn_BitCount_BitFlagsj
	.globl	_Z19Fn_BitCount_SSE4_32j
	.type	_Z19Fn_BitCount_SSE4_32j, @function
_Z19Fn_BitCount_SSE4_32j:
.LFB1609:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	xorl	%eax, %eax
	popcntl	-4(%rbp), %eax
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1609:
	.size	_Z19Fn_BitCount_SSE4_32j, .-_Z19Fn_BitCount_SSE4_32j
	.globl	_Z19Fn_BitCount_SSE4_64j
	.type	_Z19Fn_BitCount_SSE4_64j, @function
_Z19Fn_BitCount_SSE4_64j:
.LFB1610:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	popcntq	-8(%rbp), %rax
	cltq
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1610:
	.size	_Z19Fn_BitCount_SSE4_64j, .-_Z19Fn_BitCount_SSE4_64j
	.section	.rodata
.LC2:
	.string	"Fn_BitCount_Normal Result: "
.LC3:
	.string	", Time Consuming: "
.LC4:
	.string	" seconds"
	.align 8
.LC5:
	.string	"Fn_BitCount_Normal_Simplify Result: "
.LC6:
	.string	"Fn_BitCount_Fast Result: "
	.align 8
.LC7:
	.string	"Fn_BitCount_Dynamic_Table Result: "
	.align 8
.LC8:
	.string	"Fn_BitCount_Static_Table_4 Result: "
	.align 8
.LC9:
	.string	"Fn_BitCount_Static_Table_8 Result: "
.LC10:
	.string	"Fn_BitCount_Parallel Result: "
.LC11:
	.string	"Fn_BitCount_Perfect Result: "
.LC12:
	.string	"Fn_BitCount_SSE4_32 Result: "
.LC13:
	.string	"Fn_BitCount_SSE4_64 Result: "
.LC14:
	.string	"Fn_BitCount_BitFlags Result: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1611:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movl	%edi, -68(%rbp)
	movq	%rsi, -80(%rbp)
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -60(%rbp)
.L42:
	cmpl	$16777214, -60(%rbp)
	jg	.L41
	movl	-60(%rbp), %eax
	movl	%eax, %edi
	call	_Z18Fn_BitCount_Normalj
	addl	%eax, -64(%rbp)
	addl	$1, -60(%rbp)
	jmp	.L42
.L41:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -56(%rbp)
.L44:
	cmpl	$16777214, -56(%rbp)
	jg	.L43
	movl	-56(%rbp), %eax
	movl	%eax, %edi
	call	_Z27Fn_BitCount_Normal_Simplifyj
	addl	%eax, -64(%rbp)
	addl	$1, -56(%rbp)
	jmp	.L44
.L43:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -52(%rbp)
.L46:
	cmpl	$16777214, -52(%rbp)
	jg	.L45
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	_Z16Fn_BitCount_Fastj
	addl	%eax, -64(%rbp)
	addl	$1, -52(%rbp)
	jmp	.L46
.L45:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -48(%rbp)
.L48:
	cmpl	$16777214, -48(%rbp)
	jg	.L47
	movl	-48(%rbp), %eax
	movl	%eax, %edi
	call	_Z25Fn_BitCount_Dynamic_Tablej
	addl	%eax, -64(%rbp)
	addl	$1, -48(%rbp)
	jmp	.L48
.L47:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -44(%rbp)
.L50:
	cmpl	$16777214, -44(%rbp)
	jg	.L49
	movl	-44(%rbp), %eax
	movl	%eax, %edi
	call	_Z26Fn_BitCount_Static_Table_4j
	addl	%eax, -64(%rbp)
	addl	$1, -44(%rbp)
	jmp	.L50
.L49:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC8, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -40(%rbp)
.L52:
	cmpl	$16777214, -40(%rbp)
	jg	.L51
	movl	-40(%rbp), %eax
	movl	%eax, %edi
	call	_Z26Fn_BitCount_Static_Table_8j
	addl	%eax, -64(%rbp)
	addl	$1, -40(%rbp)
	jmp	.L52
.L51:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC9, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -36(%rbp)
.L54:
	cmpl	$16777214, -36(%rbp)
	jg	.L53
	movl	-36(%rbp), %eax
	movl	%eax, %edi
	call	_Z20Fn_BitCount_Parallelj
	addl	%eax, -64(%rbp)
	addl	$1, -36(%rbp)
	jmp	.L54
.L53:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -32(%rbp)
.L56:
	cmpl	$16777214, -32(%rbp)
	jg	.L55
	movl	-32(%rbp), %eax
	movl	%eax, %edi
	call	_Z19Fn_BitCount_Perfectj
	addl	%eax, -64(%rbp)
	addl	$1, -32(%rbp)
	jmp	.L56
.L55:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC11, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -28(%rbp)
.L58:
	cmpl	$16777214, -28(%rbp)
	jg	.L57
	movl	-28(%rbp), %eax
	movl	%eax, %edi
	call	_Z19Fn_BitCount_SSE4_32j
	addl	%eax, -64(%rbp)
	addl	$1, -28(%rbp)
	jmp	.L58
.L57:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC12, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -24(%rbp)
.L60:
	cmpl	$16777214, -24(%rbp)
	jg	.L59
	movl	-24(%rbp), %eax
	movl	%eax, %edi
	call	_Z19Fn_BitCount_SSE4_64j
	addl	%eax, -64(%rbp)
	addl	$1, -24(%rbp)
	jmp	.L60
.L59:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC13, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -64(%rbp)
	call	clock
	movq	%rax, -16(%rbp)
	movl	$0, -20(%rbp)
.L62:
	cmpl	$16777214, -20(%rbp)
	jg	.L61
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z20Fn_BitCount_BitFlagsj
	addl	%eax, -64(%rbp)
	addl	$1, -20(%rbp)
	jmp	.L62
.L61:
	call	clock
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	subq	-16(%rbp), %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -88(%rbp)
	movl	$.LC14, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movsd	-88(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZNSolsEd
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1611:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1621:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L66
	cmpl	$65535, -8(%rbp)
	jne	.L66
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L66:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1621:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z18Fn_BitCount_Normalj, @function
_GLOBAL__sub_I__Z18Fn_BitCount_Normalj:
.LFB1622:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1622:
	.size	_GLOBAL__sub_I__Z18Fn_BitCount_Normalj, .-_GLOBAL__sub_I__Z18Fn_BitCount_Normalj
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z18Fn_BitCount_Normalj
	.section	.rodata
	.align 8
.LC1:
	.long	0
	.long	1093567616
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.2.1-22ubuntu2) 5.2.1 20151010"
	.section	.note.GNU-stack,"",@progbits
