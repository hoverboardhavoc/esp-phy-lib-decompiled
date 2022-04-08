/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_phy_i2c_init1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_phy_i2c_init1(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  phy_i2c_enter_critical();
  uStack_50 = DAT_000120c1;
  uStack_4f = DAT_000120c2;
  uStack_4e = DAT_000120c3;
  uStack_4d = DAT_000120c4;
  uStack_4c = DAT_000120c5;
  uStack_4b = DAT_000120c6;
  uStack_4a = DAT_000120c7;
  uStack_49 = DAT_000120c8;
  uStack_48 = DAT_000120c9;
  uStack_68 = 0x6b6b6b6b;
  uStack_64 = 0x6b6b6b6b;
  uStack_60 = 0x6b6b;
  uStack_5c = 0x4030201;
  uStack_58 = 0x8070605;
  uStack_54 = 0xb0a;
  uStack_47 = DAT_000120ca;
  uStack_2c = DAT_000120cb;
  uStack_2b = DAT_000120cc;
  uStack_2a = DAT_000120cd;
  uStack_29 = DAT_000120ce;
  uStack_28 = DAT_000120cf;
  uStack_27 = DAT_000120d0;
  uStack_26 = DAT_000120d1;
  uStack_25 = DAT_000120d2;
  uStack_24 = DAT_000120d3;
  uStack_44 = 0x62626262;
  uStack_40 = 0x64636262;
  uStack_3c = 0x6764;
  uStack_23 = DAT_000120d4;
  uStack_38 = 0x90a0803;
  uStack_34 = 0x8010004;
  uStack_30 = 0x204;
  uVar1 = (**(code **)(_g_phyFuns + 0x17c))(0x6b,*(code **)(_g_phyFuns + 0x17c));
  _DAT_6000e048 = uVar1 & 0x1fff0 | _DAT_6000e048 & 0xfffe000f;
  (**(code **)(_g_phyFuns + 0x1a4))
            (&uStack_68,&uStack_5c,&uStack_50,&uStack_44,&uStack_38,&uStack_2c,10,0);
  _DAT_6000e048 = _DAT_6000e048 & 0xfffe000f | 0x1fe00;
  iVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x69,0,4,3,0,*(code **)(_g_phyFuns + 0x1b8));
  if (iVar2 == 0) {
    rom_i2c_sar2_init_code(0x578);
  }
  phy_i2c_exit_critical();
  return;
}

