/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/


#ifndef IRQ_TYPES_H
#define IRQ_TYPES_H


#define Irq_SOI()

/**
 * End-Of-Interrupt. Called by the OS it wants to clear the interrupt.
 */
void Irq_EOI( void );


typedef enum
{
    /* Software interrupts. */
    INTC_SSCIR0_CLR0,		// 0
    INTC_SSCIR0_CLR1,		// 1
    INTC_SSCIR0_CLR2,		// 2
    INTC_SSCIR0_CLR3,		// 3
    INTC_SSCIR0_CLR4,		// 4
    INTC_SSCIR0_CLR5,		// 5
    INTC_SSCIR0_CLR6,		// 6
    INTC_SSCIR0_CLR7,		// 7
#if defined(CFG_MPC560X)
    RESERVED0,              // 5606-8

    ECSM_INT,               // 5606-9

    DMA_COMBINED_ERROR_INT, // 5606-10
    DMA_CH0_INT,            // 5606-11
    DMA_CH1_INT,            // 5606-12
    DMA_CH2_INT,            // 5606-13
    DMA_CH3_INT,            // 5606-14
    DMA_CH4_INT,            // 5606-15
    DMA_CH5_INT,            // 5606-16
    DMA_CH6_INT,            // 5606-17
    DMA_CH7_INT,            // 5606-18
    DMA_CH8_INT,            // 5606-19
    DMA_CH9_INT,            // 5606-20
    DMA_CH10_INT,           // 5606-21
    DMA_CH11_INT,           // 5606-22
    DMA_CH12_INT,           // 5606-23
    DMA_CH13_INT,           // 5606-24
    DMA_CH14_INT,           // 5606-25
    DMA_CH15_INT,           // 5606-26

    RESERVED1,              // 5606-27

    SWT_TIMEOUT,            // 5606-28

    RESERVED2,              // 5606-29

    STM_CH0_INT,            // 5606-30
    STM_CH1_INT,            // 5606-31
    STM_CH2_INT,            // 5606-32
    STM_CH3_INT,            // 5606-33

    RESERVED3,              // 5606-34

    ECC_DBD_INT,            // 5606-35
    ECC_SBC_INT,            // 5606-36

    RESERVED4,              // 5606-37

    RTC_INT,                // 5606-38
    API_INT,                // 5606-39

    RESERVED5,              // 5606-40

    SIU_EXT_IRQ0,           // 5606-41
    SIU_EXT_IRQ1,           // 5606-42

    RESERVED6,              // 5606-43
    RESERVED7,              // 5606-44
    RESERVED8,              // 5606-45

    WAKEUP_IRQ0,            // 5606-46
    WAKEUP_IRQ1,            // 5606-47
    WAKEUP_IRQ2,            // 5606-48

    RESERVED9,              // 5606-49
    RESERVED10,             // 5606-50

    SAFE_MODE_INT,          // 5606-51
    MODE_TRAS_INT,          // 5606-52
    INV_MODE_INT,           // 5606-53
    INV_MODE_CONF_INT,      // 5606-54

    RESERVED11,             // 5606-55

    RESET_ALT_EVENT_INT,    // 5606-56

    FXOSC_COUNTER_EXPIRED,  // 5606-57

    RESERVED12,             // 5606-58

    PIT_INT0,               // 5606-59
    PIT_INT1,               // 5606-60
    PIT_INT2,               // 5606-61

    ADC_EOC_INT,            // 5606-62
    ADC_ER_INT,             // 5606-63
    ADC_WD_INT,             // 5606-64

    FLEXCAN_0_ESR_ERR_INT,  // 5606-65
    FLEXCAN_0_ESR_BOFF_INT, // 5606-66

    RESERVED13,             // 5606-67

    FLEXCAN_0_BUF_00_03,    // 5606-68
    FLEXCAN_0_BUF_04_07,    // 5606-69
    FLEXCAN_0_BUF_08_11,    // 5606-70
    FLEXCAN_0_BUF_12_15,    // 5606-71
    FLEXCAN_0_BUF_16_31,    // 5606-72
    FLEXCAN_0_BUF_32_63,    // 5606-73

    DSPI_0_ISR_TFUF_RFOF,   // 5606-74
    DSPI_0_ISR_EOQF,        // 5606-75
    DSPI_0_ISR_TFFF,        // 5606-76
    DSPI_0_ISR_TCF,         // 5606-77
    DSPI_0_ISR_RFDF,        // 5606-78

    LINFLEX_0_RXI,          // 5606-79
    LINFLEX_0_TXI,          // 5606-80
    LINFLEX_0_ERR,          // 5606-81

    RESERVED14,             // 5606-82
    RESERVED15,             // 5606-83
    RESERVED16,             // 5606-84

    FLEXCAN_1_ESR_ERR_INT,  // 5606-85
    FLEXCAN_1_ESR_BOFF_INT, // 5606-86

	RESERVED17,             // 5606-87

	FLEXCAN_1_BUF_00_03,    // 5606-88
	FLEXCAN_1_BUF_04_07,    // 5606-89
	FLEXCAN_1_BUF_08_11,    // 5606-90
	FLEXCAN_1_BUF_12_15,    // 5606-91
	FLEXCAN_1_BUF_16_31,    // 5606-92
	FLEXCAN_1_BUF_32_63,    // 5606-93

    DSPI_1_ISR_TFUF_RFOF,   // 5606-94
    DSPI_1_ISR_EOQF,        // 5606-95
    DSPI_1_ISR_TFFF,        // 5606-96
    DSPI_1_ISR_TCF,         // 5606-97
    DSPI_1_ISR_RFDF,        // 5606-98

    LINFLEX_1_RXI,          // 5606-99
    LINFLEX_1_TXI,          // 5606-100
    LINFLEX_1_ERR,          // 5606-101

    RESERVED18,             // 5606-102
    RESERVED19,             // 5606-103
    RESERVED20,             // 5606-104
    FLEXCAN_2_ESR_ERR_INT,  // 5606-105
    FLEXCAN_2_ESR_BOFF_INT, // 5606-106

	RESERVED21,             // 5606-107

	FLEXCAN_2_BUF_00_03,    // 5606-108
	FLEXCAN_2_BUF_04_07,    // 5606-109
	FLEXCAN_2_BUF_08_11,    // 5606-110
	FLEXCAN_2_BUF_12_15,    // 5606-111
	FLEXCAN_2_BUF_16_31,    // 5606-112
	FLEXCAN_2_BUF_32_63,    // 5606-113
    DSPI_2_ISR_TFUF_RFOF,   // 5606-114
    DSPI_2_ISR_EOQF,        // 5606-115
    DSPI_2_ISR_TFFF,        // 5606-116
    DSPI_2_ISR_TCF,         // 5606-117
    DSPI_2_ISR_RFDF,        // 5606-118

    LINFLEX_2_RXI,          // 5606-119
    LINFLEX_2_TXI,          // 5606-120
    LINFLEX_2_ERR,          // 5606-121
    LINFLEX_3_RXI,          // 5606-122
    LINFLEX_3_TXI,          // 5606-123
    LINFLEX_3_ERR,          // 5606-124
    I2C_0_INT,              // 5606-125
    I2C_1_INT,              // 5606-126

    PIT_INT3,               // 5606-127

    PIT_INT4,               // 5606-128
    PIT_INT5,               // 5606-129
    RESERVED43,             // 5606-130
    RESERVED44,             // 5606-131
    RESERVED45,             // 5606-132
    RESERVED46,             // 5606-133
    RESERVED47,             // 5606-134
    RESERVED48,             // 5606-135
    RESERVED49,             // 5606-136
    RESERVED50,             // 5606-137
    RESERVED51,             // 5606-138
    RESERVED52,             // 5606-139
    RESERVED53,             // 5606-140
#if defined (CFG_MPC5604B)
    EMIOS_0_GFR_F0_F1,      // 5606-141
    EMIOS_0_GFR_F2_F3,      // 5606-142
    EMIOS_0_GFR_F4_F5,      // 5606-143
    EMIOS_0_GFR_F6_F7,      // 5606-144
    EMIOS_0_GFR_F8_F9,      // 5606-145
    EMIOS_0_GFR_F10_F11,    // 5606-146
    EMIOS_0_GFR_F12_F13,    // 5606-147
    EMIOS_0_GFR_F14_F15,    // 5606-148
    EMIOS_0_GFR_F16_F17,    // 5606-149
    EMIOS_0_GFR_F18_F19,    // 5606-150
    EMIOS_0_GFR_F20_F21,    // 5606-151
    EMIOS_0_GFR_F22_F23,    // 5606-152
    EMIOS_0_GFR_F24_F25,    // 5606-153
    EMIOS_0_GFR_F26_F27,    // 5606-154
    RESERVED54,             // 5606-155
    RESERVED55,             // 5606-156
    EMIOS_1_GFR_F0_F1,      // 5606-157
    EMIOS_1_GFR_F2_F3,      // 5606-158
    EMIOS_1_GFR_F4_F5,      // 5606-159
    EMIOS_1_GFR_F6_F7,      // 5606-160
    EMIOS_1_GFR_F8_F9,      // 5606-161
    EMIOS_1_GFR_F10_F11,    // 5606-162
    EMIOS_1_GFR_F12_F13,    // 5606-163
    EMIOS_1_GFR_F14_F15,    // 5606-164
    EMIOS_1_GFR_F16_F17,    // 5606-165
    EMIOS_1_GFR_F18_F19,    // 5606-166
    EMIOS_1_GFR_F20_F21,    // 5606-167
    EMIOS_1_GFR_F22_F23,    // 5606-168
    EMIOS_1_GFR_F24_F25,    // 5606-169
    EMIOS_1_GFR_F26_F27,    // 5606-170

	RESERVED56,             // 5606-171
	RESERVED57,             // 5606-172

    FLEXCAN_3_ESR_ERR_INT,  // 5606-173
    FLEXCAN_3_ESR_BOFF_INT, // 5606-174

	RESERVED58,             // 5606-175

	FLEXCAN_3_BUF_00_03,    // 5606-176
	FLEXCAN_3_BUF_04_07,    // 5606-177
	FLEXCAN_3_BUF_08_11,    // 5606-178
	FLEXCAN_3_BUF_12_15,    // 5606-179
	FLEXCAN_3_BUF_16_31,    // 5606-180
	FLEXCAN_3_BUF_32_63,    // 5606-181
    RESERVED59,             // 5606-182
    RESERVED60,             // 5606-183
    RESERVED61,             // 5606-184
    RESERVED62,             // 5606-185
    RESERVED63,             // 5606-186
    RESERVED64,             // 5606-187
    RESERVED65,             // 5606-188
    RESERVED66,             // 5606-189
    FLEXCAN_4_ESR_ERR_INT,  // 5606-190
    FLEXCAN_4_ESR_BOFF_INT, // 5606-191

	RESERVED67,             // 5606-192

	FLEXCAN_4_BUF_00_03,    // 5606-193
	FLEXCAN_4_BUF_04_07,    // 5606-194
	FLEXCAN_4_BUF_08_11,    // 5606-195
	FLEXCAN_4_BUF_12_15,    // 5606-196
	FLEXCAN_4_BUF_16_31,    // 5606-197
	FLEXCAN_4_BUF_32_63,    // 5606-198
    RESERVED68,             // 5606-199
    RESERVED69,             // 5606-200
    RESERVED70,             // 5606-201
    FLEXCAN_5_ESR_ERR_INT,  // 5606-202
    FLEXCAN_5_ESR_BOFF_INT, // 5606-203
	RESERVED71,             // 5606-204
	FLEXCAN_5_BUF_00_03,    // 5606-205
	FLEXCAN_5_BUF_04_07,    // 5606-206
	FLEXCAN_5_BUF_08_11,    // 5606-207
	FLEXCAN_5_BUF_12_15,    // 5606-208
	FLEXCAN_5_BUF_16_31,    // 5606-209
	FLEXCAN_5_BUF_32_63,    // 5606-210
    RESERVED72,             // 5606-211
    RESERVED73,             // 5606-212
    RESERVED74,             // 5606-213
    RESERVED75,             // 5606-214
    RESERVED76,             // 5606-215
    RESERVED77,             // 5606-216
#elif defined (CFG_MPC5606S)
    EMIOS_0_GFR_F8_F9,      // 5606-141
    EMIOS_0_GFR_F10_F11,    // 5606-142
    EMIOS_0_GFR_F12_F13,    // 5606-143
    EMIOS_0_GFR_F14_F15,    // 5606-144
    EMIOS_0_GFR_F16_F17,    // 5606-145
    EMIOS_0_GFR_F18_F19,    // 5606-146
    EMIOS_0_GFR_F20_F21,    // 5606-147
    EMIOS_0_GFR_F22_F23,    // 5606-148

    RESERVED54,             // 5606-149
    RESERVED55,             // 5606-150
    RESERVED56,             // 5606-151
    RESERVED57,             // 5606-152
    RESERVED58,             // 5606-153
    RESERVED59,             // 5606-154
    RESERVED60,             // 5606-155
    RESERVED61,             // 5606-156

    EMIOS_1_GFR_F16_F17,    // 5606-157
    EMIOS_1_GFR_F18_F19,    // 5606-158
    EMIOS_1_GFR_F20_F21,    // 5606-159
    EMIOS_1_GFR_F22_F23,    // 5606-160

    RESERVED62,             // 5606-161
    RESERVED63,             // 5606-162
    RESERVED64,             // 5606-163
    RESERVED65,             // 5606-164
    RESERVED66,             // 5606-165
    RESERVED67,             // 5606-166
    RESERVED68,             // 5606-167
    RESERVED69,             // 5606-168
    RESERVED70,             // 5606-169
    RESERVED71,             // 5606-170
    RESERVED72,             // 5606-171
    RESERVED73,             // 5606-172

    I2C_2_INT,              // 5606-173
    I2C_3_INT,              // 5606-174

	RESERVED74,             // 5606-175
	RESERVED75,             // 5606-176
	RESERVED76,             // 5606-177
	RESERVED77,             // 5606-178
	RESERVED78,             // 5606-179
	RESERVED79,             // 5606-180
	RESERVED80,             // 5606-181
	RESERVED81,             // 5606-182

	SDCI_INT,               // 5606-183
	DCUN0_VSYNC_INT,        // 5606-184
	DCUN0_UNDRUN,           // 5606-185
	DCUN0_PARERR,           // 5606-186
	DCUN0_PDI,              // 5606-187

	RESERVED82,             // 5606-188
	RESERVED83,             // 5606-189
	RESERVED84,             // 5606-190
	RESERVED85,             // 5606-191

	SMD0_INT,               // 5606-192
	SSD0_INT,               // 5606-193
	SSD1_INT,               // 5606-194
	SSD2_INT,               // 5606-195
	SSD3_INT,               // 5606-196
	SSD4_INT,               // 5606-197
	SSD5_INT,               // 5606-198

	LCD0_EOF_INT,           // 5606-199

	RESERVED86,             // 5606-200

	QSPI0_TFUF,             // 5606-201
	QSPI0_EOQF,             // 5606-202
	QSPI0_TFFF,             // 5606-203
	QSPI0_TCF,              // 5606-204
	QSPI0_RFDF,             // 5606-205
	QSPI0_IPAEF,            // 5606-206
#endif

	INTC_NUMBER_OF_INTERRUPTS,
#else /* end CFG_MPC560X */
	MCM_MSWTIR_SWTIC,		// 8
	MCM_ESR_COMB,			// 9
	/* eDMA */
	EDMA_ERRL_ERR31_0,	    // 10
	EDMA_INTL_INT0,			// 11
	EDMA_INTL_INT1,
	EDMA_INTL_INT2,
	EDMA_INTL_INT3,
	EDMA_INTL_INT4,
	EDMA_INTL_INT5,
	EDMA_INTL_INT6,
	EDMA_INTL_INT7,
	EDMA_INTL_INT8,
	EDMA_INTL_INT9,
	EDMA_INTL_INT10,
	EDMA_INTL_INT11,
	EDMA_INTL_INT12,
	EDMA_INTL_INT13,
	EDMA_INTL_INT14,
	EDMA_INTL_INT15,		// 26
#if defined(CFG_MPC5554)||defined(CFG_MPC5567)
	EDMA_INTL_INT16,
	EDMA_INTL_INT17,
	EDMA_INTL_INT18,
	EDMA_INTL_INT19,		// 30
	EDMA_INTL_INT20,
	EDMA_INTL_INT21,
	EDMA_INTL_INT22,
	EDMA_INTL_INT23,
	EDMA_INTL_INT24,
	EDMA_INTL_INT25,
	EDMA_INTL_INT26,
	EDMA_INTL_INT27,
	EDMA_INTL_INT28,
	EDMA_INTL_INT29,
	EDMA_INTL_INT30,
	EDMA_INTL_INT31,		// 42
#else
	RESERVED0,
	RESERVED1,
	RESERVED2,
	RESERVED3,				// 30
	RESERVED4,
	RESERVED5,
	RESERVED6,
	RESERVED7,
	RESERVED8,
	RESERVED9,
	RESERVED10,
	RESERVED11,
	RESERVED12,
	RESERVED13,
	RESERVED14,
	RESERVED15,				// 42
#endif

#if defined(CFG_MPC5516)
	/* Semahpore's */
	SEMAPHORE_INT0,			// 43
	SEMAPHORE_INT1,
	RESERVED16,
	CRP_INTERRUPT,
	LVI_INTERRUPT,
	IIC_A_IBSR_IBIF,
	RESERVED17,
#endif
	PLL_SYNSR_LOCF,			// 54-43,  16-50
	PLL_SYNSR_LOLF,			// 54-44,  16-51
	SIU_OSR_OVER,
	/* External interrupts */
	SIU_EISR_EIF0,			// 53
	SIU_EISR_EIF1,
	SIU_EISR_EIF2,
	SIU_EISR_EIF3,
	SIU_EISR_EIF15_4,		// 54-50, 57

	/* eMIOS */
	EMISOS200_FLAG_F0,		// 58
	EMISOS200_FLAG_F1,
	EMISOS200_FLAG_F2,
	EMISOS200_FLAG_F3,
	EMISOS200_FLAG_F4,
	EMISOS200_FLAG_F5,
	EMISOS200_FLAG_F6,
	EMISOS200_FLAG_F7,
	EMISOS200_FLAG_F8,
	EMISOS200_FLAG_F9,
	EMISOS200_FLAG_F10,
	EMISOS200_FLAG_F11,
	EMISOS200_FLAG_F12,
	EMISOS200_FLAG_F13,
	EMISOS200_FLAG_F14,
	EMISOS200_FLAG_F15,		// 73
#if defined(CFG_MPC5516)
	EMISOS200_FLAG_F16,
	EMISOS200_FLAG_F17,
	EMISOS200_FLAG_F18,
	EMISOS200_FLAG_F19,
	EMISOS200_FLAG_F20,
	EMISOS200_FLAG_F21,
	EMISOS200_FLAG_F22,
	EMISOS200_FLAG_F23,		// 16-81
#elif defined(CFG_MPC5554)||defined(CFG_MPC5567)
	ETPU_GLOBAL,			// 54-67
	ETPU_A_CIS_0,
	ETPU_A_CIS_1,
	ETPU_A_CIS_2,			// 54-70
	ETPU_A_CIS_3,
	ETPU_A_CIS_4,
	ETPU_A_CIS_5,
	ETPU_A_CIS_6,
	ETPU_A_CIS_7,
	ETPU_A_CIS_8,
	ETPU_A_CIS_9,
	ETPU_A_CIS_10,
	ETPU_A_CIS_11,
	ETPU_A_CIS_12,			// 54-80
	ETPU_A_CIS_13,
	ETPU_A_CIS_14,
	ETPU_A_CIS_15,
	ETPU_A_CIS_16,
	ETPU_A_CIS_17,
	ETPU_A_CIS_18,
	ETPU_A_CIS_19,
	ETPU_A_CIS_20,
	ETPU_A_CIS_21,
	ETPU_A_CIS_22,			// 54-90
	ETPU_A_CIS_23,
	ETPU_A_CIS_24,
	ETPU_A_CIS_25,
	ETPU_A_CIS_26,
	ETPU_A_CIS_27,
	ETPU_A_CIS_28,
	ETPU_A_CIS_29,
	ETPU_A_CIS_30,
	ETPU_A_CIS_31,			// 99
#endif

	/* eQADC */
	EQADC_FISR_OVER,		// 54-100, 16-82
	EQADC_FISR0_NCF0,
	EQADC_FISR0_PF0,
	EQADC_FISR0_EOQF0,
	EQADC_FISR0_CFFF0,
	EQADC_FISR0_RFDF0,
	EQADC_FISR1_NCF1,
	EQADC_FISR1_PF1,
	EQADC_FISR1_EOQF1,
	EQADC_FISR1_CFFF1,
	EQADC_FISR1_RFDF1,		// 110, 92
	EQADC_FISR2_NCF2,
	EQADC_FISR2_PF2,
	EQADC_FISR2_EOQF2,
	EQADC_FISR2_CFFF2,
	EQADC_FISR2_RFDF2,
	EQADC_FISR3_NCF3,
	EQADC_FISR3_PF3,
	EQADC_FISR3_EOQF3,
	EQADC_FISR3_CFFF3,
	EQADC_FISR3_RFDF3,		// 120, 102
	EQADC_FISR4_NCF4,
	EQADC_FISR4_PF4,
	EQADC_FISR4_EOQF4,
	EQADC_FISR4_CFFF4,
	EQADC_FISR4_RFDF4,
	EQADC_FISR5_NCF5,
	EQADC_FISR5_PF5,
	EQADC_FISR5_EOQF5,
	EQADC_FISR5_CFFF5,
	EQADC_FISR5_RFDF5,		// 130, 112

#if defined(CFG_MPC5516)
	/* SCI */
	SCI_A_COMB,				// 16-113
	SCI_B_COMB,
	SCI_C_COMB,
	SCI_D_COMB,
	/* DSPI A,B */
	DSPI_A_ISR_OVER,
	DSPI_A_ISR_EOQF,
	DSPI_A_ISR_TFFF,
	DSPI_A_ISR_TCF,
	DSPI_A_ISR_RFDF,
	DSPI_B_ISR_OVER,		// 16-122
	DSPI_B_ISR_EOQF,
	DSPI_B_ISR_TFFF,
	DSPI_B_ISR_TCF,
	DSPI_B_ISR_RFDF,
#elif defined(CFG_MPC5554)||defined(CFG_MPC5567)
	DSPI_B_COMB,			// 54-131
	DSPI_B_ISR_EOQF,
	DSPI_B_ISR_TFFF,
	DSPI_B_ISR_TCF,
	DSPI_B_ISR_RFDF,		// 54-135
	DSPI_C_COMB,
	DSPI_C_ISR_EOQF,
	DSPI_C_ISR_TFFF,
	DSPI_C_ISR_TCF,
	DSPI_C_ISR_RFDF,		// 54-140
	DSPI_D_COMB,
	DSPI_D_ISR_EOQF,
	DSPI_D_ISR_TFFF,
	DSPI_D_ISR_TCF,
	DSPI_D_ISR_RFDF,		// 54-145

	ESCI_A_COMB0,
	RESERVED0,
	RESERVED1,
	ESCI_A_COMB1,
	RESERVED2,
	RESERVED3,				// 54-151
#endif

	/* FlexCAN A */
#if defined(CFG_MPC5516) || defined(CFG_MPC5554)||defined(CFG_MPC5567)
	FLEXCAN_A_ESR_BOFF_INT, // 54-152, 16-127
	FLEXCAN_A_ESR_ERR_INT,
	RESERVED18,
	FLEXCAN_A_IFLAG1_BUF0I,
	FLEXCAN_A_IFLAG1_BUF1I,
	FLEXCAN_A_IFLAG1_BUF2I,
	FLEXCAN_A_IFLAG1_BUF3I,
	FLEXCAN_A_IFLAG1_BUF4I,
	FLEXCAN_A_IFLAG1_BUF5I,
	FLEXCAN_A_IFLAG1_BUF6I,
	FLEXCAN_A_IFLAG1_BUF7I,
	FLEXCAN_A_IFLAG1_BUF8I,
	FLEXCAN_A_IFLAG1_BUF9I,
	FLEXCAN_A_IFLAG1_BUF10I,
	FLEXCAN_A_IFLAG1_BUF11I,
	FLEXCAN_A_IFLAG1_BUF12I,
	FLEXCAN_A_IFLAG1_BUF13I,
	FLEXCAN_A_IFLAG1_BUF14I,
	FLEXCAN_A_IFLAG1_BUF15I,
	FLEXCAN_A_IFLAG1_BUF31_16I,
	FLEXCAN_A_IFLAG1_BUF63_32I,
#endif

#if defined(CFG_MPC5516)
	/* Periodic interrupt timer */
	PIT_PITFLG_RTIF,
	PIT_PITFLG_PIT1,
	PIT_PITFLG_PIT2,
	PIT_PITFLG_PIT3,
	PIT_PITFLG_PIT4,
	PIT_PITFLG_PIT5,
	PIT_PITFLG_PIT6,
	PIT_PITFLG_PIT7,
	PIT_PITFLG_PIT8,

	/* FlexCAN B */
	FLEXCAN_B_ESR_BOFF_INT,
	FLEXCAN_B_ESR_ERR_INT,
	RESERVED19,
	FLEXCAN_B_IFLAG1_BUF0I,
	FLEXCAN_B_IFLAG1_BUF1I,
	FLEXCAN_B_IFLAG1_BUF2I,
	FLEXCAN_B_IFLAG1_BUF3I,
	FLEXCAN_B_IFLAG1_BUF4I,
	FLEXCAN_B_IFLAG1_BUF5I,
	FLEXCAN_B_IFLAG1_BUF6I,
	FLEXCAN_B_IFLAG1_BUF7I,
	FLEXCAN_B_IFLAG1_BUF8I,
	FLEXCAN_B_IFLAG1_BUF9I,
	FLEXCAN_B_IFLAG1_BUF10I,
	FLEXCAN_B_IFLAG1_BUF11I,
	FLEXCAN_B_IFLAG1_BUF12I,
	FLEXCAN_B_IFLAG1_BUF13I,
	FLEXCAN_B_IFLAG1_BUF14I,
	FLEXCAN_B_IFLAG1_BUF15I,
	FLEXCAN_B_IFLAG1_BUF31_16I,
	FLEXCAN_B_IFLAG1_BUF63_32I,
	/* FlexCAN C */
	FLEXCAN_C_ESR_BOFF_INT,
	FLEXCAN_C_ESR_ERR_INT,
	RESERVED20,
	FLEXCAN_C_IFLAG1_BUF0I,
	FLEXCAN_C_IFLAG1_BUF1I,
	FLEXCAN_C_IFLAG1_BUF2I,
	FLEXCAN_C_IFLAG1_BUF3I,
	FLEXCAN_C_IFLAG1_BUF4I,
	FLEXCAN_C_IFLAG1_BUF5I,
	FLEXCAN_C_IFLAG1_BUF6I,
	FLEXCAN_C_IFLAG1_BUF7I,
	FLEXCAN_C_IFLAG1_BUF8I,
	FLEXCAN_C_IFLAG1_BUF9I,
	FLEXCAN_C_IFLAG1_BUF10I,
	FLEXCAN_C_IFLAG1_BUF11I,
	FLEXCAN_C_IFLAG1_BUF12I,
	FLEXCAN_C_IFLAG1_BUF13I,
	FLEXCAN_C_IFLAG1_BUF14I,
	FLEXCAN_C_IFLAG1_BUF15I,
	FLEXCAN_C_IFLAG1_BUF31_16I,
	FLEXCAN_C_IFLAG1_BUF63_32I,
	/* FlexCAN D */
	FLEXCAN_D_ESR_BOFF_INT,
	FLEXCAN_D_ESR_ERR_INT,
	RESERVED21,
	FLEXCAN_D_IFLAG1_BUF0I,
	FLEXCAN_D_IFLAG1_BUF1I,
	FLEXCAN_D_IFLAG1_BUF2I,
	FLEXCAN_D_IFLAG1_BUF3I,
	FLEXCAN_D_IFLAG1_BUF4I,
	FLEXCAN_D_IFLAG1_BUF5I,
	FLEXCAN_D_IFLAG1_BUF6I,
	FLEXCAN_D_IFLAG1_BUF7I,
	FLEXCAN_D_IFLAG1_BUF8I,
	FLEXCAN_D_IFLAG1_BUF9I,
	FLEXCAN_D_IFLAG1_BUF10I,
	FLEXCAN_D_IFLAG1_BUF11I,
	FLEXCAN_D_IFLAG1_BUF12I,
	FLEXCAN_D_IFLAG1_BUF13I,
	FLEXCAN_D_IFLAG1_BUF14I,
	FLEXCAN_D_IFLAG1_BUF15I,
	FLEXCAN_D_IFLAG1_BUF31_16I,
	FLEXCAN_D_IFLAG1_BUF63_32I,
	/* FlexCAN E */
	FLEXCAN_E_ESR_BOFF_INT,
	FLEXCAN_E_ESR_ERR_INT,
	RESERVED22,
	FLEXCAN_E_IFLAG1_BUF0I,
	FLEXCAN_E_IFLAG1_BUF1I,
	FLEXCAN_E_IFLAG1_BUF2I,
	FLEXCAN_E_IFLAG1_BUF3I,
	FLEXCAN_E_IFLAG1_BUF4I,
	FLEXCAN_E_IFLAG1_BUF5I,
	FLEXCAN_E_IFLAG1_BUF6I,
	FLEXCAN_E_IFLAG1_BUF7I,
	FLEXCAN_E_IFLAG1_BUF8I,
	FLEXCAN_E_IFLAG1_BUF9I,
	FLEXCAN_E_IFLAG1_BUF10I,
	FLEXCAN_E_IFLAG1_BUF11I,
	FLEXCAN_E_IFLAG1_BUF12I,
	FLEXCAN_E_IFLAG1_BUF13I,
	FLEXCAN_E_IFLAG1_BUF14I,
	FLEXCAN_E_IFLAG1_BUF15I,
	FLEXCAN_E_IFLAG1_BUF31_16I,
	FLEXCAN_E_IFLAG1_BUF63_32I,
	/* FlexCAN F */
	FLEXCAN_F_ESR_BOFF_INT,
	FLEXCAN_F_ESR_ERR_INT,
	RESERVED23,
	FLEXCAN_F_IFLAG1_BUF0I,
	FLEXCAN_F_IFLAG1_BUF1I,
	FLEXCAN_F_IFLAG1_BUF2I,
	FLEXCAN_F_IFLAG1_BUF3I,
	FLEXCAN_F_IFLAG1_BUF4I,
	FLEXCAN_F_IFLAG1_BUF5I,
	FLEXCAN_F_IFLAG1_BUF6I,
	FLEXCAN_F_IFLAG1_BUF7I,
	FLEXCAN_F_IFLAG1_BUF8I,
	FLEXCAN_F_IFLAG1_BUF9I,
	FLEXCAN_F_IFLAG1_BUF10I,
	FLEXCAN_F_IFLAG1_BUF11I,
	FLEXCAN_F_IFLAG1_BUF12I,
	FLEXCAN_F_IFLAG1_BUF13I,
	FLEXCAN_F_IFLAG1_BUF14I,
	FLEXCAN_F_IFLAG1_BUF15I,
	FLEXCAN_F_IFLAG1_BUF31_16I,
	FLEXCAN_F_IFLAG1_BUF63_32I,
	RESERVED24,
	RESERVED25,
	RESERVED26,
	RESERVED27,
	RESERVED28,
	RESERVED29,
	RESERVED30,
	RESERVED31,
	/* SCI */
	SCI_E_COMB,
	SCI_F_COMB,
	SCI_G_COMB,
	SCI_H_COMB,
	/* DSPI */
	DSPI_C_ISR_OVER,
	DSPI_C_ISR_EOQF,
	DSPI_C_ISR_TFFF,
	DSPI_C_ISR_TCF,
	DSPI_C_ISR_RFDF,
	DSPI_D_ISR_OVER,
	DSPI_D_ISR_EOQF,
	DSPI_D_ISR_TFFF,
	DSPI_D_ISR_TCF,
	DSPI_D_ISR_RFDF,
	/* Flexray */
	FLEXRAY_GLOB,
	FLEXRAY_PRIF,
	FLEXRAY_CHIF,
	FLEXRAY_WUP_IF,
	FLEXRAY_FBNE_F,
	FLEXRAY_FANE_F,
	FLEXRAY_RBIF,
	FLEXRAY_TBIF,
	RESERVED32,
	MLB_SERVICE_REQUEST,
	INTC_NUMBER_OF_INTERRUPTS,
	/* End of INTC interrupts. The vectors below are used to handle exceptions. */
	RESERVED_SPACE_BEFORE_EXCEPTIONS1,
	RESERVED_SPACE_BEFORE_EXCEPTIONS2,
	RESERVED_SPACE_BEFORE_EXCEPTIONS3,
	RESERVED_SPACE_BEFORE_EXCEPTIONS4,
	RESERVED_SPACE_BEFORE_EXCEPTIONS5,
	RESERVED_SPACE_BEFORE_EXCEPTIONS6,
	RESERVED_SPACE_BEFORE_EXCEPTIONS7,
	RESERVED_SPACE_BEFORE_EXCEPTIONS8,
	RESERVED_SPACE_BEFORE_EXCEPTIONS9,
	RESERVED_SPACE_BEFORE_EXCEPTIONS10,
	RESERVED_SPACE_BEFORE_EXCEPTIONS11,
	RESERVED_SPACE_BEFORE_EXCEPTIONS12,
	RESERVED_SPACE_BEFORE_EXCEPTIONS13,
	RESERVED_SPACE_BEFORE_EXCEPTIONS14,
	RESERVED_SPACE_BEFORE_EXCEPTIONS15,
	RESERVED_SPACE_BEFORE_EXCEPTIONS16,
	RESERVED_SPACE_BEFORE_EXCEPTIONS17,
	RESERVED_SPACE_BEFORE_EXCEPTIONS18,
	RESERVED_SPACE_BEFORE_EXCEPTIONS19,
	RESERVED_SPACE_BEFORE_EXCEPTIONS20,
	RESERVED_SPACE_BEFORE_EXCEPTIONS21,
	RESERVED_SPACE_BEFORE_EXCEPTIONS22,
	RESERVED_SPACE_BEFORE_EXCEPTIONS23,
	RESERVED_SPACE_BEFORE_EXCEPTIONS24,
	RESERVED_SPACE_BEFORE_EXCEPTIONS25,
#endif

#if defined(CFG_MPC5554)||defined(CFG_MPC5567)
	/* FlexCAN C */
	FLEXCAN_C_ESR_BOFF_INT = 173,
	FLEXCAN_C_ESR_ERR_INT,
	RESERVED20,
	FLEXCAN_C_IFLAG1_BUF0I,
	FLEXCAN_C_IFLAG1_BUF1I,
	FLEXCAN_C_IFLAG1_BUF2I,
	FLEXCAN_C_IFLAG1_BUF3I,
	FLEXCAN_C_IFLAG1_BUF4I,
	FLEXCAN_C_IFLAG1_BUF5I,
	FLEXCAN_C_IFLAG1_BUF6I,
	FLEXCAN_C_IFLAG1_BUF7I,
	FLEXCAN_C_IFLAG1_BUF8I,
	FLEXCAN_C_IFLAG1_BUF9I,
	FLEXCAN_C_IFLAG1_BUF10I,
	FLEXCAN_C_IFLAG1_BUF11I,
	FLEXCAN_C_IFLAG1_BUF12I,
	FLEXCAN_C_IFLAG1_BUF13I,
	FLEXCAN_C_IFLAG1_BUF14I,
	FLEXCAN_C_IFLAG1_BUF15I,
	FLEXCAN_C_IFLAG1_BUF31_16I,
	FLEXCAN_C_IFLAG1_BUF63_32I,

	// ....

	// 275
	DSPI_A_COMB = 275,		// 54-131
	DSPI_A_ISR_EOQF,
	DSPI_A_ISR_TFFF,
	DSPI_A_ISR_TCF,
	DSPI_A_ISR_RFDF,	// 54-135

	/* FlexCAN B */
	FLEXCAN_B_ESR_BOFF_INT = 280,
	FLEXCAN_B_ESR_ERR_INT,
	RESERVED21,
	FLEXCAN_B_IFLAG1_BUF0I,
	FLEXCAN_B_IFLAG1_BUF1I,
	FLEXCAN_B_IFLAG1_BUF2I,
	FLEXCAN_B_IFLAG1_BUF3I,
	FLEXCAN_B_IFLAG1_BUF4I,
	FLEXCAN_B_IFLAG1_BUF5I,
	FLEXCAN_B_IFLAG1_BUF6I,
	FLEXCAN_B_IFLAG1_BUF7I,
	FLEXCAN_B_IFLAG1_BUF8I,
	FLEXCAN_B_IFLAG1_BUF9I,
	FLEXCAN_B_IFLAG1_BUF10I,
	FLEXCAN_B_IFLAG1_BUF11I,
	FLEXCAN_B_IFLAG1_BUF12I,
	FLEXCAN_B_IFLAG1_BUF13I,
	FLEXCAN_B_IFLAG1_BUF14I,
	FLEXCAN_B_IFLAG1_BUF15I,
	FLEXCAN_B_IFLAG1_BUF31_16I,
	FLEXCAN_B_IFLAG1_BUF63_32I,

	/* FlexCAN D */
	FLEXCAN_D_ESR_BOFF_INT = 308,
	FLEXCAN_D_ESR_ERR_INT,
	RESERVED22,
	FLEXCAN_D_IFLAG1_BUF0I,
	FLEXCAN_D_IFLAG1_BUF1I,
	FLEXCAN_D_IFLAG1_BUF2I,
	FLEXCAN_D_IFLAG1_BUF3I,
	FLEXCAN_D_IFLAG1_BUF4I,
	FLEXCAN_D_IFLAG1_BUF5I,
	FLEXCAN_D_IFLAG1_BUF6I,
	FLEXCAN_D_IFLAG1_BUF7I,
	FLEXCAN_D_IFLAG1_BUF8I,
	FLEXCAN_D_IFLAG1_BUF9I,
	FLEXCAN_D_IFLAG1_BUF10I,
	FLEXCAN_D_IFLAG1_BUF11I,
	FLEXCAN_D_IFLAG1_BUF12I,
	FLEXCAN_D_IFLAG1_BUF13I,
	FLEXCAN_D_IFLAG1_BUF14I,
	FLEXCAN_D_IFLAG1_BUF15I,
	FLEXCAN_D_IFLAG1_BUF31_16I,
	FLEXCAN_D_IFLAG1_BUF63_32I,

	/* FlexCAN E */
	FLEXCAN_E_ESR_BOFF_INT = 329,
	FLEXCAN_E_ESR_ERR_INT,
	RESERVED23,
	FLEXCAN_E_IFLAG1_BUF0I,
	FLEXCAN_E_IFLAG1_BUF1I,
	FLEXCAN_E_IFLAG1_BUF2I,
	FLEXCAN_E_IFLAG1_BUF3I,
	FLEXCAN_E_IFLAG1_BUF4I,
	FLEXCAN_E_IFLAG1_BUF5I,
	FLEXCAN_E_IFLAG1_BUF6I,
	FLEXCAN_E_IFLAG1_BUF7I,
	FLEXCAN_E_IFLAG1_BUF8I,
	FLEXCAN_E_IFLAG1_BUF9I,
	FLEXCAN_E_IFLAG1_BUF10I,
	FLEXCAN_E_IFLAG1_BUF11I,
	FLEXCAN_E_IFLAG1_BUF12I,
	FLEXCAN_E_IFLAG1_BUF13I,
	FLEXCAN_E_IFLAG1_BUF14I,
	FLEXCAN_E_IFLAG1_BUF15I,
	FLEXCAN_E_IFLAG1_BUF31_16I,
	FLEXCAN_E_IFLAG1_BUF63_32I,

	INTC_NUMBER_OF_INTERRUPTS,

	DUMMY_DUMMY = 319,

#endif /* defined(CFG_MPC5554)||defined(CFG_MPC5567) */
#endif
	CRITICAL_INPUT_EXCEPTION,
	MACHINE_CHECK_EXCEPTION,
	DATA_STORAGE_EXCEPTION,
	INSTRUCTION_STORAGE_EXCEPTION,
	EXTERNAL_INTERRUPT,                    /* This is the place where the "normal" interrupts will hit the CPU... */
	ALIGNMENT_EXCEPTION,
	PROGRAM_EXCEPTION,
	FLOATING_POINT_EXCEPTION,
	SYSTEM_CALL_EXCEPTION,
	AUX_EXCEPTION,
	DECREMENTER_EXCEPTION,
	FIXED_INTERVAL_TIMER_EXCEPTION,
	WATCHDOG_TIMER_EXCEPTION,
	DATA_TLB_EXCEPTION,
	INSTRUCTION_TLB_EXCEPTION,
	DEBUG_EXCEPTION,
	NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS

}IrqType;

