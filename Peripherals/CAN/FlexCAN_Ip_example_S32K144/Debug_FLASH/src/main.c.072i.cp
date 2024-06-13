
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Send/14:
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/13:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/12:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/9:
  Jump functions of caller  Port_Init/8:
  Jump functions of caller  Clock_Ip_DistributePll/7:
  Jump functions of caller  Clock_Ip_GetPllStatus/6:
  Jump functions of caller  Clock_Ip_Init/4:
  Jump functions of caller  main/3:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 36, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_Ip_Send/14 (FlexCAN_Ip_Send) @06d69e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxMb/13 (FlexCAN_Ip_ConfigRxMb) @06d69d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/12 (FlexCAN_Ip_SetStartMode_Privileged) @06d69c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/11 (FlexCAN_Config0) @06c9ac60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/10 (FlexCAN_State0) @06c9ac18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/9 (FlexCAN_Ip_Init_Privileged) @06d69b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/8 (Port_Init) @06d69a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/7 (Clock_Ip_DistributePll) @06d699a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/6 (Clock_Ip_GetPllStatus) @06d698c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/5 (Mcu_aClockConfigPB) @06c9aab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/4 (Clock_Ip_Init) @06d697e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (118111600 (estimated locally),1.00 per call) 
  Calls: 
main/3 (main) @06d69380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/5 (addr)FlexCAN_State0/10 (addr)FlexCAN_Config0/11 (addr)dummyData/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Send/14 (118111601 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/13 (118111601 (estimated locally),1.00 per call) FlexCAN_Ip_SetStartMode_Privileged/12 (118111601 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/9 (118111601 (estimated locally),1.00 per call) Port_Init/8 (118111601 (estimated locally),1.00 per call) Clock_Ip_DistributePll/7 (118111601 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/6 (1073741824 (estimated locally),9.09 per call) Clock_Ip_Init/4 (118111600 (estimated locally),1.00 per call) 
dummyData/2 (dummyData) @06c9a510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/3 (addr)
  Availability: available
  Varpool flags: initialized
exit_code/1 (exit_code) @06c9a438
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function main (main, funcdef_no=1, decl_uid=6978, cgraph_uid=2, symbol_order=3) (executed once)

Modification phase of node main/3
main ()
{
  struct Flexcan_Ip_DataInfoType rx_info;
  <unnamed type> _1;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG x => 0
  # DEBUG BEGIN_STMT
  Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  if (_1 != 0)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  rx_info = {};
  rx_info.data_length = 8;
  rx_info.is_polling = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 1, &rx_info, 800);
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  rx_info.is_polling = 0;
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 0, &rx_info, 800, &dummyData);
  # DEBUG x => NULL
  # DEBUG BEGIN_STMT
  rx_info ={v} {CLOBBER};
  return 0;

}


