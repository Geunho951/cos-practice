.global test

test:
    movswq %di, %rdi
    movswq %si, %rsi
    movswq %dx, %rdx

    leaq (%rdx, %rsi), %rax
    subq %rdi, %rax

    cmpq $5, %rdx
    jle .label2

    cmpq $2, %rsi
    jle .label3

    movq %rdi, %rax
    cqto
    idivq %rdx
    ret

.label3:
    movq %rdi, %rax
    cqto
    idivq %rsi
    ret

.label2:
    cmpq $3, %rdx
    jge .label4

    movq %rdx, %rax
    cqto
    idivq %rsi

.label4:
    ret

.section .note.GNU-stack,"",@progbits