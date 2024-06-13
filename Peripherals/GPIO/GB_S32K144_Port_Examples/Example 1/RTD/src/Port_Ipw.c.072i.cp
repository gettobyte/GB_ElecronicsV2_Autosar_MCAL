
IPA constant propagation start:
Determining dynamic type for call: Port_Ipw_SetGpioPadOutput (PinIndex_34(D), pConfigPtr_33(D));
  Starting walk at: Port_Ipw_SetGpioPadOutput (PinIndex_34(D), pConfigPtr_33(D));
  instance pointer: pConfigPtr_33(D)  Outer instance pointer: pConfigPtr_33(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (PinPad_35, 1);
Determining dynamic type for call: Port_Ipw_SetPinDirection (PinIndex_34(D), ePadDirection_40, pConfigPtr_33(D));
  Starting walk at: Port_Ipw_SetPinDirection (PinIndex_34(D), ePadDirection_40, pConfigPtr_33(D));
  instance pointer: pConfigPtr_33(D)  Outer instance pointer: pConfigPtr_33(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (PinPad_35, 1);
  Function call may change dynamic type:Port_Ipw_SetGpioPadOutput (PinIndex_34(D), pConfigPtr_33(D));
Determining dynamic type for call: Port_Ipw_Init_UnusedPins (pConfigPtr_21(D));
  Starting walk at: Port_Ipw_Init_UnusedPins (pConfigPtr_21(D));
  instance pointer: pConfigPtr_21(D)  Outer instance pointer: pConfigPtr_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ci_Port_Ip_Init (2, _14);
  Function call may change dynamic type:SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:Port_Ci_Port_Ip_ConfigDigitalFilter (_6, _4);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20/32:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20/31:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19/30:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19/29:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18/28:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18/27:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27/26:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27/25:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17/23:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17/22:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16/21:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16/20:
  Jump functions of caller  Det_ReportError/19:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/18:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/17:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/16:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/15:
  Jump functions of caller  Port_Ci_Port_Ip_Init/13:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15/12:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15/11:
  Jump functions of caller  Port_Ci_Port_Ip_ConfigDigitalFilter/10:
  Jump functions of caller  Port_Ipw_RefreshPortDirection/8:
  Jump functions of caller  Port_Ipw_SetGpioPadOutput/7:
  Jump functions of caller  Port_Ipw_SetGpioDirChangeability/6:
  Jump functions of caller  Port_Ipw_SetPinMode/5:
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioDirChangeability/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetPinDirection/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioPadOutput/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/5 -> Port_Ipw_SetGpioDirChangeability/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Port_Ipw_SetPinDirection/4:
  Jump functions of caller  Port_Ipw_Init/3:
    callsite  Port_Ipw_Init/3 -> Port_Ipw_Init_UnusedPins/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ipw_Init_UnusedPins/2:

 Propagating constants:

Not considering Port_Ipw_RefreshPortDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioPadOutput for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioDirChangeability for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinMode for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 366, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_Ipw_RefreshPortDirection/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetGpioPadOutput/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetGpioDirChangeability/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetPinMode/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetPinDirection/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_Init/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_Init_UnusedPins/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20/32 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20) @069c59a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (90242694 (estimated locally),0.76 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20/31 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20) @069c57e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (90242694 (estimated locally),0.76 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19/30 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19) @069c5700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (90242694 (estimated locally),0.76 per call) Port_Ipw_RefreshPortDirection/8 (48354889 (estimated locally),0.41 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19/29 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19) @069c5620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/8 (90242694 (estimated locally),0.76 per call) Port_Ipw_RefreshPortDirection/8 (48354889 (estimated locally),0.41 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18/28 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18) @069c5380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18/27 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18) @069c52a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27/26 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27) @069c50e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/5 (136442915 (estimated locally),0.13 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27/25 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27) @069c5000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/5 (136442915 (estimated locally),0.13 per call) 
  Calls: 
