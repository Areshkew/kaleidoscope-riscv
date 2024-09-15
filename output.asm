sum:
	# Callee side
add fp, zero, sp
sw ra, 0(sp)
addi sp, sp, -4
	# Function body
lw a0, 4(fp)
sw a0, 0(sp)
addi sp, sp, -4
lw a0, 8(fp)
lw t1, 4(sp)
addi sp, sp, 4
add a0, t1, a0
	# Activation record
lw ra, 4(sp)
addi sp, sp, 12
lw fp, 0(sp)
jalr zero, ra, 0
main:
sw fp, 0(sp)
addi sp, sp, -4
	# Arguments code
addi a0, zero, 5
sw a0, 0(sp)
addi sp, sp, -4
addi a0, zero, 10
sw a0, 0(sp)
addi sp, sp, -4
	# End of argument code
jal ra, sum
