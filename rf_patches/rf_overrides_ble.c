/******************************************************************************
*  Filename:       rf_overrides_ble.h
*  Revised:        2016-02-16 10:00:00 +0100 (tue, 16 Feb 2016)
*  Revision:
*
*  Description:    Recommended BLE overrides for CC13xx
*
*  Copyright (c) 2016, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#ifndef _RF_OVERRIDES_BLE_H
#define _RF_OVERRIDES_BLE_H

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

// Recommended overrides for Bluetooth Low Energy, differential mode external bias
uint32_t bleXdOverrides[] = {
  0x849f0002,
  0xc7440002,
  0x00344038,
  0x00456088,
  0x05fd6084,
  0x7f004020,
  0x00404064,
  0x4001405d,
  0x18000000,
  0x013800c3,
  0x000784a3,
  0xb1070503,
  0x05330523,
  0xa47e0583,
  0xeae00603,
  0x00010623,
  0x00038883,
  0x00f388a3,
  0x04b00243,
  0xffffffff,
};

// Recommended overrides for Bluetooth Low Energy, differential mode internal bias
uint32_t bleIdOverrides[] = {
  0x849f0002,
  0xc7440002,
  0x00344038,
  0x00456088,
  0x05fd6084,
  0x7f004020,
  0x00404064,
  0x4001405d,
  0x18000000,
  0x013800c3,
  0x000784a3,
  0xb1070503,
  0x05330523,
  0xa47e0583,
  0xeae00603,
  0x00010623,
  0x00038883,
  0x00f388a3,
  0x04b00243,
  0xffffffff,
};

// Recommended overrides for Bluetooth Low Energy, single-ended mode external bias
uint32_t bleXsOverrides[] = {
  0x849f0002,
  0xc7440002,
  0x00344038,
  0x00456088,
  0x05fd6084,
  0x7f004020,
  0x00404064,
  0x4001405d,
  0x18000000,
  0x013800c3,
  0x000784a3,
  0xb1070503,
  0x05330523,
  0xa47e0583,
  0xeae00603,
  0x00010623,
  0x00038883,
  0x00f388a3,
  0x04b00243,
  0xffffffff,
};

// Recommended overrides for Bluetooth Low Energy, single-ended mode internal bias
uint32_t bleIsOverrides[] = {
  0x849f0002,
  0xc7440002,
  0x00344038,
  0x00456088,
  0x05fd6084,
  0x7f004020,
  0x00404064,
  0x4001405d,
  0x18000000,
  0x013800c3,
  0x000784a3,
  0xb1070503,
  0x05330523,
  0xa47e0583,
  0xeae00603,
  0x00010623,
  0x00038883,
  0x00f388a3,
  0x04b00243,
  0xffffffff,
};

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif