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
*   @file       Clock_Ip_Data.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/
 



#include "Clock_Ip_Private.h"

#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
    #include "RegLockMacros.h"
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_DATA_VENDOR_ID_C                      43
#define CLOCK_IP_DATA_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_DATA_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_DATA_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_DATA_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_DATA_SW_MINOR_VERSION_C               0
#define CLOCK_IP_DATA_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Data.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_DATA_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Data.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Data.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_DATA_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_DATA_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_DATA_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Data.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Data.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_DATA_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_DATA_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_DATA_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Data.c and Clock_Ip_Private.h are different"
#endif

#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if Clock_Ip_Data.c file and RegLockMacros.h file are of the same Autosar version */
    #if ((CLOCK_IP_DATA_AR_RELEASE_MAJOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
        (CLOCK_IP_DATA_AR_RELEASE_MINOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Clock_Ip_Data.c and RegLockMacros.h are different"
    #endif
    #endif
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/




#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))

    #define NO_CALLBACK                   0U
    #define CLKOUT_SEL_DIV_ENABLE         1U
    #define SIRCOSC                       1U
    #define SYS_OSC                       1U
    #define CMU                           1U
    #define MUX_MUL_DIV_GATE              2U
    #define SIRCOSC_VLP                   2U
    #define MUX_GATE                      3U
    #define ASYNC_DIV1                    3U
    #define SIRCOSC_STOP                  3U
    #define ASYNC_DIV2                    4U
    #define SCS_RUN                       4U
    #define LPO32K_ENABLE                 4U
    #define FIRCOSC                       4U
    #define DIVCORE_RUN                   5U
    #define SCS_VLPR                      5U
    #define LPO1K_ENABLE                  5U
    #define FIRCOSC_VLP                   5U
    #define DIVCORE_VLPR                  6U
    #define RTC_SEL                       6U
    #define GATE                          6U
    #define FIRCOSC_STOP                  6U
    #define DIVBUS_RUN                    7U
    #define LPO_SEL                       7U
    #define DIVBUS_VLPR                   8U
    #define CLKOUT_MUX                    8U
    #define PLAT_GATE                     8U
    #define DIVSLOW_RUN                   9U
    #define FTM_MUX                       9U
    #define DIVSLOW_VLPR                  10U

#elif (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))

    #define NO_CALLBACK                   0U
    #define CLKOUT_SEL_DIV_ENABLE         1U
    #define SIRCOSC                       1U
    #define SYS_OSC                       1U
    #define SYS_PLL                       1U
    #define MUX_MUL_DIV_GATE              2U
    #define SIRCOSC_VLP                   2U
    #define TRACE_SEL_FRAC_ENABLE         3U
    #define SIRCOSC_STOP                  3U
    #define MUX_GATE                      4U
    #define ASYNC_DIV1                    4U
    #define FIRCOSC                       4U
    #define ASYNC_DIV2                    5U
    #define SCS_RUN                       5U
    #define LPO32K_ENABLE                 5U
    #define FIRCOSC_VLP                   5U
    #define DIVCORE_RUN                   6U
    #define SCS_VLPR                      6U
    #define LPO1K_ENABLE                  6U
    #define FIRCOSC_STOP                  6U
    #define DIVCORE_VLPR                  7U
    #define RTC_SEL                       7U
    #define GATE                          7U
    #define DIVBUS_RUN                    8U
    #define LPO_SEL                       8U
    #define DIVBUS_VLPR                   9U
    #define CLKOUT_MUX                    9U
    #define PLAT_GATE                     9U
    #define DIVSLOW_RUN                   10U
    #define FTM_MUX                       10U
    #define DIVSLOW_VLPR                  11U

#elif (defined (CLOCK_IP_S32K142) || defined(CLOCK_IP_S32K144) || defined(CLOCK_IP_S32K146) || defined(CLOCK_IP_S32K148))

    #define NO_CALLBACK                   0U
    #define CLKOUT_SEL_DIV_ENABLE         1U
    #define SIRCOSC                       1U
    #define SYS_OSC                       1U
    #define SYS_PLL                       1U
    #define MUX_MUL_DIV_GATE              2U
    #define SIRCOSC_VLP                   2U
    #define TRACE_SEL_FRAC_ENABLE         3U
    #define SIRCOSC_STOP                  3U
    #define MUX_GATE                      4U
    #define ASYNC_DIV1                    4U
    #define FIRCOSC                       4U
    #define ASYNC_DIV2                    5U
    #define SCS_RUN                       5U
    #define LPO32K_ENABLE                 5U
    #define FIRCOSC_VLP                   5U
    #define DIVCORE_RUN                   6U
    #define SCS_VLPR                      6U
    #define LPO1K_ENABLE                  6U
    #define FIRCOSC_STOP                  6U
    #define DIVCORE_VLPR                  7U
    #define SCS_HSRUN                     7U
    #define GATE                          7U
    #define DIVCORE_HSRUN                 8U
    #define RTC_SEL                       8U
    #define DIVBUS_RUN                    9U
    #define LPO_SEL                       9U
    #define PLAT_GATE                     9U
    #define DIVBUS_VLPR                   10U
    #define CLKOUT_MUX                    10U
    #define DIVBUS_HSRUN                  11U
    #define FTM_MUX                       11U
    #define DIVSLOW_RUN                   12U
    #define DIVSLOW_VLPR                  13U
    #define DIVSLOW_HSRUN                 14U

#endif

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
#define CMU_FC_0_INSTANCE             0U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
#define CMU_FC_1_INSTANCE             1U
#endif

#define DIV_0_INDEX                   0U 
#define DIV_1_INDEX                   1U 
#define DIV_2_INDEX                   2U 
#define DIV_3_INDEX                   3U 
#define DIV_4_INDEX                   4U 
#define DIV_5_INDEX                   5U 
#define DIV_6_INDEX                   6U 
#define DIV_7_INDEX                   7U 
                                      
#define PCC_32_INDEX           32U
#define PCC_33_INDEX           33U
#define PCC_36_INDEX           36U
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
#define PCC_37_INDEX           37U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
#define PCC_38_INDEX           38U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
#define PCC_39_INDEX           39U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
#define PCC_43_INDEX           43U
#endif
#define PCC_44_INDEX           44U
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI1_CLK)
#define PCC_45_INDEX           45U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
#define PCC_46_INDEX           46U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
#define PCC_49_INDEX           49U
#endif
#define PCC_50_INDEX           50U
#define PCC_54_INDEX           54U
#define PCC_55_INDEX           55U
#define PCC_56_INDEX           56U
#define PCC_57_INDEX           57U
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
#define PCC_58_INDEX           58U
#endif
#define PCC_59_INDEX           59U
#define PCC_61_INDEX           61U
#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
#define PCC_62_INDEX           62U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
#define PCC_63_INDEX           63U
#endif
#define PCC_64_INDEX           64U
#define PCC_73_INDEX           73U
#define PCC_74_INDEX           74U
#define PCC_75_INDEX           75U
#define PCC_76_INDEX           76U
#define PCC_77_INDEX           77U
#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
#define PCC_84_INDEX           84U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
#define PCC_85_INDEX           85U
#endif
#define PCC_90_INDEX           90U
#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
#define PCC_97_INDEX           97U
#endif
#define PCC_102_INDEX          102U
#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
#define PCC_103_INDEX          103U
#endif
#define PCC_106_INDEX          106U
#define PCC_107_INDEX          107U
#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
#define PCC_108_INDEX          108U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
#define PCC_110_INDEX          110U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
#define PCC_111_INDEX          111U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
#define PCC_112_INDEX          112U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
#define PCC_113_INDEX          113U
#endif
#define PCC_115_INDEX          115U
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
#define PCC_118_INDEX          118U
#endif
#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
#define PCC_121_INDEX          121U
#endif
#define SIM_PLATCGC_0_INDEX    0U
#define SIM_PLATCGC_1_INDEX    1U
#define SIM_PLATCGC_2_INDEX    2U
#define SIM_PLATCGC_3_INDEX    3U
#define SIM_PLATCGC_4_INDEX    4U
#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))
#define SIM_PLATCGC_5_INDEX    5U
#endif

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/* Clock start constant section data */
#define MCU_START_SEC_CONST_8
#include "Mcu_MemMap.h"


#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))

