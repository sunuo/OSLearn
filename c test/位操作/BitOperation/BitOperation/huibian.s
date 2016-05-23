	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	leaq	L_.str(%rip), %rax
	leaq	L_.str.1(%rip), %rcx
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movb	$0, %al
	callq	_printf
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	_gdbtest
	leaq	L_.str.2(%rip), %rdi
	movl	$4369, -20(%rbp)        ## imm = 0x1111
	movl	$512, -24(%rbp)         ## imm = 0x200
	movl	-24(%rbp), %eax
	subl	$1, %eax
	xorl	$-1, %eax
	andl	-20(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %eax
	subl	$1, %eax
	xorl	$-1, %eax
	movl	%eax, %edx
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %edx
	subl	$1, %edx
	xorl	$-1, %edx
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%edx, %edx
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_gdbtest
	.align	4, 0x90
_gdbtest:                               ## @gdbtest
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str.4(%rip), %rdi
	movl	$100, -4(%rbp)
	movl	-4(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello, World! %s\n"

L_.str.1:                               ## @.str.1
	.asciz	"sb_trest"

L_.str.2:                               ## @.str.2
	.asciz	"%d  %d \n"

L_.str.3:                               ## @.str.3
	.asciz	"%x  %x \n"

L_.str.4:                               ## @.str.4
	.asciz	"test:::%d\n"


.subsections_via_symbols
