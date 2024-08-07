/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file    Mcu.h
*   @implements Mcu.h_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcu - Mcu driver header file.
*   @details AUTOSAR specific Mcu driver header file.

*   @addtogroup MCU_DRIVER Mcu Driver
*   @{
*/

#ifndef MCU_H
#define MCU_H


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @brief            Import all data types from lower layers that should be exported.
*                   Mcu.h shall include Mcu_Cfg.h for the API pre-compiler switches.
*
*/
#include "Mcu_Cfg.h"
#include "Mcu_EnvCfg.h"
#include "Mcu_IPW_Types.h"
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCU_VENDOR_ID                       43
#define MCU_MODULE_ID                       101
#define MCU_AR_RELEASE_MAJOR_VERSION        4
#define MCU_AR_RELEASE_MINOR_VERSION        4
#define MCU_AR_RELEASE_REVISION_VERSION     0
#define MCU_SW_MAJOR_VERSION                1
#define MCU_SW_MINOR_VERSION                0
#define MCU_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Mcu.h file and Mcu_Cfg.h file are of the same vendor */
#if (MCU_VENDOR_ID != MCU_CFG_VENDOR_ID)
    #error "Mcu.h and Mcu_Cfg.h have different vendor ids"
#endif

/* Check if Mcu.h file and Mcu_Cfg.h file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION != MCU_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION != MCU_CFG_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION != MCU_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu.h and Mcu_Cfg.h are different"
#endif

/* Check if Mcu.h file and Mcu_Cfg.h file are of the same Software version */
#if ((MCU_SW_MAJOR_VERSION != MCU_CFG_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION != MCU_CFG_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION != MCU_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu.h and Mcu_Cfg.h are different"
#endif

/* Check if Mcu.h file and Mcu_EnvCfg.h file are of the same vendor */
#if (MCU_VENDOR_ID != MCU_ENVCFG_VENDOR_ID)
    #error "Mcu.h and Mcu_EnvCfg.h have different vendor ids"
#endif

/* Check if Mcu.h file and Mcu_EnvCfg.h file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION != MCU_ENVCFG_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION != MCU_ENVCFG_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION != MCU_ENVCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu.h and Mcu_EnvCfg.h are different"
#endif

/* Check if Mcu.h file and Mcu_EnvCfg.h file are of the same Software version */
#if ((MCU_SW_MAJOR_VERSION != MCU_ENVCFG_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION != MCU_ENVCFG_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION != MCU_ENVCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu.h and Mcu_EnvCfg.h are different"
#endif

/* Check if Mcu.h file and Mcu_IPW_Types.h file are of the same vendor */
#if (MCU_VENDOR_ID != MCU_IPW_TYPES_VENDOR_ID)
    #error "Mcu.h and Mcu_IPW_Types.h have different vendor ids"
#endif

/* Check if Mcu.h file and Mcu_IPW_Types.h file are of the same Autosar version */
#if ((MCU_AR_RELEASE_MAJOR_VERSION != MCU_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_AR_RELEASE_MINOR_VERSION != MCU_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (MCU_AR_RELEASE_REVISION_VERSION != MCU_IPW_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu.h and Mcu_IPW_Types.h are different"
#endif

/* Check if Mcu.h file and Mcu_IPW_Types.h file are of the same Software version */
#if ((MCU_SW_MAJOR_VERSION != MCU_IPW_TYPES_SW_MAJOR_VERSION) || \
     (MCU_SW_MINOR_VERSION != MCU_IPW_TYPES_SW_MINOR_VERSION) || \
     (MCU_SW_PATCH_VERSION != MCU_IPW_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu.h and Mcu_IPW_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if Mcu.h file and Mcal.h header file are of the same Autosar version */
    #if ((MCU_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (MCU_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Mcu.h and Mcal.h are different"
    #endif
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Initialization data for the MCU driver.
* @details        A pointer to such a structure is provided to the MCU initialization routines for
*                 configuration.
* @implements     Mcu_ConfigType_struct
*/
typedef struct
{
#if (MCU_INIT_CLOCK == STD_ON)
    /**< @brief Clock source failure notification enable configuration. */
    Mcu_ClockNotificationType Mcu_ClkSrcFailureNotification;
#endif

#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /**< @brief DEM error reporting configuration. */
    const Mcu_DemConfigType * Mcu_pDemConfig;
#endif
    /**< @brief Total number of RAM sections. */
    Mcu_RamSectionType Mcu_NoRamConfigs;

    /**< @brief Total number of  MCU modes. */
    Mcu_ModeType Mcu_NoModeConfigs;

#if (MCU_INIT_CLOCK == STD_ON)
    /**< @brief Total number of MCU clock configurations. */
    Mcu_ClockType Mcu_NoClkConfigs;
#endif /* (MCU_INIT_CLOCK == STD_ON) */
#ifndef MCU_MAX_NORAMCONFIGS
    /**< @brief RAM data configuration. */
    const Mcu_RamConfigType (*Mcu_apRamConfig)[MCU_MAX_RAMCONFIGS];
#endif

    /**< @brief Power Modes data configuration. */
    const Mcu_ModeConfigType (*Mcu_apModeConfig)[MCU_MAX_MODECONFIGS];

#if (MCU_INIT_CLOCK == STD_ON)
    /**< @brief Clock data configuration. */
    const Mcu_ClockConfigType (*Mcu_apClockConfig)[MCU_MAX_CLKCONFIGS];
#endif /* (MCU_INIT_CLOCK == STD_ON) */
    /**< @brief IPs data generic configuration. */
    const Mcu_HwIPsConfigType * Mcu_pHwIPsConfig;

} Mcu_ConfigType;

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
#if (MCU_PRECOMPILE_SUPPORT == STD_ON)

#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"

extern const Mcu_ConfigType Mcu_PreCompileConfig;


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"

#endif /* #if (MCU_PRECOMPILE_SUPPORT == STD_ON) */

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"


#if (MCU_PRECOMPILE_SUPPORT == STD_OFF)
/**
* @brief   Export Post-Build configurations.
*/
MCU_CONFIG_EXT
#endif /* (MCU_PRECOMPILE_SUPPORT == STD_OFF) */


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"


#define MCU_START_SEC_VAR_CLEARED_UNSPECIFIED

#include "Mcu_MemMap.h"

#if (defined(MCU_CMU_ERROR_ISR_USED) && (MCU_CMU_ERROR_ISR_USED == STD_ON))
/**
* @brief            Local copy of the pointer to the configuration data.
*/
extern const Mcu_ConfigType * Mcu_pConfigPtr;
#endif

#define MCU_STOP_SEC_VAR_CLEARED_UNSPECIFIED

#include "Mcu_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

 /*!
 * @brief MCU driver initialization function.
 *
 * This routine initializes the MCU Driver.
 * The intention of this function is to make the configuration setting for power
 * down, clock and Ram sections visible within the MCU Driver.
 * 
 * @param[in]  pConfigPtr   Pointer to configuration structure.
 * @return void
 */
void Mcu_Init( const Mcu_ConfigType * pConfigPtr);

 /*!
 * @brief MCU driver initialization of Ram sections.
 *
 * Function initializes the ram section selected by RamSection parameter.
 * The section base address, size and value to be written are provided from
 * the configuration structure.
 * The function will write the value specified in the configuration structure
 * indexed by RamSection.
 * After the write it will read back the RAM to verify that the requested value was
 * written.
 *
 * @param[in]  RamSection   Index of ram section from configuration structure to be initialized.
 * @return           Command has or has not been accepted.
 * @retval           E_OK        Valid parameter, the driver state allowed execution and the RAM
 *                               check was successful
 * @retval           E_NOT_OK    Invalid parameter, the driver state did not allowed execution or
 *                               the RAM check was not successful
 */
Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection);

#if (MCU_INIT_CLOCK == STD_ON)
 /*!
 * @brief            MCU driver clock initialization function.
 * 
 * This function intializes the PLL and MCU specific clock options. 
 * The clock setting is provided from the configuration structure.
 *
 * @param[in]        ClockSetting   Clock setting ID from config structure to be used.
 *
 * @return           Command has or has not been accepted.
 * @retval           E_OK        The driver state allowed the execution of the function and the
 *                                   provided parameter was in range
 * @retval           E_NOT_OK    The driver state did not allowed execution or the parameter was
 *                                   invalid
 */
Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting);
#endif /* (MCU_INIT_CLOCK == STD_ON) */

 /*!
 * @brief            This function sets the MCU power mode.
 * 
 * This function activates MCU power mode from config structure selected by McuMode parameter.
 * If the driver state is invalid or McuMode is not in range the function will skip
 * changing the mcu mode.
 *
 * @param[in]        McuMode   MCU mode setting ID from config structure to be set.
 *
 * @return           void
 */
void Mcu_SetMode(Mcu_ModeType McuMode);

#if (MCU_INIT_CLOCK == STD_ON)
  #if (MCU_NO_PLL == STD_OFF)
 /*!
 * @brief            This function activates the PLL clock to the MCU clock distribution.
 * 
 * Function completes the PLL configuration and then activates the PLL clock to MCU.
 * If the MCU_NO_PLL is TRUE the Mcu_DistributePllClock has to be disabled.
 * The function will not distribute the PLL clock if the driver state does not allow it,
 * or the PLL is not stable.
 *
 * @return           Std_ReturnType
 * @retval           E_OK        Command has been accepted.
 * @retval           E_NOT_OK    Command has not been accepted.
 */
Std_ReturnType Mcu_DistributePllClock(void);
  #endif /* (MCU_NO_PLL == STD_OFF) */
#endif /* (MCU_INIT_CLOCK == STD_ON) */

 /*!
 * @brief            This function returns the lock status of the PLL.
 * 
 * The user takes care that the PLL is locked by executing Mcu_GetPllStatus.
 * If the MCU_NO_PLL is TRUE the MCU_GetPllStatus has to return MCU_PLL_STATUS_UNDEFINED.
 * It will also return MCU_PLL_STATUS_UNDEFINED if the driver state was invalid
 *
 * @return           Mcu_PllStatusType           Provides the lock status of the PLL.
 * @retval           MCU_PLL_STATUS_UNDEFINED    PLL Status is unknown.
 * @retval           MCU_PLL_LOCKED              PLL is locked.
 * @retval           MCU_PLL_UNLOCKED            PLL is unlocked.
 */
