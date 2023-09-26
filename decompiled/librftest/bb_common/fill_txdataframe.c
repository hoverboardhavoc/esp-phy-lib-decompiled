/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> fill_txdataframe
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
fill_txdataframe(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar3 = (uint *)Plcp0AddrGet(10);
  puVar4 = (uint *)ConfAddrGet(10);
  uVar1 = _DAT_600a4060;
  uVar13 = _DAT_600a405c;
  if (param_1 == 6) {
    *param_6 = 0xb;
    *param_7 = 0;
    iVar2 = 0;
  }
  else {
    if (param_1 == 5) {
      *param_6 = 0xb;
      *param_7 = 0;
_L206:
      iVar2 = 3;
    }
    else {
      if (param_1 != 4) {
        if (param_1 == 3) {
          *param_6 = 0x16;
          uVar6 = 1;
        }
        else {
          if (param_1 != 2) {
            if (param_1 == 1) {
              *param_6 = test_tx_rate;
              *param_7 = 0;
            }
            else {
              *param_6 = 0x17;
              *param_7 = 1;
            }
            iVar2 = 1;
            goto _L186;
          }
          *param_6 = _ate_rate;
          uVar6 = ate_gi_bit;
        }
        *param_7 = uVar6;
        goto _L206;
      }
      *param_6 = 8;
      *param_7 = 0;
      iVar2 = 0;
    }
_L186:
    param_2 = param_2 + 0x28;
  }
  if (param_2 < 0xff9) {
    iVar5 = 0;
    iVar10 = 0;
    iVar8 = 0;
    iVar7 = param_2;
  }
  else {
    iVar7 = 0xff8;
    if (param_2 < 0x10f9) {
      iVar8 = param_2 + -0xff8;
      iVar5 = 0;
      iVar10 = 0;
    }
    else {
      if (param_2 < 0x1201) {
        iVar10 = param_2 + -0x10f8;
        iVar5 = 0;
      }
      else {
        if (0x12f8 < param_2) {
          iVar5 = 0;
          iVar10 = 0;
          iVar8 = 0;
          iVar7 = 0;
          goto _L191;
        }
        iVar5 = param_2 + -0x11f8;
        iVar10 = 0x100;
      }
      iVar8 = 0x100;
    }
  }
_L191:
  fill_tx_frame(10,*param_6,param_2,iVar7,iVar8,iVar10,iVar5,0);
  *puVar3 = iVar2 << 0x18 | *puVar3 & 0xf8ffffff;
  *puVar4 = *puVar4 & 0xffc00fff | 0x1000;
  uVar6 = 0x80;
  if (param_1 != 6) {
    uVar6 = 0xfa0008;
  }
  uVar11 = uVar13 << 0x10;
  uVar12 = uVar13 >> 0x10;
  if (param_1 == 6) {
    uVar9 = uVar1 & 0xffff | 0x5d800000;
  }
  else {
    uVar9 = 0;
    uVar13 = 0;
  }
  *_PSDU0_OFFSET = uVar6;
  _PSDU0_OFFSET[1] = param_3;
  _PSDU0_OFFSET[2] = param_4 & 0xffff | uVar11;
  _PSDU0_OFFSET[3] = uVar1 << 0x10 | uVar12;
  _PSDU0_OFFSET[4] = uVar13;
  _PSDU0_OFFSET[5] = uVar9;
  _PSDU0_OFFSET[6] = 0xa0431;
  _PSDU0_OFFSET[7] = 0;
  _PSDU0_OFFSET[8] = param_5;
  if (param_1 == 6) {
    *puVar4 = *puVar4 & 0xf0ffffff | 0x1000000;
    *puVar4 = *puVar4 & 0xffc00fff | 0xa000;
  }
  return _PSDU0_OFFSET + 9;
}

