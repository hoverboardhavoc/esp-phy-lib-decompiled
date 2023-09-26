/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> change_data_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 change_data_rate(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 4:
    return 1;
  case 1:
  case 5:
    return 2;
  case 2:
  case 6:
    return 5;
  case 3:
  case 7:
    return 0xb;
  case 8:
    return 0x30;
  case 9:
    return 0x18;
  case 10:
    return 0xc;
  case 0xb:
    return 6;
  case 0xc:
    return 0x36;
  case 0xd:
    return 0x24;
  case 0xe:
    return 0x12;
  case 0xf:
    return 9;
  case 0x10:
    if (tx_cbw40m_en == '\0') {
      return 6;
    }
    return 0xd;
  case 0x11:
    uVar1 = 0xd;
    if (tx_cbw40m_en != '\0') {
      return 0x1b;
    }
    break;
  case 0x12:
    uVar1 = 0x28;
    if (tx_cbw40m_en == '\0') {
      return 0x13;
    }
    break;
  case 0x13:
    uVar1 = 0x36;
    if (tx_cbw40m_en == '\0') {
      return 0x1a;
    }
    break;
  case 0x14:
    uVar1 = 0x51;
    if (tx_cbw40m_en == '\0') {
      return 0x27;
    }
    break;
  case 0x15:
    uVar1 = 0x6c;
    if (tx_cbw40m_en == '\0') {
      return 0x34;
    }
    break;
  case 0x16:
    uVar1 = 0x79;
    if (tx_cbw40m_en == '\0') {
      return 0x3a;
    }
    break;
  case 0x17:
    uVar1 = 0x87;
    if (tx_cbw40m_en == '\0') {
      return 0x41;
    }
    break;
  case 0x18:
    uVar1 = 0xcf;
    if (tx_cbw40m_en == '\0') {
      return 0x68;
    }
    break;
  case 0x19:
    uVar1 = 0xcb;
    if (tx_cbw40m_en == '\0') {
      return 0x72;
    }
    break;
  default:
    phy_printf("input data rate error!!! it must be in [0x0 : 0x17]\n");
    return 1;
  }
  return uVar1;
}