const uint8 dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_DIV,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCD_FRAC,                                      /* MUX_MUL_DIV_GATE */
    SCG_ASYNC_DIV1,                                    /* ASYNC_DIV1 */
    SCG_ASYNC_DIV2,                                    /* ASYNC_DIV2 */
    SCG_DIVCORE_RUN,                                   /* DIVCORE_RUN */
    SCG_DIVCORE_VLPR,                                  /* DIVCORE_VLPR */
    SCG_DIVBUS_RUN,                                    /* DIVBUS_RUN */
    SCG_DIVBUS_VLPR,                                   /* DIVBUS_VLPR */
    SCG_DIVSLOW_RUN,                                   /* DIVSLOW_RUN */
    SCG_DIVSLOW_VLPR,                                  /* DIVSLOW_VLPR */
};
const uint8 dividertriggerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 xoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SOSC_ENABLE,                                       /* SYS_OSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 ircoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIRC_ENABLE,                                       /* SIRCOSC */
    SIRC_VLP_ENABLE,                                   /* SIRCOSC_VLP */
    SIRC_STOP_ENABLE,                                  /* SIRCOSC_STOP */
    FIRC_ENABLE,                                       /* FIRCOSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 gateCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_ENABLE,                                 /* CLKOUT_SEL_DIV_ENABLE */
    PCC_CGC_ENABLE,                                    /* MUX_MUL_DIV_GATE */
    PCC_CGC_ENABLE,                                    /* MUX_GATE */
    SIM_LPO32K_ENABLE,                                 /* LPO32K_ENABLE */
    SIM_LPO1K_ENABLE,                                  /* LPO1K_ENABLE */
    PCC_CGC_ENABLE,                                    /* GATE */
    NO_CALLBACK,                                       /* No callback */
    SIM_PLATCGC_CGC,                                   /* PLAT_GATE */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 fractional_dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pllCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 selectorCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_SEL,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCS_SELECT,                                    /* MUX_MUL_DIV_GATE */
    PCC_PCS_SELECT,                                    /* MUX_GATE */
    SCG_SCS_RUN_SEL,                                   /* SCS_RUN */
    SCG_SCS_VLPR_SEL,                                  /* SCS_VLPR */
    SIM_RTC_SEL,                                       /* RTC_SEL */
    SIM_LPO_SEL,                                       /* LPO_SEL */
    SCG_CLKOUT_SEL,                                    /* CLKOUT_MUX */
    SIM_FTMOPT_SEL,                                    /* FTM_MUX */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pcfsCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 cmuCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    CMU_FC_FCE_REF_CNT_LFREF_HFREF,                    /* CMU */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};

#elif (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))

const uint8 dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_DIV,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCD_FRAC,                                      /* MUX_MUL_DIV_GATE */
    SIM_TRACE_DIV_MUL,                                 /* TRACE_SEL_FRAC_ENABLE */
    SCG_ASYNC_DIV1,                                    /* ASYNC_DIV1 */
    SCG_ASYNC_DIV2,                                    /* ASYNC_DIV2 */
    SCG_DIVCORE_RUN,                                   /* DIVCORE_RUN */
    SCG_DIVCORE_VLPR,                                  /* DIVCORE_VLPR */
    SCG_DIVBUS_RUN,                                    /* DIVBUS_RUN */
    SCG_DIVBUS_VLPR,                                   /* DIVBUS_VLPR */
    SCG_DIVSLOW_RUN,                                   /* DIVSLOW_RUN */
    SCG_DIVSLOW_VLPR,                                  /* DIVSLOW_VLPR */
};
const uint8 dividertriggerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 xoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SOSC_ENABLE,                                       /* SYS_OSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 ircoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIRC_ENABLE,                                       /* SIRCOSC */
    SIRC_VLP_ENABLE,                                   /* SIRCOSC_VLP */
    SIRC_STOP_ENABLE,                                  /* SIRCOSC_STOP */
    FIRC_ENABLE,                                       /* FIRCOSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 gateCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_ENABLE,                                 /* CLKOUT_SEL_DIV_ENABLE */
    PCC_CGC_ENABLE,                                    /* MUX_MUL_DIV_GATE */
    SIM_TRACE_ENABLE,                                  /* TRACE_SEL_FRAC_ENABLE */
    PCC_CGC_ENABLE,                                    /* MUX_GATE */
    SIM_LPO32K_ENABLE,                                 /* LPO32K_ENABLE */
    SIM_LPO1K_ENABLE,                                  /* LPO1K_ENABLE */
    PCC_CGC_ENABLE,                                    /* GATE */
    NO_CALLBACK,                                       /* No callback */
    SIM_PLATCGC_CGC,                                   /* PLAT_GATE */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 fractional_dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pllCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SPLL_ENABLE,                                       /* SYS_PLL */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 selectorCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_SEL,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCS_SELECT,                                    /* MUX_MUL_DIV_GATE */
    SIM_TRACE_SEL,                                     /* TRACE_SEL_FRAC_ENABLE */
    PCC_PCS_SELECT,                                    /* MUX_GATE */
    SCG_SCS_RUN_SEL,                                   /* SCS_RUN */
    SCG_SCS_VLPR_SEL,                                  /* SCS_VLPR */
    SIM_RTC_SEL,                                       /* RTC_SEL */
    SIM_LPO_SEL,                                       /* LPO_SEL */
    SCG_CLKOUT_SEL,                                    /* CLKOUT_MUX */
    SIM_FTMOPT_SEL,                                    /* FTM_MUX */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pcfsCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 cmuCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};

#elif (defined (CLOCK_IP_S32K142) || defined(CLOCK_IP_S32K144) || defined(CLOCK_IP_S32K146) || defined(CLOCK_IP_S32K148))

const uint8 dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_DIV,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCD_FRAC,                                      /* MUX_MUL_DIV_GATE */
    SIM_TRACE_DIV_MUL,                                 /* TRACE_SEL_FRAC_ENABLE */
    SCG_ASYNC_DIV1,                                    /* ASYNC_DIV1 */
    SCG_ASYNC_DIV2,                                    /* ASYNC_DIV2 */
    SCG_DIVCORE_RUN,                                   /* DIVCORE_RUN */
    SCG_DIVCORE_VLPR,                                  /* DIVCORE_VLPR */
    SCG_DIVCORE_HSRUN,                                 /* DIVCORE_HSRUN */
    SCG_DIVBUS_RUN,                                    /* DIVBUS_RUN */
    SCG_DIVBUS_VLPR,                                   /* DIVBUS_VLPR */
    SCG_DIVBUS_HSRUN,                                  /* DIVBUS_HSRUN */
    SCG_DIVSLOW_RUN,                                   /* DIVSLOW_RUN */
    SCG_DIVSLOW_VLPR,                                  /* DIVSLOW_VLPR */
    SCG_DIVSLOW_HSRUN,                                 /* DIVSLOW_HSRUN */
};
const uint8 dividertriggerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 xoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SOSC_ENABLE,                                       /* SYS_OSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 ircoscCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIRC_ENABLE,                                       /* SIRCOSC */
    SIRC_VLP_ENABLE,                                   /* SIRCOSC_VLP */
    SIRC_STOP_ENABLE,                                  /* SIRCOSC_STOP */
    FIRC_ENABLE,                                       /* FIRCOSC */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 gateCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_ENABLE,                                 /* CLKOUT_SEL_DIV_ENABLE */
    PCC_CGC_ENABLE,                                    /* MUX_MUL_DIV_GATE */
    SIM_TRACE_ENABLE,                                  /* TRACE_SEL_FRAC_ENABLE */
    PCC_CGC_ENABLE,                                    /* MUX_GATE */
    SIM_LPO32K_ENABLE,                                 /* LPO32K_ENABLE */
    SIM_LPO1K_ENABLE,                                  /* LPO1K_ENABLE */
    PCC_CGC_ENABLE,                                    /* GATE */
    NO_CALLBACK,                                       /* No callback */
    SIM_PLATCGC_CGC,                                   /* PLAT_GATE */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 fractional_dividerCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pllCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SPLL_ENABLE,                                       /* SYS_PLL */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 selectorCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    SIM_CLKOUT_SEL,                                    /* CLKOUT_SEL_DIV_ENABLE */
    PCC_PCS_SELECT,                                    /* MUX_MUL_DIV_GATE */
    SIM_TRACE_SEL,                                     /* TRACE_SEL_FRAC_ENABLE */
    PCC_PCS_SELECT,                                    /* MUX_GATE */
    SCG_SCS_RUN_SEL,                                   /* SCS_RUN */
    SCG_SCS_VLPR_SEL,                                  /* SCS_VLPR */
    SCG_SCS_HSRUN_SEL,                                 /* SCS_HSRUN */
    SIM_RTC_SEL,                                       /* RTC_SEL */
    SIM_LPO_SEL,                                       /* LPO_SEL */
    SCG_CLKOUT_SEL,                                    /* CLKOUT_MUX */
    SIM_FTMOPT_SEL,                                    /* FTM_MUX */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 pcfsCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};