Mcu_PllStatusType Mcu_GetPllStatus(void);

 /*!
 * @brief            This function returns the Reset reason.
 *
 * This routine returns the Reset reason that is read from the hardware.
 *
 * @return           Mcu_ResetType       Reason of the Reset event.
 */
Mcu_ResetType Mcu_GetResetReason(void);

 /*!
 * @brief            This function returns the Raw Reset value.
 *
 * This routine returns the Raw Reset value that is read from the hardware.
 *
 * @return           Mcu_RawResetType       Description of the returned value.
 * @retval           uint32   Code of the Raw reset value.
 */
Mcu_RawResetType Mcu_GetResetRawValue(void);

#if MCU_PERFORM_RESET_API == STD_ON
 /*!
 * @brief            This function performs a microcontroller reset.
 *
 * This function performs a microcontroller reset by using the hardware feature of the microcontroller.
 * In case the function returns, the user must reset the platform using an alternate reset mechanism
 *
 * @return           void
 */
void Mcu_PerformReset(void);
#endif /* (MCU_PERFORM_RESET_API == STD_ON) */


#if (MCU_VERSION_INFO_API == STD_ON)
 /*!
 * @brief            This function returns the Version Information for the MCU module.
 *
 * This function returns the vendor id, module id, major, minor and patch version.
 *
 * @param[in,out]    pVersionInfo   A pointer to a variable to store version info.
 *
 * @return           void
 */
void Mcu_GetVersionInfo(Std_VersionInfoType * pVersionInfo);
#endif /* (MCU_VERSION_INFO_API == STD_ON) */


#if (MCU_GET_RAM_STATE_API == STD_ON)
 /*!
 * @brief            This function returns the actual state of the RAM.
 *
 * This function returns if the Ram Status is valid after a reset.
 * The report is get from STCU as a result of MBIST (Memory Built-In Self Tests).
 *
 * @return           Mcu_RamStateType        Status of the Ram Content.
 *
 * @retval           MCU_RAMSTATE_INVALID    Ram state is not valid or unknown (default),
 *                                           or the driver state does not allow this call.
 * @retval           MCU_RAMSTATE_VALID      Ram state is valid.
 */
Mcu_RamStateType Mcu_GetRamState(void);
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */


