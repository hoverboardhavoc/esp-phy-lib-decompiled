/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
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
  undefined1 auStack_1ac [16];
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [20];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [340];
  
  memcpy(auStack_18c,&DAT_00010638,0x12);
  memcpy(auStack_178,&DAT_00010638,0x12);
  memcpy(auStack_1cc,&DAT_0001064c,0xf);
  memcpy(auStack_1bc,&DAT_0001064c,0xf);
  memcpy(auStack_1ac,&DAT_0001065c,0xf);
  memcpy(auStack_19c,&DAT_0001065c,0xf);
  if ((_DAT_00011148 & 0x200) == 0) {
    uVar1 = _DAT_000110a2 >> 8 & 1;
    uVar2 = gen_rx_gain_table(auStack_164,0x28,auStack_178,auStack_1bc,auStack_19c,9,uVar1);
    if (uVar2 < 0x50) {
      DAT_0001121d = (byte)uVar2;
    }
    else {
      DAT_0001121d = 0x4f;
    }
    set_rx_gain_param(1,&phy_param,auStack_178,DAT_0001121d + 1,auStack_164,9);
    wr_rx_gain_mem_new(1,DAT_0001121d + 1,auStack_164,&phy_param);
    uVar2 = gen_rx_gain_table(auStack_164,0x28,auStack_18c,auStack_1cc,auStack_1ac,9,uVar1);
    if (uVar2 < 0x50) {
      DAT_0001121e = (byte)uVar2;
    }
    else {
      DAT_0001121e = 0x4f;
    }
    set_rx_gain_param(0,&phy_param,auStack_18c,DAT_0001121e + 1,auStack_164,9);
    wr_rx_gain_mem_new(0,DAT_0001121e + 1,auStack_164,&phy_param);
    _DAT_00011148 = _DAT_00011148 | 0x200;
  }
  _DAT_6004a02c = (DAT_0001121e & 0x7f) << 8 | _DAT_6004a02c & 0xffff80ff;
  uVar2 = (uint)DAT_0001121e;
  if (0x4c < uVar2) {
    uVar2 = 0x4c;
  }
  _DAT_6004a13c = uVar2 << 0x12 | _DAT_6004a13c & 0xfe03ffff;
  _DAT_6004a0a4 = (DAT_0001121d & 0x7f) << 0xf | _DAT_6004a0a4 & 0xffc07fff;
  (**(code **)(_g_phyFuns + 0x110))(0x50,*(code **)(_g_phyFuns + 0x110));
  iq_corr_enable();
  _DAT_0001128c = _DAT_00011092;
  return;
}

