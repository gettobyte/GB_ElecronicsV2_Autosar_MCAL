
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Sys_GetCoreID/13:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7:
  Jump functions of caller  Mcu_schm_read_msr/6:

 Propagating constants:

Not considering SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering Mcu_schm_read_msr for cloning; -fipa-cp-clone disabled.

overall_size: 106, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12:
  Node: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11:
  Node: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10:
  Node: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9:
  Node: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8:
  Node: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7:
  Node: Mcu_schm_read_msr/6:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Sys_GetCoreID/13 (Sys_GetCoreID) @06709380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02) @06769a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (read)reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (write)msr_MCU_EXCLUSIVE_AREA_02/4 (read)reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02) @06769540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (read)msr_MCU_EXCLUSIVE_AREA_02/4 (write)msr_MCU_EXCLUSIVE_AREA_02/4 (read)reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (read)reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01) @06769ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (read)reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (write)msr_MCU_EXCLUSIVE_AREA_01/2 (read)reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01) @06769c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (read)msr_MCU_EXCLUSIVE_AREA_01/2 (write)msr_MCU_EXCLUSIVE_AREA_01/2 (read)reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (read)reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00) @067699a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (read)reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (write)msr_MCU_EXCLUSIVE_AREA_00/0 (read)reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00) @06769700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (read)msr_MCU_EXCLUSIVE_AREA_00/0 (write)msr_MCU_EXCLUSIVE_AREA_00/0 (read)reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (read)reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/13 (1073741824 (estimated locally),1.00 per call) 
Mcu_schm_read_msr/6 (Mcu_schm_read_msr) @06769460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
reentry_guard_MCU_EXCLUSIVE_AREA_02/5 (reentry_guard_MCU_EXCLUSIVE_AREA_02) @06703048
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (read)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (read)
  Availability: available
  Varpool flags:
msr_MCU_EXCLUSIVE_AREA_02/4 (msr_MCU_EXCLUSIVE_AREA_02) @06765f78
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12 (read)
  Availability: available
  Varpool flags:
reentry_guard_MCU_EXCLUSIVE_AREA_01/3 (reentry_guard_MCU_EXCLUSIVE_AREA_01) @06765ee8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (read)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (read)
  Availability: available
  Varpool flags:
msr_MCU_EXCLUSIVE_AREA_01/2 (msr_MCU_EXCLUSIVE_AREA_01) @06765e58
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10 (read)
  Availability: available
  Varpool flags:
reentry_guard_MCU_EXCLUSIVE_AREA_00/1 (reentry_guard_MCU_EXCLUSIVE_AREA_00) @06765dc8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (read)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (read)
  Availability: available
  Varpool flags:
msr_MCU_EXCLUSIVE_AREA_00/0 (msr_MCU_EXCLUSIVE_AREA_00) @06765d38
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (read)SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7 (write)SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8 (read)
  Availability: available
  Varpool flags:

;; Function Mcu_schm_read_msr (Mcu_schm_read_msr, funcdef_no=0, decl_uid=5557, cgraph_uid=1, symbol_order=6)

Modification phase of node Mcu_schm_read_msr/6
Mcu_schm_read_msr ()
{
  register uint32 reg_tmp;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_1);
  # DEBUG reg_tmp => reg_tmp_1
  # DEBUG BEGIN_STMT
  return reg_tmp_1;

}



;; Function SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00, funcdef_no=1, decl_uid=5539, cgraph_uid=2, symbol_order=7)

Modification phase of node SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/7
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 ()
{
  register uint32 reg_tmp;
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Mcu_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_14);
  # DEBUG reg_tmp => reg_tmp_14
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_MCU_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} reg_tmp_14;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  _6 = _5 + 1;
  reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} _6;
  return;

}



;; Function SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00, funcdef_no=2, decl_uid=5541, cgraph_uid=3, symbol_order=8)

Modification phase of node SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/8
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 ()
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  _3 = _2 + 4294967295;
  reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10] ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} msr_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _6 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_00[u32CoreId_10];
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01, funcdef_no=3, decl_uid=5543, cgraph_uid=4, symbol_order=9)

Modification phase of node SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/9
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 ()
{
  register uint32 reg_tmp;
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Mcu_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_14);
  # DEBUG reg_tmp => reg_tmp_14
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_MCU_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} reg_tmp_14;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  _6 = _5 + 1;
  reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} _6;
  return;

}



;; Function SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01, funcdef_no=4, decl_uid=5545, cgraph_uid=5, symbol_order=10)

Modification phase of node SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/10
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 ()
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  _3 = _2 + 4294967295;
  reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10] ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} msr_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _6 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_01[u32CoreId_10];
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02, funcdef_no=5, decl_uid=5547, cgraph_uid=6, symbol_order=11)

Modification phase of node SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02/11
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02 ()
{
  register uint32 reg_tmp;
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Mcu_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_14);
  # DEBUG reg_tmp => reg_tmp_14
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_MCU_EXCLUSIVE_AREA_02[u32CoreId_10] ={v} reg_tmp_14;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  _6 = _5 + 1;
  reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10] ={v} _6;
  return;

}



;; Function SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02, funcdef_no=6, decl_uid=5549, cgraph_uid=7, symbol_order=12)

Modification phase of node SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02/12
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02 ()
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_10 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_10
  # DEBUG BEGIN_STMT
  _2 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  _3 = _2 + 4294967295;
  reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10] ={v} _3;
  # DEBUG BEGIN_STMT
  _4 ={v} msr_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  _5 = _4 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _6 ={v} reentry_guard_MCU_EXCLUSIVE_AREA_02[u32CoreId_10];
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}


