
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_HwIPsConfigPB_BOARD_InitPeripherals/3 (Power_Ip_HwIPsConfigPB_BOARD_InitPeripherals) @0692daf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config_BOARD_InitPeripherals/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_aClockConfigPB_BOARD_InitPeripherals/2 (Mcu_aClockConfigPB_BOARD_InitPeripherals) @0692dab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config_BOARD_InitPeripherals/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Power_Ip_aModeConfigPB_BOARD_InitPeripherals/1 (Power_Ip_aModeConfigPB_BOARD_InitPeripherals) @0692da68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Config_BOARD_InitPeripherals/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_Config_BOARD_InitPeripherals/0 (Mcu_Config_BOARD_InitPeripherals) @0692d948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_aModeConfigPB_BOARD_InitPeripherals/1 (addr)Mcu_aClockConfigPB_BOARD_InitPeripherals/2 (addr)Power_Ip_HwIPsConfigPB_BOARD_InitPeripherals/3 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
