/*
 * Copyright (c) 2018 , The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/types.h>
#include "wcd937x-registers.h"

const u8 wcd937x_reg_access[WCD937X_REG(WCD937X_REGISTERS_MAX_SIZE)] = {
	[WCD937X_REG(WCD937X_ANA_BIAS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_RX_SUPPLIES)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_HPH)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_EAR)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_EAR_COMPANDER_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_TX_CH1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_TX_CH2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_TX_CH3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_TX_CH3_HPF)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB1_MICB2_DSP_EN_LOGIC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB3_DSP_EN_LOGIC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_MECH)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_ELECT)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_ZDET)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_RESULT_1)] = RD_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_RESULT_2)] = RD_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_RESULT_3)] = RD_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN5)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN6)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MBHC_BTN7)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB2_RAMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_ANA_MICB3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_BIAS_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_BIAS_VBG_FINE_ADJ)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOL_VDDCX_ADJUST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOL_DISABLE_LDOL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_CTL_CLK)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_CTL_ANA)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_CTL_SPARE_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_CTL_SPARE_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_CTL_BCS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_MOISTURE_DET_FSM_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_MBHC_TEST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOH_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOH_BIAS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOH_STB_LOADS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDOH_SLOWRAMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB1_TEST_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB1_TEST_CTL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB1_TEST_CTL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB2_TEST_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB2_TEST_CTL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB2_TEST_CTL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB3_TEST_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB3_TEST_CTL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MICB3_TEST_CTL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_ADC_VCM)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_BIAS_ATEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_ADC_INT1_IB)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_ADC_INT2_IB)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_TXFE_DIV_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_TXFE_DIV_START)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_TXFE_DIV_STOP_9P6M)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_COM_TXFE_DIV_STOP_12P288M)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_TEST_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_ADC_IB)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_ATEST_REFCTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_TEST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_TEST_BLK_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_TXFE_CLKDIV)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_1_2_SAR2_ERR)] = RD_REG,
	[WCD937X_REG(WCD937X_TX_1_2_SAR1_ERR)] = RD_REG,
	[WCD937X_REG(WCD937X_TX_3_TEST_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_ADC_IB)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_ATEST_REFCTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_TEST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_TEST_BLK_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_TXFE_CLKDIV)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_TX_3_SPARE_MONO)] = RD_REG,
	[WCD937X_REG(WCD937X_TX_3_SAR1_ERR)] = RD_REG,
	[WCD937X_REG(WCD937X_CLASSH_MODE_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_MODE_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_MODE_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_VCL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_VCL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_CCL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_CCL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_CCL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_CCL_4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_CTRL_CCL_5)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_BUCK_TMUX_A_D)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_BUCK_SW_DRV_CNTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_CLASSH_SPARE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_5)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_6)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_7)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_8)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEG_CTRL_9)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEGDAC_CTRL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEGDAC_CTRL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_VNEGDAC_CTRL_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_CTRL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_FLYBACK_TEST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_AUX_SW_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_PA_AUX_IN_CONN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_TIMER_DIV)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_OCP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_OCP_COUNT)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_EAR_DAC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_EAR_AMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_LDO)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_PA)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_RDACBUFF_CNP2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_RDAC_LDO)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_CNP1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_HPH_LOWPOWER)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_AUX_DAC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_AUX_AMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_VNEGDAC_BLEEDER)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_MISC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_BUCK_RST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_BUCK_VREF_ERRAMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_FLYB_ERRAMP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_FLYB_BUFF)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_BIAS_FLYB_MID_RST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_L_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_HPH_R_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_HPH_CNP_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_CNP_WG_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_CNP_WG_TIME)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_OCP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_AUTO_CHOP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_CHOP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_PA_CTL1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_PA_CTL2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_L_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_L_TEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_L_ATEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_R_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_R_TEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_R_ATEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_RDAC_CLK_CTL1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_RDAC_CLK_CTL2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_RDAC_LDO_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_RDAC_CHOP_CLK_LP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_REFBUFF_UHQA_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_REFBUFF_LP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_L_DAC_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_R_DAC_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_SURGE_HPHLR_SURGE_COMP_SEL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_SURGE_HPHLR_SURGE_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_SURGE_HPHLR_SURGE_MISC1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_SURGE_HPHLR_SURGE_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_EAR_EAR_EN_REG)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_EAR_PA_CON)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_EAR_SP_CON)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_EAR_DAC_CON)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_EAR_CNP_FSM_CON)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_TEST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_STATUS_REG_1)] = RD_REG,
	[WCD937X_REG(WCD937X_EAR_STATUS_REG_2)] = RD_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_ANA_HPH2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_ANA_HPH3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_SLEEP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_SLEEP_WATCHDOG_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_ELECT_REM_CLAMP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_CTL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_PLUG_DETECT_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_ZDET_ANA_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_ZDET_RAMP_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_FSM_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_ADC_RESULT)] = RD_REG,
	[WCD937X_REG(WCD937X_TX_NEW_TX_CH2_SEL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_AUXPA)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_CONFIG)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIE_CRACK_DIE_CRK_DET_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIE_CRACK_DIE_CRK_DET_OUT)] = RD_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_RDAC_GAIN_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_RDAC_HD2_CTL_L)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_RDAC_VREF_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_RDAC_OVERRIDE_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_RDAC_HD2_CTL_R)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_PA_MISC1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_PA_MISC2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_PA_RDAC_MISC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_HPH_TIMER1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_HPH_TIMER2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_HPH_TIMER3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_HPH_TIMER4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_PA_RDAC_MISC2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_HPH_NEW_INT_PA_RDAC_MISC3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_NEW_INT_HPH_RDAC_BIAS_LOHIFI)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_NEW_INT_HPH_RDAC_BIAS_ULP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_RX_NEW_INT_HPH_RDAC_LDO_LP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_INT_MOISTURE_DET_DC_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_INT_MOISTURE_DET_POLLING_CTRL)]
								= RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_INT_MECH_DET_CURRENT)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_MBHC_NEW_INT_SPARE_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_INT_NEW_EAR_CHOPPER_CON)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_INT_NEW_CNP_VCM_CON1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_INT_NEW_CNP_VCM_CON2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_EAR_INT_NEW_EAR_DYNAMIC_BIAS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_EN_REG)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_PA_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_SP_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_DAC_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_CLK_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_TEST_CTRL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_AUX_INT_STATUS_REG)] = RD_REG,
	[WCD937X_REG(WCD937X_AUX_INT_MISC)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_BIAS)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_STB_LOADS_DTEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_TEST0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_STARTUP_TIMER)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_TEST1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_LDORXTX_INT_STATUS)] = RD_REG,
	[WCD937X_REG(WCD937X_SLEEP_INT_WATCHDOG_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_SLEEP_INT_WATCHDOG_CTL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIE_CRACK_INT_DIE_CRK_DET_INT1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIE_CRACK_INT_DIE_CRK_DET_INT2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CHIP_ID0)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CHIP_ID1)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CHIP_ID2)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CHIP_ID3)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RST_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_TOP_CLK_CFG)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_ANA_CLK_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_DIG_CLK_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_RST_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_PATH_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RX_RST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RX0_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RX1_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RX2_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DEM_BYPASS_DATA0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DEM_BYPASS_DATA1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DEM_BYPASS_DATA2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DEM_BYPASS_DATA3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_COMP_CTL_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_RX_DELAY_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A1_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A1_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A2_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A2_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A3_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A3_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A4_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A4_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A5_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A5_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A6_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_A7_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_C_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_C_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_C_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_C_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R5)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R6)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_DSM_R7)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A1_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A1_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A2_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A2_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A3_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A3_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A4_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A4_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A5_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A5_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A6_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_A7_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_C_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_C_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_C_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_C_3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R3)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R4)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R5)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R6)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_DSM_R7)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_RX_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_RX_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_DSD_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_DSD_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_DSD_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_GAIN_DSD_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_GAIN_DSD_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_GAIN_DSD_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_HPH_GAIN_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AUX_GAIN_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_EAR_PATH_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_SWR_CLH)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_CLH_BYP)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_TX0_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_TX1_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_TX2_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_TX_RST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_REQ_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_AMIC_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_DMIC_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_DMIC1_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_DMIC2_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_DMIC3_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_PRG_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_TEST_CTL_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_TEST_CTL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_T_DATA_0)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_T_DATA_1)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PDM_WD_CTL0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PDM_WD_CTL1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PDM_WD_CTL2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_MASK_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_MASK_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_MASK_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_STATUS_0)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_STATUS_1)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_STATUS_2)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_CLEAR_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_CLEAR_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_CLEAR_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_LEVEL_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_LEVEL_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_LEVEL_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_SET_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_SET_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_SET_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_TEST_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_TEST_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_INTR_TEST_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_CONN_RX0_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_CONN_RX1_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_CONN_RX2_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_CDC_CONN_TX_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_LOOP_BACK_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_DAC_TEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_HM_TEST_RX_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_HM_TEST_TX_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_HM_TEST_RX_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_HM_TEST_TX_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SWR_HM_TEST)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_CTL_PDM_RX0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_CTL_PDM_RX1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_CTL_PDM_TX0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_CTL_PDM_TX1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_INP_DIS_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PAD_INP_DIS_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DRIVE_STRENGTH_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DRIVE_STRENGTH_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DRIVE_STRENGTH_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_RX_DATA_EDGE_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_TX_DATA_EDGE_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_GPIO_MODE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PIN_CTL_OE)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PIN_CTL_DATA_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PIN_CTL_DATA_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PIN_STATUS_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_PIN_STATUS_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DIG_DEBUG_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_DIG_DEBUG_EN)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_ANA_CSR_DBG_ADD)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_ANA_CSR_DBG_CTL)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SSP_DBG)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_MODE_STATUS_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_MODE_STATUS_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SPARE_0)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SPARE_1)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_SPARE_2)] = RD_WR_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_0)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_1)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_2)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_3)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_4)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_5)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_6)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_7)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_8)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_9)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_10)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_11)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_12)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_13)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_14)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_15)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_16)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_17)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_18)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_19)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_20)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_21)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_22)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_23)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_24)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_25)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_26)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_27)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_28)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_29)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_30)] = RD_REG,
	[WCD937X_REG(WCD937X_DIGITAL_EFUSE_REG_31)] = RD_REG,
};