typedef enum
{
	PERIPHERAL_CLOCK_FLEXCAN_A,
	PERIPHERAL_CLOCK_FLEXCAN_B,
	PERIPHERAL_CLOCK_FLEXCAN_C,
	PERIPHERAL_CLOCK_FLEXCAN_D,
	PERIPHERAL_CLOCK_FLEXCAN_E,
	PERIPHERAL_CLOCK_FLEXCAN_F,
	PERIPHERAL_CLOCK_PIT,
	PERIPHERAL_CLOCK_DSPI_A,
	PERIPHERAL_CLOCK_DSPI_B,
	PERIPHERAL_CLOCK_DSPI_C,
	PERIPHERAL_CLOCK_DSPI_D,
#if defined(CFG_MPC560X)
	PERIPHERAL_CLOCK_EMIOS_0,
	PERIPHERAL_CLOCK_EMIOS_1,
#else
	PERIPHERAL_CLOCK_EMIOS,
#endif
	PERIPHERAL_CLOCK_ESCI_A,
	PERIPHERAL_CLOCK_ESCI_B,
	PERIPHERAL_CLOCK_ESCI_C,
	PERIPHERAL_CLOCK_ESCI_D,
	PERIPHERAL_CLOCK_ESCI_E,
	PERIPHERAL_CLOCK_ESCI_F,
	PERIPHERAL_CLOCK_ESCI_G,
	PERIPHERAL_CLOCK_ESCI_H,
#if defined(CFG_MPC560X)
	PERIPHERAL_CLOCK_LIN_A,
	PERIPHERAL_CLOCK_LIN_B,
	PERIPHERAL_CLOCK_LIN_C,
	PERIPHERAL_CLOCK_LIN_D,
#endif
	PERIPHERAL_CLOCK_IIC_A,
	PERIPHERAL_CLOCK_MLB
} McuE_PeriperalClock_t;


#if defined(CFG_MPC5516) || defined(CFG_MPC5606X)
#define CPU_Z1 	0
#define CPU_Z0	1
#endif

typedef enum
{
	CPU_CORE0,
	CPU_CORE1
} Cpu_t;

/* Offset from exceptions to interrupts */
#define IRQ_INTERRUPT_OFFSET		0

#endif /* IRQ_H_ */