#if (MCU_GET_PERIPH_STATE_API == STD_ON)
 /*!
 * @brief            This function returns the peripheral clock state.
 *
 * This function returns one peripheral is frozen or active from MC_ME hw IP.
 *
 * @param[in]        McuPeriphId   Peripheral ID based ME_PSx registers.
 *
 * @return           Std_ReturnType     Status of the peripheral clock.
 * @retval           E_OK        Peripheral is active (clocked).
 * @retval           E_NOT_OK    Peripheral is not active (not clocked) or the driver state did not
 *                               allow the call.
 */
Std_ReturnType Mcu_GetPeripheralState(Mcu_PeripheralIdType McuPeriphId);
#endif /* (MCU_GET_PERIPH_STATE_API == STD_ON) */


#if (MCU_GET_SYSTEM_STATE_API == STD_ON)
 /*!
 * @brief            This function returns the System Status and Configuration Module information.
 *
 * This function returns information about execution mode, security, vle, jtag id.
 *
 * @return           Mcu_SSCM_SystemStateType    Status read from SSCM module - STATUS and MEMCONFIG registers.
 * @retval           uint32   Platform register specific.
 */
Mcu_SSCM_SystemStateType Mcu_GetSystemState(void);
#endif /* (MCU_GET_SYSTEM_STATE_API == STD_ON) */


#if (MCU_POWERMODE_STATE_API == STD_ON)
 /*!
 * @brief            This function returns the System Status (power mode, clock settings) from MC_ME
 *                   hw IP.
 * The return value is the content register read from hardware (ME_GS). 
 * The return value shall evidentiate the current running mode, clock settings and activation, etc.
 *
 * @return           Mcu_PowerModeStateType       Get the state of the power mode.
 * @retval           uint32   Content of ME_GS register.
 */
Mcu_PowerModeStateType Mcu_GetPowerModeState(void);
#endif /* (MCU_POWERMODE_STATE_API == STD_ON) */


#if (MCU_GET_POWER_DOMAIN_API == STD_ON)
 /*!
 * @brief            This function returns the power status of all available power domains.
 *
 * This function returns if power domain is operable or inoperable form MC_PCU hw
 *                   IP.
 *
 * @return           Std_ReturnType     Get the state of Power Control Unit
 * @retval           E_OK        Power domain is operable.
 * @retval           E_NOT_OK    Power domain is inoperable or the driver state did not alloed the
 *                               functionc all.
 */
Std_ReturnType Mcu_GetPowerDomainState(void);
#endif /* (MCU_GET_POWER_DOMAIN_API == STD_ON) */


#ifdef MCU_GET_MEM_CONFIG_API
  #if (MCU_GET_MEM_CONFIG_API == STD_ON)
 /*!
 * @brief            This function returns the System Memory and ID register from SSCM.
 *
 * This function returns the value of the SSCM_MEMCONFIG register.
 *
 * @return           Value read from SSCM_MEMCONFIG register.
 * @retval           Mcu_SSCM_MemConfigType   Platform register specific.
 */
Mcu_SSCM_MemConfigType Mcu_SscmGetMemConfig(void);
  #endif /* (MCU_GET_MEM_CONFIG_API == STD_ON) */
#endif /* MCU_GET_MEM_CONFIG_API */


#ifdef MCU_SSCM_GET_STATUS_API
  #if (MCU_SSCM_GET_STATUS_API == STD_ON)
 /*!
 * @brief            This function returns the value of the SSCM_STATUS register..
 * Return information about execution mode, security, vle.
 *
 * @return           Value read from SSCM_STATUS register.
 * @retval           Mcu_SSCM_StatusType   Platform register specific.
 *
 */
Mcu_SSCM_StatusType Mcu_SscmGetStatus(void);
  #endif /* (MCU_SSCM_GET_STATUS_API == STD_ON) */
#endif /* MCU_SSCM_GET_STATUS_API */


#ifdef MCU_SSCM_GET_UOPT_API
  #if (MCU_SSCM_GET_UOPT_API == STD_ON)
 /*!
 * @brief            This function returns the value of the SSCM_UOPT register.
 *
 * Return information about User Option Bits, HSM Boot Configuration.
 *
 * @return           Value read from SSCM_UOPT register.
 * @retval           Mcu_SSCM_UoptType   Platform register specific.
 */
Mcu_SSCM_UoptType Mcu_SscmGetUopt(void);
  #endif /* (MCU_SSCM_GET_UOPT_API == STD_ON) */
#endif /* MCU_SSCM_GET_UOPT_API */


