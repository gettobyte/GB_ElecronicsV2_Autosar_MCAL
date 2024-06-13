
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_CM4_EnableSleepOnExit/20:
  Jump functions of caller  Power_Ip_CM4_DisableSleepOnExit/19:
  Jump functions of caller  Power_Ip_SMC_AllowedModesConfig/18:
  Jump functions of caller  Power_Ip_PMC_PowerInit/17:
  Jump functions of caller  Power_Ip_RCM_ResetInit/16:
  Jump functions of caller  Power_Ip_RCM_GetResetRawValue/15:
  Jump functions of caller  Power_Ip_RCM_GetResetReason/13:
  Jump functions of caller  Power_Ip_ReportPowerErrors/12:
  Jump functions of caller  Power_Ip_SMC_ModeConfig/11:
  Jump functions of caller  Power_Ip_SMC_ModeCheckEntry/10:
  Jump functions of caller  Power_Ip_ReportPowerErrorsEmptyCallback/9:
  Jump functions of caller  Power_Ip_InstallNotificationsCallback/8:
  Jump functions of caller  Power_Ip_EnableSleepOnExit/7:
  Jump functions of caller  Power_Ip_DisableSleepOnExit/6:
  Jump functions of caller  Power_Ip_Init/5:
  Jump functions of caller  Power_Ip_GetResetRawValue/4:
  Jump functions of caller  Power_Ip_GetResetReason/3:
  Jump functions of caller  Power_Ip_SetMode/1:

 Propagating constants:

Not considering Power_Ip_InstallNotificationsCallback for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_EnableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_DisableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SetMode for cloning; -fipa-cp-clone disabled.

overall_size: 54, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_InstallNotificationsCallback/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_EnableSleepOnExit/7:
  Node: Power_Ip_DisableSleepOnExit/6:
  Node: Power_Ip_Init/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_GetResetRawValue/4:
  Node: Power_Ip_GetResetReason/3:
  Node: Power_Ip_SetMode/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_CM4_EnableSleepOnExit/20 (Power_Ip_CM4_EnableSleepOnExit) @0690cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_EnableSleepOnExit/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_CM4_DisableSleepOnExit/19 (Power_Ip_CM4_DisableSleepOnExit) @0690ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_DisableSleepOnExit/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_SMC_AllowedModesConfig/18 (Power_Ip_SMC_AllowedModesConfig) @0690c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_PMC_PowerInit/17 (Power_Ip_PMC_PowerInit) @0690c7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_RCM_ResetInit/16 (Power_Ip_RCM_ResetInit) @0690c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_RCM_GetResetRawValue/15 (Power_Ip_RCM_GetResetRawValue) @0690c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetRawValue/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ResetReasonArray.5730/14 (ResetReasonArray) @0690e168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_GetResetReason/3 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Power_Ip_RCM_GetResetReason/13 (Power_Ip_RCM_GetResetReason) @0690c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetReason/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_ReportPowerErrors/12 (Power_Ip_ReportPowerErrors) @0690c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (719407023 (estimated locally),0.67 per call) 
  Calls: 
Power_Ip_SMC_ModeConfig/11 (Power_Ip_SMC_ModeConfig) @0690c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_SMC_ModeCheckEntry/10 (Power_Ip_SMC_ModeCheckEntry) @06907d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_ReportPowerErrorsEmptyCallback/9 (Power_Ip_ReportPowerErrorsEmptyCallback) @06907000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Power_Ip_pfReportErrorsCallback/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Power_Ip_InstallNotificationsCallback/8 (Power_Ip_InstallNotificationsCallback) @06907ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pfReportErrorsCallback/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_EnableSleepOnExit/7 (Power_Ip_EnableSleepOnExit) @06907c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM4_EnableSleepOnExit/20 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_DisableSleepOnExit/6 (Power_Ip_DisableSleepOnExit) @069079a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM4_DisableSleepOnExit/19 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_Init/5 (Power_Ip_Init) @06907700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_SMC_AllowedModesConfig/18 (1073741824 (estimated locally),1.00 per call) Power_Ip_PMC_PowerInit/17 (1073741824 (estimated locally),1.00 per call) Power_Ip_RCM_ResetInit/16 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetRawValue/4 (Power_Ip_GetResetRawValue) @06907460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_RCM_GetResetRawValue/15 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetReason/3 (Power_Ip_GetResetReason) @069071c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ResetReasonArray.5730/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_RCM_GetResetReason/13 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_SetMode/1 (Power_Ip_SetMode) @068a9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_ReportPowerErrors/12 (719407023 (estimated locally),0.67 per call) Power_Ip_SMC_ModeConfig/11 (536870913 (estimated locally),0.50 per call) Power_Ip_SMC_ModeCheckEntry/10 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_pfReportErrorsCallback/0 (Power_Ip_pfReportErrorsCallback) @068c0000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_ReportPowerErrorsEmptyCallback/9 (addr)
  Referring: Power_Ip_InstallNotificationsCallback/8 (write)
  Availability: available
  Varpool flags: initialized

