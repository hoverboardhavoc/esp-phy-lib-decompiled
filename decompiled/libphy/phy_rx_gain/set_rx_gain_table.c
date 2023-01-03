/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_table(void)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_1d4 [16];
  undefined4 uStack_1c4;
  undefined2 uStack_1c0;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined1 uStack_1b6;
  undefined4 uStack_1b4;
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined1 uStack_196;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined1 uStack_186;
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [348];
  
  memcpy(auStack_184,&DAT_00010794,0x10);
  memcpy(auStack_1d4,&DAT_000107a4,0xe);
  uVar1 = _rfrx_gain_index_new;
  uStack_1c4 = 0x6060a0b;
  uStack_1c0 = 0x606;
  uStack_1b4 = 0x5060e0b;
  uStack_194 = 0x8080000;
  uStack_1b0 = 0x806;
  uStack_1a0 = 0x8080808;
  uStack_1bc = 0;
  uStack_1ba = 0;
  uStack_1b8 = 0;
  uStack_1b6 = 0;
  uStack_1be = 8;
  uStack_1ae = 0;
  uStack_1ac = 0;
  uStack_1aa = 0;
  uStack_1a8 = 0;
  uStack_1a6 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_196 = 0;
  uStack_1a4 = 0x8080803;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_186 = 0;
  uStack_190 = 0x80808;
  if ((_DAT_000110b4 & 0x200) == 0) {
    if ((_DAT_000110b4 & 0x80) == 0) {
      set_rx_gain_cal_dc_new(1,&phy_param);
      set_rx_gain_cal_dc_new(0,&phy_param);
      _DAT_000110b4 = _DAT_000110b4 | 0x80;
    }
    uVar1 = uVar1 >> 8 & 1;
    uVar2 = gen_rx_gain_table_new(auStack_174,0x21,auStack_184,&uStack_1c4,&uStack_1a4,8,uVar1);
    if (uVar2 < 0x50) {
      DAT_00011131 = (byte)uVar2;
    }
    else {
      DAT_00011131 = 0x4f;
    }
    wr_rx_gain_mem(0,DAT_00011131 + 1,auStack_174,&phy_param);
    uVar2 = gen_rx_gain_table_new(auStack_174,0x1c,auStack_1d4,&uStack_1b4,&uStack_194,7,uVar1);
    if (uVar2 < 0x50) {
      DAT_00011130 = (char)uVar2;
    }
    else {
      DAT_00011130 = 'O';
    }
    wr_rx_gain_mem(1,DAT_00011130 + '\x01',auStack_174,&phy_param);
    _DAT_000110b4 = _DAT_000110b4 | 0x200;
  }
  _DAT_600a702c = (DAT_00011131 & 0x7f) << 8 | _DAT_600a702c & 0xffff80ff;
  uVar2 = (uint)DAT_00011131;
  if (0x4c < uVar2) {
    uVar2 = 0x4c;
  }
  _DAT_600a713c = uVar2 << 0x12 | _DAT_600a713c & 0xfe03ffff;
  bt_gain_offset(0x50);
  iq_corr_enable();
  _DAT_00011058 = _phy_param;
  return;
}

