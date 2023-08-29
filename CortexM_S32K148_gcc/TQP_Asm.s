.global testRegisterAsm

.thumb

.thumb_func
testRegisterAsm:
  mov R0, #0x12     //tqp: step
  mov R0, #0xAB
  bx lr             //tqp: return