Port_au16PinDescription/24 (Port_au16PinDescription) @069c3798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetPinMode/5 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17/23 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17) @0697c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (136550377 (estimated locally),0.13 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17/22 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17) @0697ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (136550377 (estimated locally),0.13 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16/21 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16) @0697cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (136550377 (estimated locally),0.13 per call) Port_Ipw_SetPinDirection/4 (73168010 (estimated locally),0.07 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16/20 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16) @0697cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (136550377 (estimated locally),0.13 per call) Port_Ipw_SetPinDirection/4 (73168010 (estimated locally),0.07 per call) 
  Calls: 
Det_ReportError/19 (Det_ReportError) @0697cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/5 (159060892 (estimated locally),0.15 per call) Port_Ipw_SetPinMode/5 (237404317 (estimated locally),0.22 per call) Port_Ipw_SetPinMode/5 (354334802 (estimated locally),0.33 per call) Port_Ipw_SetPinDirection/4 (237404317 (estimated locally),0.22 per call) Port_Ipw_SetPinDirection/4 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/18 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10) @0697c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init_UnusedPins/2 (467112052 (estimated locally),3.95 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/17 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10) @0697c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init_UnusedPins/2 (467112052 (estimated locally),3.95 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/16 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09) @0697c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init_UnusedPins/2 (467112052 (estimated locally),3.95 per call) Port_Ipw_Init_UnusedPins/2 (488518169 (estimated locally),4.14 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/15 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09) @0697c620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init_UnusedPins/2 (467112052 (estimated locally),3.95 per call) Port_Ipw_Init_UnusedPins/2 (488518169 (estimated locally),4.14 per call) 
  Calls: 
Port_au32PortCiGpioBaseAddr/14 (Port_au32PortCiGpioBaseAddr) @069ba480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetGpioPadOutput/7 (read)Port_Ipw_SetGpioPadOutput/7 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_RefreshPortDirection/8 (read)Port_Ipw_RefreshPortDirection/8 (read)Port_Ipw_RefreshPortDirection/8 (read)
  Availability: not_available
  Varpool flags:
Port_Ci_Port_Ip_Init/13 (Port_Ci_Port_Ip_Init) @0697c460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15/12 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15) @0697c380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (789698069 (estimated locally),8.09 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15/11 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15) @0697c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (789698069 (estimated locally),8.09 per call) 
  Calls: 
Port_Ci_Port_Ip_ConfigDigitalFilter/10 (Port_Ci_Port_Ip_ConfigDigitalFilter) @0697c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (789698069 (estimated locally),8.09 per call) 
  Calls: 
Port_au32PortCiPortBaseAddr/9 (Port_au32PortCiPortBaseAddr) @068aaca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init/3 (read)Port_Ipw_Init/3 (read)Port_Ipw_SetPinMode/5 (read)
  Availability: not_available
  Varpool flags:
