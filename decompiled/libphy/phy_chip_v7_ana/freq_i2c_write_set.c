/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> freq_i2c_write_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_i2c_write_set(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int in_stack_00000000;
  
  _DAT_6000e164 = 0;
  _DAT_6000e0c4 = (param_8 & 0x1f) << 10 | _DAT_6000e0c4 & 0xffff83ff;
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    if (*(char *)(in_stack_00000000 + uVar2) == '\x01') {
      _DAT_6000e164 = _DAT_6000e164 + (1 << (uVar2 & 0x1f));
    }
  }
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    uVar3 = (uVar2 & 0xff) >> 3;
    uVar5 = uVar2 << 2;
    uVar4 = *(byte *)(param_1 + uVar2) & 0xf;
    if (uVar3 == 0) {
      _DAT_6000e100 = ~(0xf << (uVar5 & 0x1f)) & _DAT_6000e100 | uVar4 << (uVar5 & 0x1f);
    }
    else {
      uVar5 = uVar5 & 0x1c;
      if (uVar3 == 1) {
        _DAT_6000e104 = ~(0xf << uVar5) & _DAT_6000e104 | uVar4 << uVar5;
      }
      else {
        _DAT_6000e108 = ~(0xf << uVar5) & _DAT_6000e108 | uVar4 << uVar5;
      }
    }
  }
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    uVar5 = uVar2 << 4;
    uVar3 = (uint)CONCAT11(*(undefined1 *)(param_3 + uVar2),*(undefined1 *)(param_2 + uVar2));
    switch((uVar2 & 0xff) >> 1) {
    case 0:
      _DAT_6000e0d8 = ~(0xffff << (uVar5 & 0x1f)) & _DAT_6000e0d8 | uVar3 << (uVar5 & 0x1f);
      break;
    case 1:
      _DAT_6000e0dc = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0dc | uVar3 << (uVar5 & 0x10);
      break;
    case 2:
      _DAT_6000e0e0 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0e0 | uVar3 << (uVar5 & 0x10);
      break;
    case 3:
      _DAT_6000e0e4 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0e4 | uVar3 << (uVar5 & 0x10);
      break;
    case 4:
      _DAT_6000e0e8 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0e8 | uVar3 << (uVar5 & 0x10);
      break;
    case 5:
      _DAT_6000e0ec = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0ec | uVar3 << (uVar5 & 0x10);
      break;
    case 6:
      _DAT_6000e0f0 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0f0 | uVar3 << (uVar5 & 0x10);
      break;
    case 7:
      _DAT_6000e0f4 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e0f4 | uVar3 << (uVar5 & 0x10);
      break;
    case 8:
      _DAT_6000e10c = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e10c | uVar3 << (uVar5 & 0x10);
      break;
    default:
      _DAT_6000e110 = ~(0xffff << (uVar5 & 0x10)) & _DAT_6000e110 | uVar3 << (uVar5 & 0x10);
    }
  }
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    uVar5 = ~(1 << (uVar2 & 0x1f));
    _DAT_6000e128 = (*(byte *)(param_6 + uVar2) >> 4 & 1) << (uVar2 & 0x1f) | _DAT_6000e128 & uVar5;
    pbVar7 = (byte *)(param_4 + uVar2);
    _DAT_6000e12c = (*pbVar7 >> 4 & 1) << (uVar2 & 0x1f) | uVar5 & _DAT_6000e12c;
    iVar6 = (uVar2 & 7) * 4;
    uVar3 = (uVar2 & 0xff) >> 3;
    uVar5 = ~(0xf << iVar6);
    uVar4 = (uint)*(byte *)(param_6 + uVar2);
    if (uVar3 == 0) {
      _DAT_6000e0d0 = (uVar4 & 0xf) << iVar6 | _DAT_6000e0d0 & uVar5;
      _DAT_6000e11c = (*pbVar7 & 0xf) << iVar6 | _DAT_6000e11c & uVar5;
    }
    else if (uVar3 == 1) {
      _DAT_6000e0d4 = (uVar4 & 0xf) << iVar6 | _DAT_6000e0d4 & uVar5;
      _DAT_6000e120 = (*pbVar7 & 0xf) << iVar6 | _DAT_6000e120 & uVar5;
    }
    else {
      _DAT_6000e124 =
           (*pbVar7 & 0xf) << (iVar6 + 0x10U & 0x1f) |
           ~(0xf << (iVar6 + 0x10U & 0x1f)) & ((uVar4 & 0xf) << iVar6 | _DAT_6000e124 & uVar5);
    }
  }
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    uVar5 = (uint)*(byte *)(param_6 + uVar2);
    bVar1 = *(byte *)(param_6 + uVar2) >> 2;
    if (bVar1 == 1) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e0cc = ~(0xff << iVar6) & _DAT_6000e0cc | (uint)*(byte *)(param_7 + uVar2) << iVar6;
    }
    else if (bVar1 == 0) {
      _DAT_6000e0c8 =
           ~(0xff << (uVar5 << 3 & 0x1f)) & _DAT_6000e0c8 |
           (uint)*(byte *)(param_7 + uVar2) << (uVar5 << 3 & 0x1f);
    }
    else if (bVar1 == 2) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e114 = ~(0xff << iVar6) & _DAT_6000e114 | (uint)*(byte *)(param_7 + uVar2) << iVar6;
    }
    else if (bVar1 == 3) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e118 = ~(0xff << iVar6) & _DAT_6000e118 | (uint)*(byte *)(param_7 + uVar2) << iVar6;
    }
    uVar5 = (uint)*(byte *)(param_4 + uVar2);
    bVar1 = *(byte *)(param_4 + uVar2) >> 2;
    if (bVar1 == 1) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e0cc = ~(0xff << iVar6) & _DAT_6000e0cc | (uint)*(byte *)(param_5 + uVar2) << iVar6;
    }
    else if (bVar1 == 0) {
      _DAT_6000e0c8 =
           ~(0xff << (uVar5 << 3 & 0x1f)) & _DAT_6000e0c8 |
           (uint)*(byte *)(param_5 + uVar2) << (uVar5 << 3 & 0x1f);
    }
    else if (bVar1 == 2) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e114 = ~(0xff << iVar6) & _DAT_6000e114 | (uint)*(byte *)(param_5 + uVar2) << iVar6;
    }
    else if (bVar1 == 3) {
      iVar6 = (uVar5 & 3) << 3;
      _DAT_6000e118 = ~(0xff << iVar6) & _DAT_6000e118 | (uint)*(byte *)(param_5 + uVar2) << iVar6;
    }
  }
  return;
}

