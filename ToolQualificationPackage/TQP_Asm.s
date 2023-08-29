///////////// Cortex-M /////////////
.global testRegisterAsm

.thumb

.thumb_func
testRegisterAsm:
  mov R0, #0x12     //tqp: step
  mov R0, #0xAB
  bx lr             //tqp: return
///////////// Cortex-M /////////////


;//////////// Tricore //////////////
.GLOBAL   testRegisterAsm

.sdecl '.text.csec',code
.sect '.text.csec'

testRegisterAsm:
  MOV D0, #0x12;      ;tqp: step
  MOV D0, #0xAB;
  RET                 ;tqp: return
;//////////// Tricore //////////////