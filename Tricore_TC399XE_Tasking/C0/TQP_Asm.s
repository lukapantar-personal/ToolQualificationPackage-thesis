.GLOBAL   testRegisterAsm

.sdecl '.text.csec',code
.sect '.text.csec'

testRegisterAsm:
  MOV D0, #0x12;       ;tqp: step
  MOV D0, #0xAB;
  RET                 ;tqp: return
