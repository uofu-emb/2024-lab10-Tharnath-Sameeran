/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v13.1
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 13.0.2
board: MIMXRT1020-EVK
external_user_signals: {}
pin_labels:
- {pin_num: '52', pin_signal: WAKEUP, label: USER_BUTTON, identifier: USER_BUTTON}
- {pin_num: '106', pin_signal: GPIO_AD_B0_05, label: 'JTAG_nTRST/J16[3]/USER_LED/J17[5]', identifier: USER_LED}
power_domains: {NVCC_GPIO: '3.3'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
    BOARD_InitDEBUG_UARTPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '52', peripheral: GPIO5, signal: 'gpio_io, 00', pin_signal: WAKEUP, direction: INPUT}
  - {pin_num: '106', peripheral: GPIO1, signal: 'gpio_io, 05', pin_signal: GPIO_AD_B0_05, direction: OUTPUT, pull_keeper_select: Keeper}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);
  CLOCK_EnableClock(kCLOCK_IomuxcSnvs);

  /* GPIO configuration of USER_LED on GPIO_AD_B0_05 (pin 106) */
  gpio_pin_config_t USER_LED_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_AD_B0_05 (pin 106) */
  GPIO_PinInit(GPIO1, 5U, &USER_LED_config);

  /* GPIO configuration of USER_BUTTON on WAKEUP (pin 52) */
  gpio_pin_config_t USER_BUTTON_config = {
      .direction = kGPIO_DigitalInput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on WAKEUP (pin 52) */
  GPIO_PinInit(GPIO5, 0U, &USER_BUTTON_config);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_05_GPIO1_IO05, 0U);
  IOMUXC_SetPinMux(IOMUXC_SNVS_WAKEUP_GPIO5_IO00, 0U);
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_05_GPIO1_IO05, 0x50A0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '101', peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_07}
  - {pin_num: '105', peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDEBUG_UARTPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSDRAMPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '142', peripheral: SEMC, signal: 'ADDR, 00', pin_signal: GPIO_EMC_16}
  - {pin_num: '141', peripheral: SEMC, signal: 'ADDR, 01', pin_signal: GPIO_EMC_17}
  - {pin_num: '140', peripheral: SEMC, signal: 'ADDR, 02', pin_signal: GPIO_EMC_18}
  - {pin_num: '139', peripheral: SEMC, signal: 'ADDR, 03', pin_signal: GPIO_EMC_19}
  - {pin_num: '138', peripheral: SEMC, signal: 'ADDR, 04', pin_signal: GPIO_EMC_20}
  - {pin_num: '136', peripheral: SEMC, signal: 'ADDR, 06', pin_signal: GPIO_EMC_22}
  - {pin_num: '137', peripheral: SEMC, signal: 'ADDR, 05', pin_signal: GPIO_EMC_21}
  - {pin_num: '133', peripheral: SEMC, signal: 'ADDR, 07', pin_signal: GPIO_EMC_23}
  - {pin_num: '132', peripheral: SEMC, signal: 'ADDR, 08', pin_signal: GPIO_EMC_24}
  - {pin_num: '131', peripheral: SEMC, signal: 'ADDR, 09', pin_signal: GPIO_EMC_25}
  - {pin_num: '143', peripheral: SEMC, signal: 'ADDR, 10', pin_signal: GPIO_EMC_15}
  - {pin_num: '130', peripheral: SEMC, signal: 'ADDR, 11', pin_signal: GPIO_EMC_26}
  - {pin_num: '129', peripheral: SEMC, signal: 'ADDR, 12', pin_signal: GPIO_EMC_27}
  - {pin_num: '2', peripheral: SEMC, signal: 'BA, 0', pin_signal: GPIO_EMC_13}
  - {pin_num: '1', peripheral: SEMC, signal: 'BA, 1', pin_signal: GPIO_EMC_14}
  - {pin_num: '7', peripheral: SEMC, signal: semc_cas, pin_signal: GPIO_EMC_10}
  - {pin_num: '127', peripheral: SEMC, signal: semc_cke, pin_signal: GPIO_EMC_29}
  - {pin_num: '126', peripheral: SEMC, signal: semc_clk, pin_signal: GPIO_EMC_30}
  - {pin_num: '3', peripheral: SEMC, signal: 'CS, 0', pin_signal: GPIO_EMC_12}
  - {pin_num: '8', peripheral: SEMC, signal: semc_we, pin_signal: GPIO_EMC_09}
  - {pin_num: '4', peripheral: SEMC, signal: semc_ras, pin_signal: GPIO_EMC_11}
  - {pin_num: '128', peripheral: SEMC, signal: semc_dqs, pin_signal: GPIO_EMC_28}
  - {pin_num: '125', peripheral: SEMC, signal: 'DM, 1', pin_signal: GPIO_EMC_31}
  - {pin_num: '9', peripheral: SEMC, signal: 'DM, 0', pin_signal: GPIO_EMC_08}
  - {pin_num: '117', peripheral: SEMC, signal: 'DATA, 15', pin_signal: GPIO_EMC_39}
  - {pin_num: '118', peripheral: SEMC, signal: 'DATA, 14', pin_signal: GPIO_EMC_38}
  - {pin_num: '119', peripheral: SEMC, signal: 'DATA, 13', pin_signal: GPIO_EMC_37}
  - {pin_num: '120', peripheral: SEMC, signal: 'DATA, 12', pin_signal: GPIO_EMC_36}
  - {pin_num: '122', peripheral: SEMC, signal: 'DATA, 10', pin_signal: GPIO_EMC_34}
  - {pin_num: '121', peripheral: SEMC, signal: 'DATA, 11', pin_signal: GPIO_EMC_35}
  - {pin_num: '123', peripheral: SEMC, signal: 'DATA, 09', pin_signal: GPIO_EMC_33}
  - {pin_num: '124', peripheral: SEMC, signal: 'DATA, 08', pin_signal: GPIO_EMC_32}
  - {pin_num: '10', peripheral: SEMC, signal: 'DATA, 07', pin_signal: GPIO_EMC_07}
  - {pin_num: '12', peripheral: SEMC, signal: 'DATA, 06', pin_signal: GPIO_EMC_06}
  - {pin_num: '13', peripheral: SEMC, signal: 'DATA, 05', pin_signal: GPIO_EMC_05}
  - {pin_num: '14', peripheral: SEMC, signal: 'DATA, 04', pin_signal: GPIO_EMC_04}
  - {pin_num: '15', peripheral: SEMC, signal: 'DATA, 03', pin_signal: GPIO_EMC_03}
  - {pin_num: '16', peripheral: SEMC, signal: 'DATA, 02', pin_signal: GPIO_EMC_02}
  - {pin_num: '17', peripheral: SEMC, signal: 'DATA, 01', pin_signal: GPIO_EMC_01}
  - {pin_num: '18', peripheral: SEMC, signal: 'DATA, 00', pin_signal: GPIO_EMC_00}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSDRAMPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitSDRAMPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_00_SEMC_DATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_01_SEMC_DATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_02_SEMC_DATA02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_03_SEMC_DATA03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_04_SEMC_DATA04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_05_SEMC_DATA05, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_06_SEMC_DATA06, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_07_SEMC_DATA07, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_08_SEMC_DM00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_09_SEMC_WE, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_10_SEMC_CAS, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_11_SEMC_RAS, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_12_SEMC_CS0, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_13_SEMC_BA0, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_14_SEMC_BA1, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_15_SEMC_ADDR10, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_16_SEMC_ADDR00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_17_SEMC_ADDR01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_18_SEMC_ADDR02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_SEMC_ADDR03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_SEMC_ADDR04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_21_SEMC_ADDR05, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_22_SEMC_ADDR06, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_23_SEMC_ADDR07, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_24_SEMC_ADDR08, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_25_SEMC_ADDR09, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_26_SEMC_ADDR11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_27_SEMC_ADDR12, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_28_SEMC_DQS, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_29_SEMC_CKE, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_30_SEMC_CLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_31_SEMC_DM01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_32_SEMC_DATA08, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_33_SEMC_DATA09, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_34_SEMC_DATA10, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_35_SEMC_DATA11, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_36_SEMC_DATA12, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_37_SEMC_DATA13, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_38_SEMC_DATA14, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_39_SEMC_DATA15, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitCANPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '32', peripheral: CAN1, signal: RX, pin_signal: GPIO_SD_B1_01}
  - {pin_num: '33', peripheral: CAN1, signal: TX, pin_signal: GPIO_SD_B1_00}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitCANPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitCANPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_00_FLEXCAN1_TX, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_01_FLEXCAN1_RX, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitENETPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '97', peripheral: ENET, signal: enet_rx_en, pin_signal: GPIO_AD_B0_11}
  - {pin_num: '84', peripheral: GPIO1, signal: 'gpio_io, 22', pin_signal: GPIO_AD_B1_06}
  - {pin_num: '107', peripheral: GPIO1, signal: 'gpio_io, 04', pin_signal: GPIO_AD_B0_04}
  - {pin_num: '100', peripheral: ENET, signal: enet_tx_clk, pin_signal: GPIO_AD_B0_08}
  - {pin_num: '95', peripheral: ENET, signal: enet_tx_en, pin_signal: GPIO_AD_B0_13}
  - {pin_num: '93', peripheral: ENET, signal: 'enet_tx_data, 1', pin_signal: GPIO_AD_B0_15}
  - {pin_num: '94', peripheral: ENET, signal: 'enet_tx_data, 0', pin_signal: GPIO_AD_B0_14}
  - {pin_num: '96', peripheral: ENET, signal: enet_rx_er, pin_signal: GPIO_AD_B0_12}
  - {pin_num: '99', peripheral: ENET, signal: 'enet_rx_data, 1', pin_signal: GPIO_AD_B0_09}
  - {pin_num: '98', peripheral: ENET, signal: 'enet_rx_data, 0', pin_signal: GPIO_AD_B0_10}
  - {pin_num: '116', peripheral: ENET, signal: enet_mdio, pin_signal: GPIO_EMC_40}
  - {pin_num: '115', peripheral: ENET, signal: enet_mdc, pin_signal: GPIO_EMC_41}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitENETPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitENETPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_04_GPIO1_IO04, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_08_ENET_TX_CLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_09_ENET_RDATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_10_ENET_RDATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_11_ENET_RX_EN, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_ENET_RX_ER, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_ENET_TX_EN, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_14_ENET_TDATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_15_ENET_TDATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_06_GPIO1_IO22, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_40_ENET_MDIO, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_41_ENET_MDC, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitUSDHCPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '45', peripheral: USDHC1, signal: usdhc_clk, pin_signal: GPIO_SD_B0_03}
  - {pin_num: '46', peripheral: USDHC1, signal: usdhc_cmd, pin_signal: GPIO_SD_B0_02}
  - {pin_num: '43', peripheral: USDHC1, signal: 'usdhc_data, 0', pin_signal: GPIO_SD_B0_04}
  - {pin_num: '42', peripheral: USDHC1, signal: 'usdhc_data, 1', pin_signal: GPIO_SD_B0_05}
  - {pin_num: '48', peripheral: USDHC1, signal: 'usdhc_data, 2', pin_signal: GPIO_SD_B0_00}
  - {pin_num: '47', peripheral: USDHC1, signal: 'usdhc_data, 3', pin_signal: GPIO_SD_B0_01}
  - {pin_num: '41', peripheral: GPIO3, signal: 'gpio_io, 19', pin_signal: GPIO_SD_B0_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitUSDHCPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitUSDHCPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_00_USDHC1_DATA2, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_01_USDHC1_DATA3, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_02_USDHC1_CMD, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_03_USDHC1_CLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_04_USDHC1_DATA0, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_05_USDHC1_DATA1, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_06_GPIO3_IO19, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitQSPIPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '24', peripheral: FLEXSPI, signal: FLEXSPI_A_SCLK, pin_signal: GPIO_SD_B1_07}
  - {pin_num: '23', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA0, pin_signal: GPIO_SD_B1_08}
  - {pin_num: '21', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA1, pin_signal: GPIO_SD_B1_10}
  - {pin_num: '22', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA2, pin_signal: GPIO_SD_B1_09}
  - {pin_num: '25', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA3, pin_signal: GPIO_SD_B1_06}
  - {pin_num: '19', peripheral: FLEXSPI, signal: FLEXSPI_A_SS0_B, pin_signal: GPIO_SD_B1_11}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitQSPIPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitQSPIPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_06_FLEXSPI_A_DATA03, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_07_FLEXSPI_A_SCLK, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_08_FLEXSPI_A_DATA00, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_09_FLEXSPI_A_DATA02, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_10_FLEXSPI_A_DATA01, 0U);
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_11_FLEXSPI_A_SS0_B, 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
