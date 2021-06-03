/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_noise_check_loop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_noise_check_loop(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = phy_param_rom;
  _DAT_6001d044 = _DAT_6001d044 & 0xfffffffe;
  _DAT_6001d050 = _DAT_6001d050 | 1;
  _DAT_6001c018 = _DAT_6001c018 & 0xf7ffffff;
  uVar4 = _DAT_6001c050 & 0x3ff;
  iVar5 = (uVar4 - 0x400) * 0x10000;
  iVar6 = iVar5 >> 0x10;
  *(short *)(phy_param_rom + 0xac) = (short)((uint)iVar5 >> 0x10);
  sVar3 = *(short *)(iVar1 + 0x1f8);
  iVar5 = (int)sVar3;
  if (param_1 == 0xff) {
    phy_printf("noise value: %d, %d, %d\n",iVar6,iVar5,(int)*(short *)(iVar1 + 0x164));
  }
  iVar1 = phy_param_rom;
  if (0x3e < (uVar4 - 0x26d & 0xffff)) goto _L212;
  if (iVar6 < -0x188) {
    iVar6 = -0x188;
  }
  sVar2 = (short)iVar6;
  if (-0x160 < sVar2) {
    sVar2 = -0x160;
  }
  iVar6 = (int)sVar2;
  if (iVar5 < iVar6) {
    sVar3 = (short)((iVar6 + iVar5 * 3 + -2) / 4);
_L226:
    *(short *)(phy_param_rom + 0x1f8) = sVar3;
  }
  else if (iVar6 < iVar5) {
    if (iVar6 < iVar5 + -0x10) {
      sVar3 = sVar3 + -0xc;
    }
    else {
      sVar3 = (short)((iVar6 * 3 + iVar5 + -2) / 4);
    }
    goto _L226;
  }
  iVar6 = (int)*(short *)(iVar1 + 0x164);
  sVar3 = *(short *)(iVar1 + 0x1f8);
  iVar5 = (int)sVar3;
  if (*(char *)(iVar1 + 0xab) == '\0') {
    if ((iVar5 <= iVar6 + 4) && (iVar6 + -4 <= iVar5)) goto _L212;
  }
  else if (-0x180 < iVar5) {
    sVar3 = (short)((iVar5 + -0x180) / 2);
  }
  *(short *)(iVar1 + 0x164) = sVar3;
  if (param_2 != 0) {
    (**(code **)(_g_phyFuns + 0x8c))((int)*(short *)(iVar1 + 0x164),*(code **)(_g_phyFuns + 0x8c));
    if (param_1 == 0xff) {
      phy_printf("rx noise set : old=%d, new=%d\n",iVar6,(int)*(short *)(phy_param_rom + 0x164));
    }
  }
_L212:
  _DAT_6001d044 = _DAT_6001d044 | 1;
  return;
}

