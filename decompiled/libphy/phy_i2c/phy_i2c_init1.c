/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> phy_i2c_init1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_init1(void)

{
  uint uVar1;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  phy_i2c_enter_critical();
  local_40 = 0x6b6b6b6b;
  uStack_3c = 0x6b6b;
  uStack_3a = 0x6b;
  uStack_38 = 0x4030201;
  uStack_34 = 0x404;
  uStack_30 = 0x31223722;
  uStack_2c = 0x3131;
  uStack_2a = 0x31;
  uStack_18 = DAT_00011049;
  uStack_32 = 4;
  uStack_1a = 4;
  uStack_17 = DAT_0001104a;
  uStack_16 = DAT_0001104b;
  uStack_15 = DAT_0001104c;
  uStack_28 = 0x67676767;
  uStack_24 = 0x6262;
  uStack_22 = 0x62;
  uStack_20 = 0x3020100;
  uStack_1c = 0xb;
  uStack_12 = 0x2f;
  uStack_14 = 0x6870;
  _DAT_600ad820 = _DAT_600ad820 & 0xfffe000f | 0x20;
  i2c_paral_write_num(&local_40,&uStack_38,&uStack_30,&uStack_28,&uStack_20,&uStack_18,7,0);
  _DAT_600ad820 = _DAT_600ad820 & 0xfffe000f | 0x1f00;
  uVar1 = chip_i2c_readReg(0x69,0,4);
  if ((uVar1 & 0xf) == 0) {
    i2c_sar2_init_code(0x578);
  }
  phy_i2c_exit_critical();
  return;
}

