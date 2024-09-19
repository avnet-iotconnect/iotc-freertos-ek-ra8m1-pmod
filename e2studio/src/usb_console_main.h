/***********************************************************************************************************************
* Copyright (c) 2023 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
***********************************************************************************************************************/

/**********************************************************************************************************************
 * File Name    : usb_console_main.h
 * Description  : Entry function.
 *********************************************************************************************************************/


#ifndef HAL_ENTRY_H_
#define HAL_ENTRY_H_

/*******************************************************************************************************************//**
 * @ingroup hal_entry
 * @{
 **********************************************************************************************************************/
#define LINE_CODING_LENGTH          (0x07U)
#define READ_BUF_SIZE               (8U)

extern void usb_console_main (void);

/** @} */
#endif /* HAL_ENTRY_H_ */