const uint8 cmuCallbackIndex[ALL_CALLBACKS_COUNT] = {
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
    NO_CALLBACK,                                       /* No callback */
};

#endif


/* Clock features mapping */
const uint8 clockFeatures[CLOCK_NAMES_NO][CLOCK_FEATURES_NO] =
/*   \
*************************************************************************************************************************************************************************************************************************************************  \
*********************************************     ****************       ****************   E   ********************       *************       *************       *************       *****************       **************       *************  \
*********************************************  I  ****************   C   ****************   X   ********************       *************   S   *************   D   *************       *****************       **************       *************  \
*********************************************  N  ****************   A   ****************   T   ********************   P   *************   E   *************   I   *************   G   *****************   P   **************       *************  \
*********************************************  S  ****************   L   ****************   E   ********************   O   *************   L   *************   V   *************   A   *****************   C   **************   C   *************  \
*********************************************  T  ****************   L   ****************   N   ********************   W   *************   E   *************   I   *************   T   *****************   F   **************   M   *************  \
*********************************************  A  ****************   B   ****************   S   ********************   E   *************   C   *************   D   *************   E   *****************   S   **************   U   *************  \
*********************************************  N  ****************   A   ****************   I   ********************   R   *************   T   *************   E   *************       *****************       **************       *************  \
*********************************************  C  ****************   C   ****************   O   ********************       *************   O   *************   R   *************       *****************       **************       *************  \
*********************************************  E  ****************   K   ****************   N   ********************       *************   R   *************       *************       *****************       **************       *************  \
*********************************************     ****************       ****************       *******************        *************       *************       *************       *****************       **************       *************  \
***********************************************************************************************************************************************************************************************************************************************/
{
/*   CLOCK_IS_OFF clock         */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   CLOCK_IS_OFF               */ 
/*   LPO_128K_CLK clock         */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   LPO_128K_CLK clock         */ 
/*   SIRC_CLK clock             */ {0U,                      SIRCOSC,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SIRC_CLK clock             */ 
/*   SIRC_VLP_CLK clock         */ {0U,                      SIRCOSC_VLP,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SIRC_VLP_CLK clock         */ 
/*   SIRC_STOP_CLK clock        */ {0U,                      SIRCOSC_STOP,                 0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SIRC_STOP_CLK clock        */ 
/*   FIRC_CLK clock             */ {0U,                      FIRCOSC,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FIRC_CLK clock             */ 
/*   FIRC_VLP_CLK clock         */ {0U,                      FIRCOSC_VLP,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FIRC_VLP_CLK clock         */ 
/*   FIRC_STOP_CLK clock        */ {0U,                      FIRCOSC_STOP,                 0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FIRC_STOP_CLK clock        */ 
/*   SOSC_CLK clock             */ {0U,                      SYS_OSC,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SOSC_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
/*   SPLL_CLK clock             */ {0U,                      SYS_PLL,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SPLL_CLK clock             */ 
#endif
/*   SIRCDIV1_CLK clock         */ {0U,                      ASYNC_DIV1,                   0U,                        0U,                 0U,                 DIV_0_INDEX,        0U,                      0U,                 0U},                 /*   SIRCDIV1_CLK clock         */ 
/*   SIRCDIV2_CLK clock         */ {0U,                      ASYNC_DIV2,                   0U,                        0U,                 0U,                 DIV_1_INDEX,        0U,                      0U,                 0U},                 /*   SIRCDIV2_CLK clock         */ 
/*   FIRCDIV1_CLK clock         */ {1U,                      ASYNC_DIV1,                   0U,                        0U,                 0U,                 DIV_2_INDEX,        0U,                      0U,                 0U},                 /*   FIRCDIV1_CLK clock         */ 
/*   FIRCDIV2_CLK clock         */ {1U,                      ASYNC_DIV2,                   0U,                        0U,                 0U,                 DIV_3_INDEX,        0U,                      0U,                 0U},                 /*   FIRCDIV2_CLK clock         */ 
/*   SOSCDIV1_CLK clock         */ {2U,                      ASYNC_DIV1,                   0U,                        0U,                 0U,                 DIV_4_INDEX,        0U,                      0U,                 0U},                 /*   SOSCDIV1_CLK clock         */ 
/*   SOSCDIV2_CLK clock         */ {2U,                      ASYNC_DIV2,                   0U,                        0U,                 0U,                 DIV_5_INDEX,        0U,                      0U,                 0U},                 /*   SOSCDIV2_CLK clock         */ 
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
/*   SPLLDIV1_CLK clock         */ {3U,                      ASYNC_DIV1,                   0U,                        0U,                 0U,                 DIV_6_INDEX,        0U,                      0U,                 0U},                 /*   SPLLDIV1_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
/*   SPLLDIV2_CLK clock         */ {3U,                      ASYNC_DIV2,                   0U,                        0U,                 0U,                 DIV_7_INDEX,        0U,                      0U,                 0U},                 /*   SPLLDIV2_CLK clock         */ 
#endif
/*   LPO_32K_CLK clock          */ {0U,                      LPO32K_ENABLE,                0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   LPO_32K_CLK clock          */ 
/*   LPO_1K_CLK clock           */ {0U,                      LPO1K_ENABLE,                 0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   LPO_1K_CLK clock           */ 
/*   TCLK0_REF_CLK clock        */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   tclk0_ref clock            */ 
/*   TCLK1_REF_CLK clock        */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   tclk1_ref clock            */ 
/*   TCLK2_REF_CLK clock        */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   tclk2_ref clock            */ 
/*   RTC_CLKIN clock            */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   rtc_clkin clock            */ 
/*   SCS_CLK clock              */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SCS_CLK clock              */ 
/*   SCS_RUN_CLK clock          */ {0U,                      SCS_RUN,                      0U,                        (uint8)RUN_MODE,    0U,                 0U,                 0U,                      0U,                 0U},                 /*   SCS_RUN_CLK clock          */ 
/*   SCS_VLPR_CLK clock         */ {0U,                      SCS_VLPR,                     0U,                        (uint8)VLPR_MODE,   0U,                 0U,                 0U,                      0U,                 0U},                 /*   SCS_VLPR_CLK clock         */ 
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
/*   SCS_HSRUN_CLK clock        */ {0U,                      SCS_HSRUN,                    0U,                        (uint8)HSRUN_MODE,  0U,                 0U,                 0U,                      0U,                 0U},                 /*   SCS_HSRUN_CLK clock        */ 
#endif
/*   CORE_CLK clock             */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   CORE_CLK clock             */ 
/*   CORE_RUN_CLK clock         */ {0U,                      DIVCORE_RUN,                  0U,                        (uint8)RUN_MODE,    0U,                 0U,                 0U,                      0U,                 0U},                 /*   CORE_RUN_CLK clock         */ 
/*   CORE_VLPR_CLK clock        */ {0U,                      DIVCORE_VLPR,                 0U,                        (uint8)VLPR_MODE,   0U,                 0U,                 0U,                      0U,                 0U},                 /*   CORE_VLPR_CLK clock        */ 
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
/*   CORE_HSRUN_CLK clock       */ {0U,                      DIVCORE_HSRUN,                0U,                        (uint8)HSRUN_MODE,  0U,                 0U,                 0U,                      0U,                 0U},                 /*   CORE_HSRUN_CLK clock       */ 
#endif
/*   BUS_CLK clock              */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   BUS_CLK clock              */ 
/*   BUS_RUN_CLK clock          */ {0U,                      DIVBUS_RUN,                   0U,                        (uint8)RUN_MODE,    0U,                 0U,                 0U,                      0U,                 0U},                 /*   BUS_RUN_CLK clock          */ 
/*   BUS_VLPR_CLK clock         */ {0U,                      DIVBUS_VLPR,                  0U,                        (uint8)VLPR_MODE,   0U,                 0U,                 0U,                      0U,                 0U},                 /*   BUS_VLPR_CLK clock         */ 
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
/*   BUS_HSRUN_CLK clock        */ {0U,                      DIVBUS_HSRUN,                 0U,                        (uint8)HSRUN_MODE,  0U,                 0U,                 0U,                      0U,                 0U},                 /*   BUS_HSRUN_CLK clock        */ 
#endif
/*   SLOW_CLK clock             */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SLOW_CLK clock             */ 
/*   SLOW_RUN_CLK clock         */ {0U,                      DIVSLOW_RUN,                  0U,                        (uint8)RUN_MODE,    0U,                 0U,                 0U,                      0U,                 0U},                 /*   SLOW_RUN_CLK clock         */ 
/*   SLOW_VLPR_CLK clock        */ {0U,                      DIVSLOW_VLPR,                 0U,                        (uint8)VLPR_MODE,   0U,                 0U,                 0U,                      0U,                 0U},                 /*   SLOW_VLPR_CLK clock        */ 
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
/*   SLOW_HSRUN_CLK clock       */ {0U,                      DIVSLOW_HSRUN,                0U,                        (uint8)HSRUN_MODE,  0U,                 0U,                 0U,                      0U,                 0U},                 /*   SLOW_HSRUN_CLK clock       */ 
#endif
/*   RTC_CLK clock              */ {0U,                      RTC_SEL,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   RTC_CLK clock              */ 
/*   LPO_CLK clock              */ {0U,                      LPO_SEL,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   LPO_CLK clock              */ 
/*   SCG_CLKOUT_CLK clock       */ {0U,                      CLKOUT_MUX,                   0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   SCG_CLKOUT_CLK clock       */ 
/*   FTM0_EXT_CLK clock         */ {0U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM0_EXT_CLK clock         */ 
/*   FTM1_EXT_CLK clock         */ {1U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM1_EXT_CLK clock         */ 
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
/*   FTM2_EXT_CLK clock         */ {2U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM2_EXT_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
/*   FTM3_EXT_CLK clock         */ {3U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM3_EXT_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
/*   FTM4_EXT_CLK clock         */ {4U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM4_EXT_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
/*   FTM5_EXT_CLK clock         */ {5U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM5_EXT_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
/*   FTM6_EXT_CLK clock         */ {6U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM6_EXT_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
/*   FTM7_EXT_CLK clock         */ {7U,                      FTM_MUX,                      0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   FTM7_EXT_CLK clock         */ 
#endif
/*   THE_LAST_PRODUCER_CLK      */ {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   THE_LAST_PRODUCER_CLK      */ 
/*   ADC0_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_59_INDEX,       0U,                 PCC_59_INDEX,            0U,                 0U},                 /*   ADC0_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
/*   ADC1_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_39_INDEX,       0U,                 PCC_39_INDEX,            0U,                 0U},                 /*   ADC1_CLK clock             */ 
#endif
/*   CLKOUT0_CLK clock          */ {0U,                      CLKOUT_SEL_DIV_ENABLE,        0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   CLKOUT0_CLK clock          */ 
/*   CMP0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_115_INDEX,           0U,                 0U},                 /*   CMP0_CLK clock             */
#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
/*   CMU0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_62_INDEX,            0U,                 0U},                 /*   CMU0_CLK clock             */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
/*   CMU1_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_63_INDEX,            0U,                 0U},                 /*   CMU1_CLK clock             */
#endif
/*   CRC0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_50_INDEX,            0U,                 0U},                 /*   CRC0_CLK clock             */ 
/*   DMA0_CLK clock             */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_2_INDEX,     0U,                 0U},                 /*   DMA0_CLK clock             */ 
/*   DMAMUX0_CLK clock          */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_33_INDEX,            0U,                 0U},                 /*   DMAMUX0_CLK clock          */ 
/*   EIM0_CLK clock             */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_4_INDEX,     0U,                 0U},                 /*   EIM0_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
/*   ENET_CLK clock             */ {0U,                      MUX_MUL_DIV_GATE,             0U,                        0U,                 PCC_121_INDEX,      PCC_121_INDEX,      PCC_121_INDEX,           0U,                 0U},                 /*   ENET_CLK clock             */ 
#endif
/*   ERM0_CLK clock             */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_3_INDEX,     0U,                 0U},                 /*   ERM0_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
/*   EWM0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_97_INDEX,            0U,                 0U},                 /*   EWM0_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
/*   FIRC_MON1_CLK clock        */ {0U,                      CMU,                          0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 CMU_FC_0_INSTANCE},  /*   FIRC_MON1_CLK clock        */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
/*   FIRC_MON2_CLK clock        */ {0U,                      CMU,                          0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 CMU_FC_1_INSTANCE},  /*   FIRC_MON2_CLK clock        */
#endif
/*   FLEXCAN0_CLK clock         */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_36_INDEX,            0U,                 0U},                 /*   FLEXCAN0_CLK clock         */ 
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
/*   FLEXCAN1_CLK clock         */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_37_INDEX,            0U,                 0U},                 /*   FLEXCAN1_CLK clock         */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
/*   FLEXCAN2_CLK clock         */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_43_INDEX,            0U,                 0U},                 /*   FLEXCAN2_CLK clock         */ 
#endif
/*   FlexIO_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_90_INDEX,       0U,                 PCC_90_INDEX,            0U,                 0U},                 /*   FlexIO_CLK clock           */
#if defined(FEATURE_CLOCK_IP_HAS_FTFC_CLK)
/*   FTFC_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_32_INDEX,            0U,                 0U},                 /*   FTFC_CLK clock             */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTFM_CLK)
/*   FTFM_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_32_INDEX,            0U,                 0U},                 /*   FTFM_CLK clock             */
#endif
/*   FTM0_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_56_INDEX,       0U,                 PCC_56_INDEX,            0U,                 0U},                 /*   FTM0_CLK clock             */ 
/*   FTM1_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_57_INDEX,       0U,                 PCC_57_INDEX,            0U,                 0U},                 /*   FTM1_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
/*   FTM2_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_58_INDEX,       0U,                 PCC_58_INDEX,            0U,                 0U},                 /*   FTM2_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
/*   FTM3_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_38_INDEX,       0U,                 PCC_38_INDEX,            0U,                 0U},                 /*   FTM3_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
/*   FTM4_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_110_INDEX,      0U,                 PCC_110_INDEX,           0U,                 0U},                 /*   FTM4_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
/*   FTM5_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_111_INDEX,      0U,                 PCC_111_INDEX,           0U,                 0U},                 /*   FTM5_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
/*   FTM6_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_112_INDEX,      0U,                 PCC_112_INDEX,           0U,                 0U},                 /*   FTM6_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
/*   FTM7_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_113_INDEX,       0U,                PCC_113_INDEX,           0U,                 0U},                 /*   FTM7_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
/*   GPIO0_CLK clock            */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_5_INDEX,     0U,                 0U},                 /*   GPIO0_CLK clock            */
#endif
/*   LPI2C0_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_102_INDEX,      0U,                 PCC_102_INDEX,           0U,                 0U},                 /*   LPI2C0_CLK clock           */ 
#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
/*   LPI2C1_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_103_INDEX,      0U,                 PCC_103_INDEX,           0U,                 0U},                 /*   LPI2C1_CLK clock           */ 
#endif
/*   LPIT0_CLK clock            */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_55_INDEX,       0U,                 PCC_55_INDEX,            0U,                 0U},                 /*   LPIT0_CLK clock            */ 
/*   LPSPI0_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_44_INDEX,       0U,                 PCC_44_INDEX,            0U,                 0U},                 /*   LPSPI0_CLK clock           */ 
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI1_CLK)
/*   LPSPI1_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_45_INDEX,       0U,                 PCC_45_INDEX,            0U,                 0U},                 /*   LPSPI1_CLK clock           */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
/*   LPSPI2_CLK clock           */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_46_INDEX,       0U,                 PCC_46_INDEX,            0U,                 0U},                 /*   LPSPI2_CLK clock           */ 
#endif
/*   LPTMR0_CLK clock           */ {0U,                      MUX_MUL_DIV_GATE,             0U,                        0U,                 PCC_64_INDEX,       PCC_64_INDEX,       PCC_64_INDEX,            0U,                 0U},                 /*   LPTMR0_CLK clock           */ 
/*   LPUART0_CLK clock          */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_106_INDEX,      0U,                 PCC_106_INDEX,           0U,                 0U},                 /*   LPUART0_CLK clock          */ 
/*   LPUART1_CLK clock          */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_107_INDEX,      0U,                 PCC_107_INDEX,           0U,                 0U},                 /*   LPUART1_CLK clock          */ 
#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
/*   LPUART2_CLK clock          */ {0U,                      MUX_GATE,                     0U,                        0U,                 PCC_108_INDEX,      0U,                 PCC_108_INDEX,           0U,                 0U},                 /*   LPUART2_CLK clock          */ 
#endif
/*   MPU0_CLK clock             */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_1_INDEX,     0U,                 0U},                 /*   MPU0_CLK clock             */ 
/*   MSCM0_CLK clock            */ {0U,                      PLAT_GATE,                    0U,                        0U,                 0U,                 0U,                 SIM_PLATCGC_0_INDEX,     0U,                 0U},                 /*   MSCM0_CLK clock            */ 
/*   PDB0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_54_INDEX,            0U,                 0U},                 /*   PDB0_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
/*   PDB1_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_49_INDEX,            0U,                 0U},                 /*   PDB1_CLK clock             */ 
#endif
/*   PORTA_CLK clock            */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_73_INDEX,            0U,                 0U},                 /*   PORTA_CLK clock            */ 
/*   PORTB_CLK clock            */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_74_INDEX,            0U,                 0U},                 /*   PORTB_CLK clock            */ 
/*   PORTC_CLK clock            */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_75_INDEX,            0U,                 0U},                 /*   PORTC_CLK clock            */ 
/*   PORTD_CLK clock            */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_76_INDEX,            0U,                 0U},                 /*   PORTD_CLK clock            */ 
/*   PORTE_CLK clock            */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_77_INDEX,            0U,                 0U},                 /*   PORTE_CLK clock            */ 
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
/*   QSPI_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 0U,                 0U,                 PCC_118_INDEX,           0U,                 0U},                 /*   QSPI_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
/*   QSPI_SFIF_CLK_HYP_PREMUX_CLK */ {0U,                    NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   QSPI_SFIF_CLK_HYP_PREMUX_CLK clock */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
/*   QSPI_SFIF_CLK */              {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   QSPI_SFIF_CLK clock */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
/*   QSPI_2xSFIF_CLK */            {0U,                      NO_CALLBACK,                  0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   QSPI_2xSFIF_CLK clock */ 
#endif
/*   RTC0_CLK clock             */ {0U,                      GATE,                         0U,                        0U,                 0U,                 0U,                 PCC_61_INDEX,            0U,                 0U},                 /*   RTC0_CLK clock             */ 
#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
/*   SAI0_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 0U,                 0U,                 PCC_84_INDEX,            0U,                 0U},                 /*   SAI0_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
/*   SAI1_CLK clock             */ {0U,                      MUX_GATE,                     0U,                        0U,                 0U,                 0U,                 PCC_85_INDEX,            0U,                 0U},                 /*   SAI1_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
/*   TRACE_CLK clock            */ {0U,                      TRACE_SEL_FRAC_ENABLE,        0U,                        0U,                 0U,                 0U,                 0U,                      0U,                 0U},                 /*   TRACE_CLK clock            */
#endif
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_8
#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_16
#include "Mcu_MemMap.h"

/*!
 * @brief Converts a clock name to a selector entry hardware value
 */
const uint8 selectorEntry_hardwareValue[CLOCK_NAMES_NO] = {
    
    3U,                                       /*!< CLOCK_IS_OFF                            */
    10U,                                      /*!< LPO_128K_CLK                            */
    1U,                                       /*!< SIRC_CLK                                */
    1U,                                       /*!< SIRC_VLP_CLK                            */
    1U,                                       /*!< SIRC_STOP_CLK                           */
    0U,                                       /*!< FIRC_CLK                                */
    1U,                                       /*!< FIRC_VLP_CLK                            */
    1U,                                       /*!< FIRC_STOP_CLK                           */
    2U,                                       /*!< SOSC_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    0U,                                       /*!< SPLL_CLK                                */
#endif
    4U,                                       /*!< SIRCDIV1_CLK                            */
    4U,                                       /*!< SIRCDIV2_CLK                            */
    3U,                                       /*!< FIRCDIV1_CLK                            */
    6U,                                       /*!< FIRCDIV2_CLK                            */
    0U,                                       /*!< SOSCDIV1_CLK                            */
    2U,                                       /*!< SOSCDIV2_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
    16U,                                      /*!< SPLLDIV1_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
    8U,                                       /*!< SPLLDIV2_CLK                            */
#endif
    1U,                                       /*!< LPO_32K_CLK                             */
    0U,                                       /*!< LPO_1K_CLK                              */
    0U,                                       /*!< TCLK0_REF_CLK                           */
    1U,                                       /*!< TCLK1_REF_CLK                           */
    2U,                                       /*!< TCLK2_REF_CLK                           */
    2U,                                       /*!< RTC_CLKIN                               */
    0U,                                       /*!< SCS_CLK                                 */
    0U,                                       /*!< SCS_RUN_CLK                             */
    0U,                                       /*!< SCS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    0U,                                       /*!< SCS_HSRUN_CLK                           */
#endif
    7U,                                       /*!< CORE_CLK                                */
    0U,                                       /*!< CORE_RUN_CLK                            */
    0U,                                       /*!< CORE_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< CORE_HSRUN_CLK                          */
#endif
    9U,                                       /*!< BUS_CLK                                 */
    0U,                                       /*!< BUS_RUN_CLK                             */
    0U,                                       /*!< BUS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< BUS_HSRUN_CLK                           */
#endif
    0U,                                       /*!< SLOW_CLK                                */
    0U,                                       /*!< SLOW_RUN_CLK                            */
    0U,                                       /*!< SLOW_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< SLOW_HSRUN_CLK                          */
#endif
    14U,                                      /*!< RTC_CLK                                 */
    12U,                                      /*!< LPO_CLK                                 */
    0U,                                       /*!< SCG_CLKOUT_CLK                          */
    0U,                                       /*!< FTM0_EXT_CLK                            */
    0U,                                       /*!< FTM1_EXT_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
    0U,                                       /*!< FTM2_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
    0U,                                       /*!< FTM3_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    0U,                                       /*!< FTM4_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
    0U,                                       /*!< FTM5_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
    0U,                                       /*!< FTM6_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
    0U,                                       /*!< FTM7_EXT_CLK                            */
#endif
    0U,                                       /*!< PRODUCERS_NO                            */
    0U,                                       /*!< ADC0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
    0U,                                       /*!< ADC1_CLK                                */
#endif
    0U,                                       /*!< CLKOUT0_CLK                             */
    0U,                                       /*!< CMP0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)                                                 
    0U,                                       /*!< CMU0_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)                                                 
    0U,                                       /*!< CMU1_CLK                                */
#endif                                                                                     
    0U,                                       /*!< CRC0_CLK                                */
    0U,                                       /*!< DMA0_CLK                                */
    0U,                                       /*!< DMAMUX0_CLK                             */
    0U,                                       /*!< EIM0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)                                                 
    0U,                                       /*!< ENET_CLK                                */
#endif                                                                                     
    0U,                                       /*!< ERM0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)                                                 
    0U,                                       /*!< EWM0_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
    0U,                                       /*!< FIRC_MON1_CLK                           */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
    0U,                                       /*!< FIRC_MON2_CLK                           */
#endif
    0U,                                       /*!< FLEXCAN0_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
    0U,                                       /*!< FLEXCAN1_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
    0U,                                       /*!< FLEXCAN2_CLK                            */
#endif
    0U,                                       /*!< FlexIO_CLK                              */
#if defined(FEATURE_CLOCK_IP_HAS_FTFC_CLK)
    0U,                                       /*!< FTFC_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_FTFM_CLK)                                                 
    0U,                                       /*!< FTFM_CLK                                */
#endif                                                                                     
    0U,                                       /*!< FTM0_CLK                                */
    0U,                                       /*!< FTM1_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)                                                 
    0U,                                       /*!< FTM2_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
    0U,                                       /*!< FTM3_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)                                                 
    0U,                                       /*!< FTM4_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)                                                 
    0U,                                       /*!< FTM5_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)                                                 
    0U,                                       /*!< FTM6_CLK                                */
#endif                                                                                     
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)                                                 
    0U,                                       /*!< FTM7_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
    0U,                                       /*!< GPIO0_CLK                               */
#endif
    0U,                                       /*!< LPI2C0_CLK                              */
#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)                                               
    0U,                                       /*!< LPI2C1_CLK                              */
#endif
    0U,                                       /*!< LPIT0_CLK                               */
    0U,                                       /*!< LPSPI0_CLK                              */
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI1_CLK)                                               
    0U,                                       /*!< LPSPI1_CLK                              */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
    0U,                                       /*!< LPSPI2_CLK                              */
#endif                                                                                     
    0U,                                       /*!< LPTMR0_CLK                              */
    0U,                                       /*!< LPUART0_CLK                             */
    0U,                                       /*!< LPUART1_CLK                             */
#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)                                              
    0U,                                       /*!< LPUART2_CLK                             */
#endif
    0U,                                       /*!< MPU0_CLK                                */
    0U,                                       /*!< MSCM0_CLK                               */
    0U,                                       /*!< PDB0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)                                                 
    0U,                                       /*!< PDB1_CLK                                */
#endif
    0U,                                       /*!< PORTA_CLK                               */
    0U,                                       /*!< PORTB_CLK                               */
    0U,                                       /*!< PORTC_CLK                               */
    0U,                                       /*!< PORTD_CLK                               */
    0U,                                       /*!< PORTE_CLK                               */
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
    11U,                                      /*!< QSPI_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
    5U,                                       /*!< QSPI_SFIF_CLK_HYP_PREMUX_CLK            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
    13U,                                      /*!< QSPI_SFIF_CLK                           */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
    15U,                                      /*!< QSPI_2xSFIF_CLK                         */
#endif
    0U,                                       /*!< RTC0_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)                                                 
    0U,                                       /*!< SAI0_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
    0U,                                       /*!< SAI1_CLK                                */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
    0U,                                       /*!< TRACE_CLK                               */
#endif
};

/*!
 * @brief Converts a clock name to a selector entry hardware value
 */
const uint8 selectorEntrySCS_hardwareValue[CLOCK_PRODUCERS_NO + 1U] = {
    
    0U,                                       /*!< CLOCK_IS_OFF                            */
    0U,                                       /*!< LPO_128K_CLK                            */
    2U,                                       /*!< SIRC_CLK                                */
    0U,                                       /*!< SIRC_VLP_CLK                            */
    0U,                                       /*!< SIRC_STOP_CLK                           */
    3U,                                       /*!< FIRC_CLK                                */
    0U,                                       /*!< FIRC_VLP_CLK                            */
    0U,                                       /*!< FIRC_STOP_CLK                           */
    1U,                                       /*!< SOSC_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    6U,                                       /*!< SPLL_CLK                                */
#endif
    0U,                                       /*!< SIRCDIV1_CLK                            */
    0U,                                       /*!< SIRCDIV2_CLK                            */
    0U,                                       /*!< FIRCDIV1_CLK                            */
    0U,                                       /*!< FIRCDIV2_CLK                            */
    0U,                                       /*!< SOSCDIV1_CLK                            */
    0U,                                       /*!< SOSCDIV2_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
    0U,                                       /*!< SPLLDIV1_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
    0U,                                       /*!< SPLLDIV2_CLK                            */
#endif
    0U,                                       /*!< LPO_32K_CLK                             */
    0U,                                       /*!< LPO_1K_CLK                              */
    0U,                                       /*!< TCLK0_REF_CLK                           */
    0U,                                       /*!< TCLK1_REF_CLK                           */
    0U,                                       /*!< TCLK2_REF_CLK                           */
    0U,                                       /*!< RTC_CLKIN                               */
    0U,                                       /*!< SCS_CLK                                 */
    0U,                                       /*!< SCS_RUN_CLK                             */
    0U,                                       /*!< SCS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    0U,                                       /*!< SCS_HSRUN_CLK                           */
#endif
    0U,                                       /*!< CORE_CLK                                */
    0U,                                       /*!< CORE_RUN_CLK                            */
    0U,                                       /*!< CORE_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< CORE_HSRUN_CLK                          */
#endif
    0U,                                       /*!< BUS_CLK                                 */
    0U,                                       /*!< BUS_RUN_CLK                             */
    0U,                                       /*!< BUS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< BUS_HSRUN_CLK                           */
#endif
    0U,                                       /*!< SLOW_CLK                                */
    0U,                                       /*!< SLOW_RUN_CLK                            */
    0U,                                       /*!< SLOW_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< SLOW_HSRUN_CLK                          */
#endif
    0U,                                       /*!< RTC_CLK                                 */
    0U,                                       /*!< LPO_CLK                                 */
    0U,                                       /*!< SCG_CLKOUT_CLK                          */
    0U,                                       /*!< FTM0_EXT_CLK                            */
    0U,                                       /*!< FTM1_EXT_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
    0U,                                       /*!< FTM2_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
    0U,                                       /*!< FTM3_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    0U,                                       /*!< FTM4_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
    0U,                                       /*!< FTM5_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
    0U,                                       /*!< FTM6_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
    0U,                                       /*!< FTM7_EXT_CLK                            */
#endif
};

/*!
 * @brief Converts a clock name to a selector entry hardware value
 */
const uint8 selectorEntryPCS_hardwareValue[CLOCK_PRODUCERS_NO + 1U] = {
    
    0U,                                       /*!< CLOCK_IS_OFF                            */
    0U,                                       /*!< LPO_128K_CLK                            */
    0U,                                       /*!< SIRC_CLK                                */
    0U,                                       /*!< SIRC_VLP_CLK                            */
    0U,                                       /*!< SIRC_STOP_CLK                           */
    0U,                                       /*!< FIRC_CLK                                */
    0U,                                       /*!< FIRC_VLP_CLK                            */
    0U,                                       /*!< FIRC_STOP_CLK                           */
    0U,                                       /*!< SOSC_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    0U,                                       /*!< SPLL_CLK                                */
#endif
    2U,                                       /*!< SIRCDIV1_CLK                            */
    2U,                                       /*!< SIRCDIV2_CLK                            */
    3U,                                       /*!< FIRCDIV1_CLK                            */
    3U,                                       /*!< FIRCDIV2_CLK                            */
    1U,                                       /*!< SOSCDIV1_CLK                            */
    1U,                                       /*!< SOSCDIV2_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
    6U,                                       /*!< SPLLDIV1_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
    6U,                                       /*!< SPLLDIV2_CLK                            */
#endif
    2U,                                       /*!< LPO_32K_CLK                             */
    3U,                                       /*!< LPO_1K_CLK                              */
    0U,                                       /*!< TCLK0_REF_CLK                           */
    0U,                                       /*!< TCLK1_REF_CLK                           */
    0U,                                       /*!< TCLK2_REF_CLK                           */
    0U,                                       /*!< RTC_CLKIN                               */
    0U,                                       /*!< SCS_CLK                                 */
    0U,                                       /*!< SCS_RUN_CLK                             */
    0U,                                       /*!< SCS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    0U,                                       /*!< SCS_HSRUN_CLK                           */
#endif
    0U,                                       /*!< CORE_CLK                                */
    0U,                                       /*!< CORE_RUN_CLK                            */
    0U,                                       /*!< CORE_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< CORE_HSRUN_CLK                          */
#endif
    0U,                                       /*!< BUS_CLK                                 */
    0U,                                       /*!< BUS_RUN_CLK                             */
    0U,                                       /*!< BUS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< BUS_HSRUN_CLK                           */
#endif
    0U,                                       /*!< SLOW_CLK                                */
    0U,                                       /*!< SLOW_RUN_CLK                            */
    0U,                                       /*!< SLOW_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    0U,                                       /*!< SLOW_HSRUN_CLK                          */
#endif
    0U,                                       /*!< RTC_CLK                                 */
    0U,                                       /*!< LPO_CLK                                 */
    0U,                                       /*!< SCG_CLKOUT_CLK                          */
    0U,                                       /*!< FTM0_EXT_CLK                            */
    0U,                                       /*!< FTM1_EXT_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
    0U,                                       /*!< FTM2_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
    0U,                                       /*!< FTM3_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    0U,                                       /*!< FTM4_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
    0U,                                       /*!< FTM5_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
    0U,                                       /*!< FTM6_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
    0U,                                       /*!< FTM7_EXT_CLK                            */
#endif
};

/*
 * @brief Converts a divider value to a hardware value
 */
const uint8 dividerValue_hardwareValue[65U] = {
    0U,                                       /*!< 0                          */
    1U,                                       /*!< 1                          */
    2U,                                       /*!< 2                          */
    0U,                                       /*!< 3                          */
    3U,                                       /*!< 4                          */
    0U,                                       /*!< 5                          */
    0U,                                       /*!< 6                          */
    0U,                                       /*!< 7                          */
    4U,                                       /*!< 8                          */
    0U,                                       /*!< 9                          */
    0U,                                       /*!< 10                          */
    0U,                                       /*!< 11                          */
    0U,                                       /*!< 12                          */
    0U,                                       /*!< 13                          */
    0U,                                       /*!< 14                          */
    0U,                                       /*!< 15                          */
    5U,                                       /*!< 16                          */
    0U,                                       /*!< 17                          */
    0U,                                       /*!< 18                          */
    0U,                                       /*!< 19                          */
    0U,                                       /*!< 20                          */
    0U,                                       /*!< 21                          */
    0U,                                       /*!< 22                          */
    0U,                                       /*!< 23                          */
    0U,                                       /*!< 24                          */
    0U,                                       /*!< 25                          */
    0U,                                       /*!< 26                          */
    0U,                                       /*!< 27                          */
    0U,                                       /*!< 28                          */
    0U,                                       /*!< 29                          */
    0U,                                       /*!< 30                          */
    0U,                                       /*!< 31                          */
    6U,                                       /*!< 32                          */
    0U,                                       /*!< 33                          */
    0U,                                       /*!< 34                          */
    0U,                                       /*!< 35                          */
    0U,                                       /*!< 36                          */
    0U,                                       /*!< 37                          */
    0U,                                       /*!< 38                          */
    0U,                                       /*!< 39                          */
    0U,                                       /*!< 40                          */
    0U,                                       /*!< 41                          */
    0U,                                       /*!< 42                          */
    0U,                                       /*!< 43                          */
    0U,                                       /*!< 44                          */
    0U,                                       /*!< 45                          */
    0U,                                       /*!< 46                          */
    0U,                                       /*!< 47                          */
    0U,                                       /*!< 48                          */
    0U,                                       /*!< 49                          */
    0U,                                       /*!< 50                          */
    0U,                                       /*!< 51                          */
    0U,                                       /*!< 52                          */
    0U,                                       /*!< 53                          */
    0U,                                       /*!< 54                          */
    0U,                                       /*!< 55                          */
    0U,                                       /*!< 56                          */
    0U,                                       /*!< 57                          */
    0U,                                       /*!< 58                          */
    0U,                                       /*!< 59                          */
    0U,                                       /*!< 60                          */
    0U,                                       /*!< 61                          */
    0U,                                       /*!< 62                          */
    0U,                                       /*!< 63                          */
    7U,                                       /*!< 64                          */
}; 

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_16
#include "Mcu_MemMap.h"


/* Clock start constant section data */
#define MCU_START_SEC_CONST_32
#include "Mcu_MemMap.h"

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
    #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
/* Clock name types */
const uint32 clockNameTypes[CLOCK_NAMES_NO] =
{
/*   CLOCK_IS_OFF clock         */ 0U,                                                                                                                                                                                          /*   CLOCK_IS_OFF               */   
/*   LPO_128K_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPO_128K_CLK clock         */   
/*   SIRC_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SIRC_CLK clock             */   
/*   SIRC_VLP_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SIRC_VLP_CLK clock         */   
/*   SIRC_STOP_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SIRC_STOP_CLK clock        */   
/*   FIRC_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRC_CLK clock             */   
/*   FIRC_VLP_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRC_VLP_CLK clock         */   
/*   FIRC_STOP_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRC_STOP_CLK clock        */   
/*   SOSC_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SOSC_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
/*   SPLL_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SPLL_CLK clock             */   
#endif
/*   SIRCDIV1_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SIRCDIV1_CLK clock         */   
/*   SIRCDIV2_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SIRCDIV2_CLK clock         */   
/*   FIRCDIV1_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRCDIV1_CLK clock         */   
/*   FIRCDIV2_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRCDIV2_CLK clock         */   
/*   SOSCDIV1_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SOSCDIV1_CLK clock         */   
/*   SOSCDIV2_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SOSCDIV2_CLK clock         */   
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
/*   SPLLDIV1_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SPLLDIV1_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
/*   SPLLDIV2_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SPLLDIV2_CLK clock         */   
#endif
/*   LPO_32K_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPO_32K_CLK clock          */   
/*   LPO_1K_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPO_1K_CLK clock           */   
/*   tclk0_ref clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   tclk0_ref clock            */   
/*   tclk1_ref clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   tclk1_ref clock            */   
/*   tclk2_ref clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   tclk2_ref clock            */   
/*   rtc_clkin clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   rtc_clkin clock            */   
/*   SCS_CLK clock              */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SCS_CLK clock              */   
/*   SCS_RUN_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SCS_RUN_CLK clock          */   
/*   SCS_VLPR_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SCS_VLPR_CLK clock         */   
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
/*   SCS_HSRUN_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SCS_HSRUN_CLK clock        */   
#endif
/*   CORE_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CORE_CLK clock             */   
/*   CORE_RUN_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CORE_RUN_CLK clock         */   
/*   CORE_VLPR_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CORE_VLPR_CLK clock        */   
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
/*   CORE_HSRUN_CLK clock       */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CORE_HSRUN_CLK clock       */   
#endif
/*   BUS_CLK clock              */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   BUS_CLK clock              */   
/*   BUS_RUN_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   BUS_RUN_CLK clock          */   
/*   BUS_VLPR_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   BUS_VLPR_CLK clock         */   
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
/*   BUS_HSRUN_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   BUS_HSRUN_CLK clock        */   
#endif
/*   SLOW_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SLOW_CLK clock             */   
/*   SLOW_RUN_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SLOW_RUN_CLK clock         */   
/*   SLOW_VLPR_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SLOW_VLPR_CLK clock        */   
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
/*   SLOW_HSRUN_CLK clock       */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SLOW_HSRUN_CLK clock       */   
#endif
/*   RTC_CLK clock              */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   RTC_CLK clock              */   
/*   LPO_CLK clock              */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPO_CLK clock              */   
/*   SCG_CLKOUT_CLK clock       */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SCG_CLKOUT_CLK clock       */   
/*   FTM0_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM0_EXT_CLK clock         */   
/*   FTM1_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM1_EXT_CLK clock         */   
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
/*   FTM2_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM2_EXT_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
/*   FTM3_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM3_EXT_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
/*   FTM4_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM4_EXT_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
/*   FTM5_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM5_EXT_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
/*   FTM6_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM6_EXT_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
/*   FTM7_EXT_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM7_EXT_CLK clock         */   
#endif
/*   THE_LAST_PRODUCER_CLK      */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   THE_LAST_PRODUCER_CLK      */   
/*   ADC0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   ADC0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
/*   ADC1_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   ADC1_CLK clock             */   
#endif
/*   CLKOUT0_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CLKOUT0_CLK clock          */   
/*   CMP0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CMP0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
/*   CMU0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CMU0_CLK clock             */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
/*   CMU1_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CMU1_CLK clock             */
#endif
/*   CRC0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   CRC0_CLK clock             */   
/*   DMA0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   DMA0_CLK clock             */   
/*   DMAMUX0_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   DMAMUX0_CLK clock          */   
/*   EIM0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   EIM0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
/*   ENET_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   ENET_CLK clock             */   
#endif
/*   ERM0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   ERM0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
/*   EWM0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   EWM0_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
/*   FIRC_MON1_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRC_MON1_CLK clock        */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
/*   FIRC_MON2_CLK clock        */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FIRC_MON2_CLK clock        */   
#endif
/*   FLEXCAN0_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FLEXCAN0_CLK clock         */   
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
/*   FLEXCAN1_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FLEXCAN1_CLK clock         */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
/*   FLEXCAN2_CLK clock         */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FLEXCAN2_CLK clock         */   
#endif
/*   FlexIO_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FlexIO_CLK clock           */   
/*   FTFM clock                 */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTFM clock            */   \
/*   FTM0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM0_CLK clock             */   
/*   FTM1_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM1_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
/*   FTM2_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM2_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
/*   FTM3_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM3_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
/*   FTM4_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM4_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
/*   FTM5_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM5_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
/*   FTM6_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM6_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
/*   FTM7_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   FTM7_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
/*   GPIO0_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   GPIO0_CLK clock            */
#endif 
/*   LPI2C0_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPI2C0_CLK clock           */   
#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
/*   LPI2C1_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPI2C1_CLK clock           */   
#endif
/*   LPIT0_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPIT0_CLK clock            */   
/*   LPSPI0_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPSPI0_CLK clock           */   
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI1_CLK)
/*   LPSPI1_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPSPI1_CLK clock           */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
/*   LPSPI2_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPSPI2_CLK clock           */   
#endif
/*   LPTMR0_CLK clock           */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPTMR0_CLK clock           */   
/*   LPUART0_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPUART0_CLK clock          */   
/*   LPUART1_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPUART1_CLK clock          */   
#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
/*   LPUART2_CLK clock          */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   LPUART2_CLK clock          */   
#endif
/*   MPU0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   MPU0_CLK clock             */   
/*   MSCM0_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   MSCM0_CLK clock            */  
/*   PDB0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PDB0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
/*   PDB1_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PDB1_CLK clock             */   
#endif
/*   PORTA_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PORTA_CLK clock            */   
/*   PORTB_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PORTB_CLK clock            */   
/*   PORTC_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PORTC_CLK clock            */   
/*   PORTD_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PORTD_CLK clock            */   
/*   PORTE_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   PORTE_CLK clock            */   
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
/*   QSPI_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   QSPI_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
/*   QSPI_SFIF_CLK_HYP_PREMUX_CLK */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,       /*   QSPI_SFIF_CLK_HYP_PREMUX_CLK clock */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
/*   QSPI_SFIF_CLK */              (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   QSPI_SFIF_CLK clock */ 
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
/*   QSPI_2xSFIF_CLK */            (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   QSPI_2xSFIF_CLK clock */ 
#endif
/*   RTC0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   RTC0_CLK clock             */   
#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
/*   SAI0_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SAI0_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
/*   SAI1_CLK clock             */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   SAI1_CLK clock             */   
#endif
#if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
/*   TRACE_CLK clock            */ (IRCOSC_OBJECT | XOSC_OBJECT | PLL_OBJECT | SELECTOR_OBJECT | DIVIDER_OBJECT | DIVIDER_TRIGGER_OBJECT | FRAC_DIV_OBJECT | EXT_SIG_OBJECT | GATE_OBJECT | PCFS_OBJECT | CMU_OBJECT) ,         /*   TRACE_CLK clock            */
#endif 
};
    #endif /* CLOCK_IP_DEV_ERROR_DETECT == STD_ON */
#endif /* CLOCK_IP_DEV_ERROR_DETECT */

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_32
#include "Mcu_MemMap.h"



/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

volatile scgPeriphAsyncDiv_Type* const scgPeriphAsyncDivs[PERIPH_ASYNC_COUNT] =
{

     (volatile scgPeriphAsyncDiv_Type*)( &(IP_SCG->SIRCDIV) ),
     (volatile scgPeriphAsyncDiv_Type*)( &(IP_SCG->FIRCDIV) ),
     (volatile scgPeriphAsyncDiv_Type*)( &(IP_SCG->SOSCDIV) ),
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
     (volatile scgPeriphAsyncDiv_Type*)( &(IP_SCG->SPLLDIV) ),
#endif

};

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
volatile ClockMonitor_Type* const cmu[CMU_INSTANCES_ARRAY_SIZE] =
{
    (volatile ClockMonitor_Type*)IP_CMU0,
    (volatile ClockMonitor_Type*)IP_CMU1,
};
Clock_Ip_NameType const cmuNames[CMU_INSTANCES_ARRAY_SIZE] =
{
        FIRC_MON1_CLK,
        FIRC_MON2_CLK,
};
cmuInfoType const cmuInfo[CMU_INFO_SIZE] =  {

/* CMU FIRC_MON1_CLK */
{
    FIRC_MON1_CLK,                                   /* Name of the clock that supports cmu (clock monitor) */
    SIRC_CLK,                                        /* Name of the reference clock */
    BUS_CLK,                                         /* Name of the bus clock */
    (volatile ClockMonitor_Type*)IP_CMU0,            /* Cmu instance */
},
/* CMU FIRC_MON2_CLK */
{
    FIRC_MON2_CLK,                                   /* Name of the clock that supports cmu (clock monitor) */
    SIRC_CLK,                                        /* Name of the reference clock */
    BUS_CLK,                                         /* Name of the bus clock */
    (volatile ClockMonitor_Type*)IP_CMU1,            /* Cmu instance */
},
};
#endif



const clock_name_source_type sourceType_clockName[CLOCK_PRODUCERS_NO + 1U] = {
    UKNOWN_TYPE,                               /*!< CLOCK_IS_OFF                            */
    IRCOSC_TYPE,                               /*!< LPO_128K_CLK                            */
    IRCOSC_TYPE,                               /*!< SIRC_CLK                                */
    IRCOSC_TYPE,                               /*!< SIRC_VLP_CLK                            */
    IRCOSC_TYPE,                               /*!< SIRC_STOP_CLK                           */
    IRCOSC_TYPE,                               /*!< FIRC_CLK                                */
    IRCOSC_TYPE,                               /*!< FIRC_VLP_CLK                            */
    IRCOSC_TYPE,                               /*!< FIRC_STOP_CLK                           */
    XOSC_TYPE,                                 /*!< SOSC_CLK                                */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    PLL_TYPE,                                  /*!< SPLL_CLK                                */
#endif
    IRCOSC_TYPE,                               /*!< SIRCDIV1_CLK                            */
    IRCOSC_TYPE,                               /*!< SIRCDIV2_CLK                            */
    IRCOSC_TYPE,                               /*!< FIRCDIV1_CLK                            */
    IRCOSC_TYPE,                               /*!< FIRCDIV2_CLK                            */
    XOSC_TYPE,                                 /*!< SOSCDIV1_CLK                            */
    XOSC_TYPE,                                 /*!< SOSCDIV2_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
    PLL_TYPE,                                  /*!< SPLLDIV1_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
    PLL_TYPE,                                  /*!< SPLLDIV2_CLK                            */
#endif
    IRCOSC_TYPE,                               /*!< LPO_32K_CLK                             */
    IRCOSC_TYPE,                               /*!< LPO_1K_CLK                              */
    EXT_CLK_TYPE,                              /*!< TCLK0_REF_CLK                           */
    EXT_CLK_TYPE,                              /*!< TCLK1_REF_CLK                           */
    EXT_CLK_TYPE,                              /*!< TCLK2_REF_CLK                           */
    EXT_CLK_TYPE,                              /*!< RTC_CLKIN                               */
    UKNOWN_TYPE,                               /*!< SCS_CLK                                 */
    UKNOWN_TYPE,                               /*!< SCS_RUN_CLK                             */
    UKNOWN_TYPE,                               /*!< SCS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    UKNOWN_TYPE,                               /*!< SCS_HSRUN_CLK                           */
#endif
    UKNOWN_TYPE,                               /*!< CORE_CLK                                */
    UKNOWN_TYPE,                               /*!< CORE_RUN_CLK                            */
    UKNOWN_TYPE,                               /*!< CORE_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    UKNOWN_TYPE,                               /*!< CORE_HSRUN_CLK                          */
#endif
    UKNOWN_TYPE,                               /*!< BUS_CLK                                 */
    UKNOWN_TYPE,                               /*!< BUS_RUN_CLK                             */
    UKNOWN_TYPE,                               /*!< BUS_VLPR_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    UKNOWN_TYPE,                               /*!< BUS_HSRUN_CLK                           */
#endif
    UKNOWN_TYPE,                               /*!< SLOW_CLK                                */
    UKNOWN_TYPE,                               /*!< SLOW_RUN_CLK                            */
    UKNOWN_TYPE,                               /*!< SLOW_VLPR_CLK                           */
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    UKNOWN_TYPE,                               /*!< SLOW_HSRUN_CLK                          */
#endif
    UKNOWN_TYPE,                               /*!< RTC_CLK                                 */
    UKNOWN_TYPE,                               /*!< LPO_CLK                                 */
    UKNOWN_TYPE,                               /*!< SCG_CLKOUT_CLK                          */
    UKNOWN_TYPE,                               /*!< FTM0_EXT_CLK                            */
    UKNOWN_TYPE,                               /*!< FTM1_EXT_CLK                            */
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM2_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM3_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM4_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM5_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM6_EXT_CLK                            */
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
    UKNOWN_TYPE,                               /*!< FTM7_EXT_CLK                            */
#endif
};

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
const Clock_Ip_NameType HwPllName[NUMBER_OF_HARDWARE_PLL] =
{
    SPLL_CLK         /* SPLL_CLK clock */
};
#endif

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/