#ifdef MCU_GET_MIDR_API
  #if (MCU_GET_MIDR_API == STD_ON)
 /*!
 * @brief            This function returns the value of the MIDR registers.
 *
 * This function returns the platform dependent Mcu_MidrReturnType structure witch
 * contains the MIDRn registers.
 *
 * @param[in,out]    pMidr   A pointer to a variable to store the Mcu_MidrReturnType structure.
 *
 * @return           void
 */
void Mcu_GetMidrStructure(Mcu_MidrReturnType pMidr[MCU_SIUL2_TOTAL_UNITS]);
  #endif /* (MCU_GET_MIDR_API == STD_ON) */
#endif /* MCU_GET_MIDR_API */


#ifdef MCU_EMIOS_CONFIGURE_GPREN_API
  #if (MCU_EMIOS_CONFIGURE_GPREN_API == STD_ON)
 /*!
 * @brief   eMios Global Prescaler Enable.
 *
 * This function enables or disables the GPREN bit of the EMIOSMCR register of an
 * addressed eMIOS instance.
 *
 * @pre     Function requires an execution of Mcu_Init() before it can be used,
 * otherwise it reports error to DET.
 *
 * @param[in] u8Module       MCU_EMIOS_MODULE_0 --> Select eMios 0
 *                           MCU_EMIOS_MODULE_1 --> Select eMios 1
 *                           MCU_EMIOS_MODULE_2 --> Select eMios 2
 *
 * @param[in] u8Value        MCU_EMIOS_GPREN_BIT_ENABLE   --> Global Prescaler Enabled
 *                           MCU_EMIOS_GPREN_BIT_DISABLE  --> Global Prescaler Disabled
 *
 * @return                   void
 */
void Mcu_EmiosConfigureGpren(uint8 u8Module, uint8 u8Value);
  #endif /* (MCU_EMIOS_CONFIGURE_GPREN_API == STD_ON) */
#endif /* MCU_EMIOS_CONFIGURE_GPREN_API */


#ifdef MCU_DISABLE_CMU_API
  #if (MCU_DISABLE_CMU_API == STD_ON)
 /*!
 * @brief   Disable clock monitoring unit.
 *
 * This function disables the selected clock monitoring unit.
 *
 * @pre     Function requires an execution of Mcu_Init() before it can be used.
 *
 * @param[in] clockName    Name of the monitor clock for which CMU must be disabled.
 *
 * @return                   void
 */
void Mcu_DisableCmu(Clock_Ip_NameType clockName);
  #endif
#endif

#ifdef MCU_GET_CLOCK_FREQUENCY_API
#if (MCU_GET_CLOCK_FREQUENCY_API == STD_ON)
 /*!
 * @brief   Return the frequency of a given clock.
 *
 * This function returns the frequency of a given clock which is request by user.
 *
 * @pre     Function requires an execution of Mcu_Init() before it can be used,
 *
 * @param[in] clockName    Name of the monitor clock for which CMU must be disabled.
 *
 * @return                 uint32
 */
uint32 Mcu_GetClockFrequency(Clock_Ip_NameType clockName);
#endif /* (MCU_GET_CLOCK_FREQUENCY_API == STD_ON) */
#endif /* MCU_GET_CLOCK_FREQUENCY_API */

#ifdef MCU_SLEEPONEXIT_SUPPORT
  #if (MCU_SLEEPONEXIT_SUPPORT == STD_ON)
 /*!
 * @brief            This function disable/enable SleepOnExit.
 *
 * Disable/enable Sleep on exit when returning from Handler mode to Thread mode.
 *
 * @param[in]        Mcu_SleepOnExitType   The value will be configured to SLEEPONEXIT bits.
 *                                         MCU_SLEEP_ON_EXIT_DISABLED - Disable SLEEPONEXIT bit.
 *                                         MCU_SLEEP_ON_EXIT_ENABLED - Enable SLEEPONEXIT bit.
 * 
 * @return           void
 */
void Mcu_SleepOnExit(Mcu_SleepOnExitType SleepOnExit);
  #endif
#endif

#ifdef MCU_SRAM_RETEN_CONFIG_API
#if (MCU_SRAM_RETEN_CONFIG_API == STD_ON)
void Mcu_SRAMRetentionConfig(Mcu_SRAMRetenConfigType eSRAMRetenConfig);
#endif
#endif

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* MCU_H */

/** @} */

