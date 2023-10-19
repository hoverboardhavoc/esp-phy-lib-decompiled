/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> remove_11b_4p8G_spur
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 remove_11b_4p8G_spur(byte param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,(ushort)DAT_6001235d)) & 0xfff87fff;
  uVar3 = CONCAT13((char)(uVar3 >> 0x18),
                   CONCAT12((char)(uVar3 >> 0x10),CONCAT11(param_3,(char)uVar3))) & 0xfff87fff;
  uVar2 = uVar3 | 0x80000 | (param_2 & 0xf) << 0xf;
  uVar1 = (undefined1)(uVar2 >> 0x10);
  uVar3 = CONCAT13((char)(uVar3 >> 0x18),CONCAT12(uVar1,CONCAT11((char)(uVar2 >> 8),(char)uVar3))) &
          0xfffffffe;
  DAT_6001235d = param_1 & 1 | (byte)uVar3;
  DAT_6001235e = (char)(uVar3 >> 8);
  DAT_6001235f = (byte)(uVar3 >> 0x10) | 8;
  DAT_60012360 = (char)(uVar3 >> 0x18);
  return uVar1;
}

