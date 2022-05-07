/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_table_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_table_new(void)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_1cc [16];
  undefined1 auStack_1bc [16];
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined2 uStack_1a0;
  undefined1 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined1 uStack_18e;
  undefined1 auStack_18c [20];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [340];
  
  memcpy(auStack_18c,&_LANCHOR0,0x12);
  memcpy(auStack_178,&_LANCHOR0,0x12);
  memcpy(auStack_1cc,&DAT_0001021c,0xf);
  memcpy(auStack_1bc,&DAT_0001021c,0xf);
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19e = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18e = 0;
  if ((_DAT_0001114c & 0x200) == 0) {
    uVar1 = _DAT_000110a6 >> 8 & 1;
    uVar2 = gen_rx_gain_table(auStack_164,0x28,auStack_178,auStack_1bc,&uStack_19c,9,uVar1);
    if (uVar2 < 0x50) {
      DAT_00011221 = (byte)uVar2;
    }
    else {
      DAT_00011221 = 0x4f;
    }
    set_rx_gain_param(1,&phy_param,auStack_178,DAT_00011221 + 1,auStack_164,9);
    wr_rx_gain_mem(1,DAT_00011221 + 1,auStack_164,&phy_param);
    uVar2 = gen_rx_gain_table(auStack_164,0x28,auStack_18c,auStack_1cc,&uStack_1ac,9,uVar1);
    if (uVar2 < 0x50) {
      DAT_00011222 = (byte)uVar2;
    }
    else {
      DAT_00011222 = 0x4f;
    }
    set_rx_gain_param(0,&phy_param,auStack_18c,DAT_00011222 + 1,auStack_164,9);
    wr_rx_gain_mem(0,DAT_00011222 + 1,auStack_164,&phy_param);
    _DAT_0001114c = _DAT_0001114c | 0x200;
  }
  _DAT_6004a02c = (DAT_00011222 & 0x7f) << 8 | _DAT_6004a02c & 0xffff80ff;
  uVar2 = (uint)DAT_00011222;
  if (0x4c < uVar2) {
    uVar2 = 0x4c;
  }
  _DAT_6004a13c = uVar2 << 0x12 | _DAT_6004a13c & 0xfe03ffff;
  _DAT_6004a0a4 = (DAT_00011221 & 0x7f) << 0xf | _DAT_6004a0a4 & 0xffc07fff;
  (**(code **)(_g_phyFuns + 0x110))(0x50,*(code **)(_g_phyFuns + 0x110));
  iq_corr_enable();
  return;
}

