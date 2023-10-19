/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> check_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int check_noise_floor(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d))) &
          0xff7fffff;
  uVar6 = CONCAT13((char)(uVar6 >> 0x18),
                   CONCAT12((char)(uVar6 >> 0x10),CONCAT11((char)(uVar6 >> 8),DAT_6001235d))) &
          0xfdffffff;
  DAT_6001235e = (undefined1)(uVar6 >> 8);
  bVar1 = (byte)(uVar6 >> 0x10);
  DAT_60012360 = (byte)(uVar6 >> 0x18);
  DAT_6001235f = bVar1 | 0x80;
  iVar2 = phy_time_now(DAT_6001235d,bVar1,DAT_60012360);
  bVar5 = false;
  while( true ) {
    if (((int)((uint)DAT_60012360 << 0x1f) < 0) || (bVar5)) break;
    iVar3 = phy_time_now();
    bVar5 = 10000 < (uint)(iVar3 - iVar2);
  }
  uVar6 = CONCAT11(DAT_60012396,DAT_60012395) | 0xfffffc00;
  if ((int)uVar6 < -0x188) {
    uVar6 = 0xfffffe78;
  }
  sVar4 = (short)uVar6;
  if (-0x160 < sVar4) {
    sVar4 = -0x160;
  }
  if (bVar5) {
    sVar4 = -sVar4;
  }
  return (int)sVar4;
}

