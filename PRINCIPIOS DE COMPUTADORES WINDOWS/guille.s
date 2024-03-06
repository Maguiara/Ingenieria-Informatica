.text

    l.s $f0, 2.0
    l.s $f2, 0.0

    li $s0, 5

    mtc1 $s0, $f4
    cvt.s.w $f6, $f4

    div.s $f2, $f6, $f0


    li $v0, 2
    move $f12, $f2
    syscall 