;; Function Power_Ip_SetMode (Power_Ip_SetMode, funcdef_no=0, decl_uid=5624, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_SetMode/1
Power_Ip_SetMode (const struct Power_Ip_ModeConfigType * ModeConfigPtr)
{
  Power_Ip_PowerModeType PowerMode;
  uint32 PowerSwitchMode;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PowerMode_5 = ModeConfigPtr_4(D)->PowerMode;
  # DEBUG PowerMode => PowerMode_5
  # DEBUG BEGIN_STMT
  _1 = Power_Ip_SMC_ModeCheckEntry (PowerMode_5);
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  PowerSwitchMode_8 = Power_Ip_SMC_ModeConfig (ModeConfigPtr_4(D));
  # DEBUG PowerSwitchMode => PowerSwitchMode_8
  # DEBUG BEGIN_STMT
  if (PowerSwitchMode_8 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 719407023]:
  # DEBUG PowerSwitchMode => NULL
  # DEBUG BEGIN_STMT
  Power_Ip_ReportPowerErrors (3, 255);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Power_Ip_GetResetReason (Power_Ip_GetResetReason, funcdef_no=2, decl_uid=5626, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_GetResetReason/3
Power_Ip_GetResetReason ()
{
  Power_Ip_ResetType ResetReason;
  static const Power_Ip_ResetType ResetReasonArray[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  uint32 ResetVal;
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetVal_3 = Power_Ip_RCM_GetResetReason ();
  # DEBUG ResetVal => ResetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG ResetReasonIndex => ResetVal_3
  # DEBUG INLINE_ENTRY Power_Ip_ConvertIntergeToResetType
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = ResetReasonArray[ResetVal_3];
  if (_4 <= 14)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => _4

  <bb 4> [local count: 1073741824]:
  # ResetReason_5 = PHI <12(2), _4(3)>
  # DEBUG ResetReason => ResetReason_5
  # DEBUG BEGIN_STMT
  # DEBUG ResetReasonIndex => NULL
  # DEBUG ResetReason => NULL
  # DEBUG ResetReason => ResetReason_5
  # DEBUG BEGIN_STMT
  return ResetReason_5;

}



;; Function Power_Ip_GetResetRawValue (Power_Ip_GetResetRawValue, funcdef_no=3, decl_uid=5628, cgraph_uid=4, symbol_order=4)

Modification phase of node Power_Ip_GetResetRawValue/4
Power_Ip_GetResetRawValue ()
{
  Power_Ip_RawResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_RCM_GetResetRawValue ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Power_Ip_Init (Power_Ip_Init, funcdef_no=4, decl_uid=5622, cgraph_uid=5, symbol_order=5)

Modification phase of node Power_Ip_Init/5
Power_Ip_Init (const struct Power_Ip_HwIPsConfigType * HwIPsConfigPtr)
{
  const struct Power_Ip_RCM_ConfigType * _1;
  const struct Power_Ip_PMC_ConfigType * _2;
  const struct Power_Ip_SMC_ConfigType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = HwIPsConfigPtr_5(D)->RCMConfigPtr;
  Power_Ip_RCM_ResetInit (_1);
  # DEBUG BEGIN_STMT
  _2 = HwIPsConfigPtr_5(D)->PMCConfigPtr;
  Power_Ip_PMC_PowerInit (_2);
  # DEBUG BEGIN_STMT
  _3 = HwIPsConfigPtr_5(D)->SMCConfigPtr;
  Power_Ip_SMC_AllowedModesConfig (_3);
  return;

}



;; Function Power_Ip_DisableSleepOnExit (Power_Ip_DisableSleepOnExit, funcdef_no=5, decl_uid=5632, cgraph_uid=6, symbol_order=6)

Modification phase of node Power_Ip_DisableSleepOnExit/6
Power_Ip_DisableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM4_DisableSleepOnExit ();
  return;

}



;; Function Power_Ip_EnableSleepOnExit (Power_Ip_EnableSleepOnExit, funcdef_no=6, decl_uid=5634, cgraph_uid=7, symbol_order=7)

Modification phase of node Power_Ip_EnableSleepOnExit/7
Power_Ip_EnableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM4_EnableSleepOnExit ();
  return;

}



;; Function Power_Ip_InstallNotificationsCallback (Power_Ip_InstallNotificationsCallback, funcdef_no=7, decl_uid=5630, cgraph_uid=8, symbol_order=8)

Modification phase of node Power_Ip_InstallNotificationsCallback/8
Power_Ip_InstallNotificationsCallback (void (*Power_Ip_ReportErrorsCallbackType) (Power_Ip_ReportErrorType, uint8) ReportErrorsCallback)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Power_Ip_pfReportErrorsCallback = ReportErrorsCallback_2(D);
  return;

}