Port_Ipw_RefreshPortDirection/8 (Port_Ipw_RefreshPortDirection) @068cdee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20/32 (90242694 (estimated locally),0.76 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20/31 (90242694 (estimated locally),0.76 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19/30 (90242694 (estimated locally),0.76 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19/29 (90242694 (estimated locally),0.76 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19/30 (48354889 (estimated locally),0.41 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19/29 (48354889 (estimated locally),0.41 per call) 
Port_Ipw_SetGpioPadOutput/7 (Port_Ipw_SetGpioPadOutput) @068cd540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (14965976 (estimated locally),0.01 per call) 
  Calls: 
Port_Ipw_SetGpioDirChangeability/6 (Port_Ipw_SetGpioDirChangeability) @068c09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GpioDirChangeability/1 (read)Port_Ipw_au16GpioDirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (90052324 (estimated locally),0.08 per call) Port_Ipw_SetPinMode/5 (46390591 (estimated locally),0.04 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18/28 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18/27 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_SetPinMode/5 (Port_Ipw_SetPinMode) @068c0ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au16PinDescription/24 (read)Port_au32PortCiPortBaseAddr/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27/26 (136442915 (estimated locally),0.13 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27/25 (136442915 (estimated locally),0.13 per call) Port_Ipw_SetGpioDirChangeability/6 (90052324 (estimated locally),0.08 per call) Port_Ipw_SetPinDirection/4 (46390591 (estimated locally),0.04 per call) Port_Ipw_SetGpioPadOutput/7 (14965976 (estimated locally),0.01 per call) Port_Ipw_SetGpioDirChangeability/6 (46390591 (estimated locally),0.04 per call) Det_ReportError/19 (159060892 (estimated locally),0.15 per call) Det_ReportError/19 (237404317 (estimated locally),0.22 per call) Det_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Port_Ipw_SetPinDirection/4 (Port_Ipw_SetPinDirection) @068c08c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GpioDirChangeability/1 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/5 (46390591 (estimated locally),0.04 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17/23 (136550377 (estimated locally),0.13 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17/22 (136550377 (estimated locally),0.13 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16/21 (136550377 (estimated locally),0.13 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16/20 (136550377 (estimated locally),0.13 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16/21 (73168010 (estimated locally),0.07 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16/20 (73168010 (estimated locally),0.07 per call) Det_ReportError/19 (237404317 (estimated locally),0.22 per call) Det_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Port_Ipw_Init/3 (Port_Ipw_Init) @068a5ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32PortCiPortBaseAddr/9 (read)Port_au32PortCiPortBaseAddr/9 (read)Port_Ipw_au16GpioDirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:97603132 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ipw_Init_UnusedPins/2 (97603132 (estimated locally),1.00 per call) Port_Ci_Port_Ip_Init/13 (97603132 (estimated locally),1.00 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15/12 (789698069 (estimated locally),8.09 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15/11 (789698069 (estimated locally),8.09 per call) Port_Ci_Port_Ip_ConfigDigitalFilter/10 (789698069 (estimated locally),8.09 per call) 
Port_Ipw_Init_UnusedPins/2 (Port_Ipw_Init_UnusedPins) @068a5e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiGpioBaseAddr/14 (read)Port_au32PortCiPortBaseAddr/9 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10/18 (467112052 (estimated locally),3.95 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10/17 (467112052 (estimated locally),3.95 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/16 (467112052 (estimated locally),3.95 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/15 (467112052 (estimated locally),3.95 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09/16 (488518169 (estimated locally),4.14 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09/15 (488518169 (estimated locally),4.14 per call) 
Port_Ipw_au16GpioDirChangeability/1 (Port_Ipw_au16GpioDirChangeability) @06924cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Ipw_Init/3 (write)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetGpioDirChangeability/6 (read)Port_Ipw_SetGpioDirChangeability/6 (write)
  Availability: available
  Varpool flags:

;; Function Port_Ipw_Init (Port_Ipw_Init, funcdef_no=2, decl_uid=5710, cgraph_uid=3, symbol_order=3)

Modification phase of node Port_Ipw_Init/3
Port_Ipw_Init (const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8Port;
  uint8 u8NumDigFilterPorts;
  uint16 u16PinIndex;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _4;
  int _5;
  struct PORT_Type * _6;
  struct PORT_Type * _7;
  long unsigned int _8;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _9;
  const struct Port_Ci_Port_Ip_DigitalFilterConfigType * _10;
  long unsigned int _11;
  long unsigned int _12;
  short unsigned int _13;
  const struct Port_Ci_Port_Ip_PinSettingsConfig * _14;
  int _15;

  <bb 2> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u8NumDigFilterPorts_22 = pConfigPtr_21(D)->u8NumDigitalFilterPorts;
  # DEBUG u8NumDigFilterPorts => u8NumDigFilterPorts_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 789698069]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_21(D)->pDigitalFilterConfig;
  _2 = (unsigned int) u16PinIndex_16;
  _3 = _2 * 8;
  _4 = _1 + _3;
  u8Port_27 = _4->u8Port;
  # DEBUG u8Port => u8Port_27
  # DEBUG BEGIN_STMT
  _5 = (int) u8Port_27;
  _6 = Port_au32PortCiPortBaseAddr[_5];
  Port_Ci_Port_Ip_ConfigDigitalFilter (_6, _4);
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  _7 = Port_au32PortCiPortBaseAddr[_5];
  _8 ={v} _7->DFER;
  _9 = pConfigPtr_21(D)->pDigitalFilterConfig;
  _10 = _9 + _3;
  _11 = _10->u32PinMask;
  _12 = _8 | _11;
  _7->DFER ={v} _12;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  u16PinIndex_32 = u16PinIndex_16 + 1;
  # DEBUG u16PinIndex => u16PinIndex_32

  <bb 4> [local count: 887301202]:
  # u16PinIndex_16 = PHI <0(2), u16PinIndex_32(3)>
  # DEBUG u16PinIndex => u16PinIndex_16
  # DEBUG BEGIN_STMT
  _13 = (short unsigned int) u8NumDigFilterPorts_22;
  if (_13 > u16PinIndex_16)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  _14 = pConfigPtr_21(D)->IpConfigPtr;
  Port_Ci_Port_Ip_Init (2, _14);
  # DEBUG BEGIN_STMT
  Port_Ipw_Init_UnusedPins (pConfigPtr_21(D));
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 976138693]:
  # DEBUG BEGIN_STMT
  _15 = (int) u16PinIndex_17;
  Port_Ipw_au16GpioDirChangeability[_15] = 0;
  # DEBUG BEGIN_STMT
  u16PinIndex_26 = u16PinIndex_17 + 1;
  # DEBUG u16PinIndex => u16PinIndex_26

  <bb 7> [local count: 1073741824]:
  # u16PinIndex_17 = PHI <0(5), u16PinIndex_26(6)>
  # DEBUG u16PinIndex => u16PinIndex_17
  # DEBUG BEGIN_STMT
  if (u16PinIndex_17 != 10)
    goto <bb 6>; [90.91%]
  else
    goto <bb 8>; [9.09%]

  <bb 8> [local count: 97603132]:
  return;

}



;; Function Port_Ipw_SetPinDirection (Port_Ipw_SetPinDirection, funcdef_no=3, decl_uid=5714, cgraph_uid=4, symbol_order=4)

Modification phase of node Port_Ipw_SetPinDirection/4
Port_Ipw_SetPinDirection (Port_PinType PinIndex, Port_PinDirectionType eDirection, const struct Port_ConfigType * pConfigPtr)
{
  uint16 u16PinChangeDirFlagWord;
  uint8 u8PinDescBitOffset;
  Std_ReturnType PinDirError;
  uint16 Pin;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  short unsigned int _4;
  long unsigned int _5;
  const uint32 * _6;
  long unsigned int _7;
  const uint32 * _8;
  long unsigned int _9;
  short unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  short unsigned int _13;
  unsigned char _14;
  int _15;
  _Bool _16;
  int _17;
  long unsigned int _18;
  short unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;
  long unsigned int _22;
  struct GPIO_Type * _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  short unsigned int _28;
  long unsigned int _29;
  struct GPIO_Type * _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  struct GPIO_Type * _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  short unsigned int _48;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_45(D)->pUsedPadConfig;
  _2 = PinIndex_46(D) * 20;
  _3 = _1 + _2;
  Pin_47 = _3->Pin;
  # DEBUG Pin => Pin_47
  # DEBUG BEGIN_STMT
  # DEBUG PinDirError => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _4 = pConfigPtr_45(D)->u16NumPins;
  _5 = (long unsigned int) _4;
  if (_5 <= PinIndex_46(D))
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ReportError (124, 0, 1, 10);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _6 = pConfigPtr_45(D)->pau32Port_PinToPartitionMap;
  _7 = PinIndex_46(D) * 4;
  _8 = _6 + _7;
  _9 = *_8;
  _11 = _9 & 1;
  if (_11 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ReportError (124, 0, 1, 240);
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _12 = (unsigned char) Pin_47;
  u8PinDescBitOffset_49 = _12 & 15;
  # DEBUG u8PinDescBitOffset => u8PinDescBitOffset_49
  # DEBUG BEGIN_STMT
  _13 = Pin_47 >> 4;
  _14 = (unsigned char) _13;
  _15 = (int) _14;
  u16PinChangeDirFlagWord_50 = Port_Ipw_au16GpioDirChangeability[_15];
  # DEBUG u16PinChangeDirFlagWord => u16PinChangeDirFlagWord_50
  # DEBUG BEGIN_STMT
  _16 = _3->bDC;
  if (_16 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 241001352]:
  _17 = (int) u8PinDescBitOffset_49;
  _18 = 1 << _17;
  _19 = (short unsigned int) _18;
  _20 = _19 & u16PinChangeDirFlagWord_50;
  if (_20 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 8> [local count: 361502028]:
  # DEBUG BEGIN_STMT
  if (eDirection_51(D) == 2)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 73168010]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16 ();
  # DEBUG BEGIN_STMT
  _21 = Pin_47 >> 5;
  _22 = (long unsigned int) _21;
  _23 = Port_au32PortCiGpioBaseAddr[_22];
  _24 ={v} _23->PDDR;
  _10 = Pin_47 & 31;
  _25 = (long unsigned int) _10;
  _26 = 1 << _25;
  _27 = _24 | _26;
  _23->PDDR ={v} _27;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16 ();
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 288334017]:
  # DEBUG BEGIN_STMT
  if (eDirection_51(D) == 1)
    goto <bb 12>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 11> [local count: 229975212]:
  if (eDirection_51(D) == 3)
    goto <bb 12>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 12> [local count: 136550377]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16 ();
  # DEBUG BEGIN_STMT
  _28 = Pin_47 >> 5;
  _29 = (long unsigned int) _28;
  _30 = Port_au32PortCiGpioBaseAddr[_29];
  _31 ={v} _30->PDDR;
  _48 = Pin_47 & 31;
  _32 = (long unsigned int) _48;
  _33 = 1 << _32;
  _34 = ~_33;
  _35 = _31 & _34;
  _30->PDDR ={v} _35;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17 ();
  # DEBUG BEGIN_STMT
  _36 = Port_au32PortCiGpioBaseAddr[_29];
  _37 ={v} _36->PIDR;
  _38 = _34 & _37;
  _36->PIDR ={v} _38;
  # DEBUG BEGIN_STMT
  if (eDirection_51(D) == 3)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 46427128]:
  # DEBUG BEGIN_STMT
  _39 ={v} _36->PIDR;
  _40 = _33 | _39;
  _36->PIDR ={v} _40;

  <bb 14> [local count: 136550377]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17 ();

  <bb 15> [local count: 1073741824]:
  # PinDirError_41 = PHI <0(3), 0(5), 0(11), 1(7), 0(9), 0(14)>
  # DEBUG PinDirError => PinDirError_41
  # DEBUG BEGIN_STMT
  return PinDirError_41;

}



;; Function Port_Ipw_SetGpioDirChangeability (Port_Ipw_SetGpioDirChangeability, funcdef_no=5, decl_uid=5705, cgraph_uid=6, symbol_order=6)

Modification phase of node Port_Ipw_SetGpioDirChangeability/6
Port_Ipw_SetGpioDirChangeability (uint16 PadID, boolean bStatus)
{
  uint16 u16PinDirFlagWord;
  uint8 u8PinBitOffset;
  unsigned char _1;
  unsigned char _2;
  int _3;
  int _4;
  long unsigned int _5;
  short unsigned int _6;
  int _7;
  long unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18 ();
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) PadID_14(D);
  u8PinBitOffset_15 = _1 & 15;
  # DEBUG u8PinBitOffset => u8PinBitOffset_15
  # DEBUG BEGIN_STMT
  _2 = _1 >> 4;
  _3 = (int) _2;
  u16PinDirFlagWord_16 = Port_Ipw_au16GpioDirChangeability[_3];
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_16
  # DEBUG BEGIN_STMT
  if (bStatus_17(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = (int) u8PinBitOffset_15;
  _5 = 1 << _4;
  _6 = (short unsigned int) _5;
  u16PinDirFlagWord_19 = _6 | u16PinDirFlagWord_16;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_19
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = (int) u8PinBitOffset_15;
  _8 = 1 << _7;
  _9 = (short unsigned int) _8;
  _10 = ~_9;
  u16PinDirFlagWord_18 = _10 & u16PinDirFlagWord_16;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_18

  <bb 5> [local count: 1073741824]:
  # u16PinDirFlagWord_11 = PHI <u16PinDirFlagWord_19(3), u16PinDirFlagWord_18(4)>
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_11
  # DEBUG BEGIN_STMT
  Port_Ipw_au16GpioDirChangeability[_3] = u16PinDirFlagWord_11;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18 ();
  return;

}



;; Function Port_Ipw_SetGpioPadOutput (Port_Ipw_SetGpioPadOutput, funcdef_no=6, decl_uid=5708, cgraph_uid=7, symbol_order=7)

Modification phase of node Port_Ipw_SetGpioPadOutput/7
Port_Ipw_SetGpioPadOutput (Port_PinType PinIndex, const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8LocalPDO;
  uint16 Pin;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  long unsigned int _4;
  short unsigned int _5;
  long unsigned int _6;
  struct GPIO_Type * _7;
  long unsigned int _8;
  long unsigned int _9;
  short unsigned int _10;
  long unsigned int _11;
  struct GPIO_Type * _12;
  long unsigned int _13;
  short unsigned int _22;
  short unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_16(D)->pUsedPadConfig;
  _2 = PinIndex_17(D) * 20;
  _3 = _1 + _2;
  Pin_18 = _3->Pin;
  # DEBUG Pin => Pin_18
  # DEBUG BEGIN_STMT
  u8LocalPDO_19 = _3->u8PDO;
  # DEBUG u8LocalPDO => u8LocalPDO_19
  # DEBUG BEGIN_STMT
  if (u8LocalPDO_19 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _23 = Pin_18 & 31;
  _4 = (long unsigned int) _23;
  _5 = Pin_18 >> 5;
  _6 = (long unsigned int) _5;
  _7 = Port_au32PortCiGpioBaseAddr[_6];
  _8 = 1 << _4;
  _7->PSOR ={v} _8;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (u8LocalPDO_19 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _22 = Pin_18 & 31;
  _9 = (long unsigned int) _22;
  _10 = Pin_18 >> 5;
  _11 = (long unsigned int) _10;
  _12 = Port_au32PortCiGpioBaseAddr[_11];
  _13 = 1 << _9;
  _12->PCOR ={v} _13;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Port_Ipw_SetPinMode (Port_Ipw_SetPinMode, funcdef_no=4, decl_uid=5718, cgraph_uid=5, symbol_order=5)

Modification phase of node Port_Ipw_SetPinMode/5
Port_Ipw_SetPinMode (Port_PinType PinIndex, Port_PinModeType PinMode, const struct Port_ConfigType * pConfigPtr)
{
  Port_PinDirectionType ePadDirection;
  uint32 u32LocalPCR;
  uint16 u16PinDescBitOffset;
  uint16 u16PinDescWord;
  uint16 PinPad;
  Std_ReturnType PinModeError;
  const struct Port_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_PinConfigType * _3;
  short unsigned int _4;
  long unsigned int _5;
  const uint32 * _6;
  long unsigned int _7;
  const uint32 * _8;
  long unsigned int _9;
  long unsigned int _10;
  _Bool _11;
  int _12;
  short unsigned int _13;
  int _14;
  int _15;
  int _16;
  int _17;
  int _18;
  const struct Port_PinConfigType * _19;
  const struct Port_PinConfigType * _20;
  short unsigned int _21;
  long unsigned int _22;
  struct PORT_Type * _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  short unsigned int _31;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG PinModeError => 0
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_33(D)->pUsedPadConfig;
  _2 = PinIndex_34(D) * 20;
  _3 = _1 + _2;
  PinPad_35 = _3->Pin;
  # DEBUG PinPad => PinPad_35
  # DEBUG BEGIN_STMT
  # DEBUG PinCfgRegValue => PinMode_36(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _4 = pConfigPtr_33(D)->u16NumPins;
  _5 = (long unsigned int) _4;
  if (_5 <= PinIndex_34(D))
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ReportError (124, 0, 4, 10);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _6 = pConfigPtr_33(D)->pau32Port_PinToPartitionMap;
  _7 = PinIndex_34(D) * 4;
  _8 = _6 + _7;
  _9 = *_8;
  _10 = _9 & 1;
  if (_10 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ReportError (124, 0, 4, 240);
  goto <bb 17>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _11 = _3->bMC;
  if (_11 != 0)
    goto <bb 8>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  Det_ReportError (124, 0, 4, 14);
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  if (PinMode_36(D) > 7)
    goto <bb 17>; [35.00%]
  else
    goto <bb 9>; [65.00%]

  <bb 9> [local count: 209912177]:
  # DEBUG BEGIN_STMT
  # DEBUG ePadDirection => 0
  # DEBUG BEGIN_STMT
  u16PinDescBitOffset_37 = PinPad_35 & 15;
  # DEBUG u16PinDescBitOffset => u16PinDescBitOffset_37
  # DEBUG BEGIN_STMT
  _12 = (int) PinMode_36(D);
  _13 = PinPad_35 >> 4;
  _14 = (int) _13;
  u16PinDescWord_38 = Port_au16PinDescription[_12][_14];
  # DEBUG u16PinDescWord => u16PinDescWord_38
  # DEBUG BEGIN_STMT
  _15 = (int) u16PinDescWord_38;
  _16 = (int) u16PinDescBitOffset_37;
  _17 = _15 >> _16;
  _18 = _17 & 1;
  if (_18 != 0)
    goto <bb 10>; [65.00%]
  else
    goto <bb 17>; [35.00%]

  <bb 10> [local count: 136442915]:
  # DEBUG BEGIN_STMT
  if (PinMode_36(D) == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 11> [local count: 46390591]:
<L9>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioDirChangeability (PinPad_35, 1);
  # DEBUG BEGIN_STMT
  _19 = pConfigPtr_33(D)->pUsedPadConfig;
  _20 = _19 + _2;
  ePadDirection_40 = _20->ePadDir;
  # DEBUG ePadDirection => ePadDirection_40
  # DEBUG BEGIN_STMT
  if (ePadDirection_40 != 1)
    goto <bb 12>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 12> [local count: 30617790]:
  if (ePadDirection_40 != 3)
    goto <bb 13>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 13> [local count: 14965976]:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioPadOutput (PinIndex_34(D), pConfigPtr_33(D));

  <bb 14> [local count: 46390591]:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetPinDirection (PinIndex_34(D), ePadDirection_40, pConfigPtr_33(D));
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 90052324]:
<L14>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioDirChangeability (PinPad_35, 0);
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 136442915]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27 ();
  # DEBUG BEGIN_STMT
  _21 = PinPad_35 >> 5;
  _22 = (long unsigned int) _21;
  _23 = Port_au32PortCiPortBaseAddr[_22];
  _31 = PinPad_35 & 31;
  _24 = (long unsigned int) _31;
  u32LocalPCR_45 ={v} _23->PCR[_24];
  # DEBUG u32LocalPCR => u32LocalPCR_45
  # DEBUG BEGIN_STMT
  u32LocalPCR_46 = u32LocalPCR_45 & 4294965503;
  # DEBUG u32LocalPCR => u32LocalPCR_46
  # DEBUG BEGIN_STMT
  _25 = (long unsigned int) PinMode_36(D);
  _26 = _25 << 8;
  u32LocalPCR_47 = _26 | u32LocalPCR_46;
  # DEBUG u32LocalPCR => u32LocalPCR_47
  # DEBUG BEGIN_STMT
  _23->PCR[_24] ={v} u32LocalPCR_47;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27 ();

  <bb 17> [local count: 1073741824]:
  # PinModeError_27 = PHI <0(3), 0(5), 0(7), 13(8), 0(16), 13(9)>
  # DEBUG PinModeError => PinModeError_27
  # DEBUG BEGIN_STMT
  return PinModeError_27;

}



;; Function Port_Ipw_RefreshPortDirection (Port_Ipw_RefreshPortDirection, funcdef_no=7, decl_uid=5720, cgraph_uid=8, symbol_order=8)

Modification phase of node Port_Ipw_RefreshPortDirection/8
Port_Ipw_RefreshPortDirection (const struct Port_ConfigType * pConfigPtr)
{
  uint16 PinPad;
  uint16 u16PinIndex;
  uint16 u16NumPins;
  const struct Port_PinConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_PinConfigType * _4;
  _Bool _5;
  _Bool _6;
  <unnamed type> _7;
  short unsigned int _8;
  long unsigned int _9;
  struct GPIO_Type * _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  short unsigned int _15;
  long unsigned int _16;
  struct GPIO_Type * _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  struct GPIO_Type * _23;
  long unsigned int _24;
  long unsigned int _25;
  const struct Port_PinConfigType * _26;
  const struct Port_PinConfigType * _27;
  <unnamed type> _28;
  long unsigned int _29;
  long unsigned int _30;
  short unsigned int _38;
  short unsigned int _51;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  u16NumPins_37 = pConfigPtr_36(D)->u16NumPins;
  # DEBUG u16NumPins => u16NumPins_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 13>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_36(D)->pUsedPadConfig;
  _2 = (unsigned int) u16PinIndex_31;
  _3 = _2 * 20;
  _4 = _1 + _3;
  _5 = _4->bDC;
  if (_5 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  _6 = _4->bGPIO;
  if (_6 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 5> [local count: 238907556]:
  # DEBUG BEGIN_STMT
  PinPad_39 = _4->Pin;
  # DEBUG PinPad => PinPad_39
  # DEBUG BEGIN_STMT
  _7 = _4->ePadDir;
  if (_7 == 2)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 48354889]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  _8 = PinPad_39 >> 5;
  _9 = (long unsigned int) _8;
  _10 = Port_au32PortCiGpioBaseAddr[_9];
  _11 ={v} _10->PDDR;
  _51 = PinPad_39 & 31;
  _12 = (long unsigned int) _51;
  _13 = 1 << _12;
  _14 = _11 | _13;
  _10->PDDR ={v} _14;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19 ();
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 190552666]:
  # DEBUG BEGIN_STMT
  if (_7 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 8> [local count: 151984807]:
  if (_7 == 3)
    goto <bb 9>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 9> [local count: 90242694]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  _15 = PinPad_39 >> 5;
  _16 = (long unsigned int) _15;
  _17 = Port_au32PortCiGpioBaseAddr[_16];
  _18 ={v} _17->PDDR;
  _38 = PinPad_39 & 31;
  _19 = (long unsigned int) _38;
  _20 = 1 << _19;
  _21 = ~_20;
  _22 = _18 & _21;
  _17->PDDR ={v} _22;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20 ();
  # DEBUG BEGIN_STMT
  _23 = Port_au32PortCiGpioBaseAddr[_16];
  _24 ={v} _23->PIDR;
  _25 = _21 & _24;
  _23->PIDR ={v} _25;
  # DEBUG BEGIN_STMT
  _26 = pConfigPtr_36(D)->pUsedPadConfig;
  _27 = _26 + _3;
  _28 = _27->ePadDir;
  if (_28 == 3)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 30682516]:
  # DEBUG BEGIN_STMT
  _29 ={v} _23->PIDR;
  _30 = _20 | _29;
  _23->PIDR ={v} _30;

  <bb 11> [local count: 90242694]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20 ();

  <bb 12> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  u16PinIndex_50 = u16PinIndex_31 + 1;
  # DEBUG u16PinIndex => u16PinIndex_50

  <bb 13> [local count: 1073741824]:
  # u16PinIndex_31 = PHI <0(2), u16PinIndex_50(12)>
  # DEBUG u16PinIndex => u16PinIndex_31
  # DEBUG BEGIN_STMT
  if (u16PinIndex_31 < u16NumPins_37)
    goto <bb 3>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 118111601]:
  return;

}


