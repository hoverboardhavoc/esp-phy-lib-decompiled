/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  puVar3 = (uint *)Plcp0AddrGet(10);
  puVar4 = (uint *)ConfAddrGet(10);
  uVar1 = _DAT_60033044;
  uVar13 = _DAT_60033040;
  if (param_1 == 6) {
    *param_6 = 0xb;
    *param_7 = 0;
    iVar2 = 0;
  }
  else {
    if (param_1 == 5) {
      *param_6 = 0xb;
      *param_7 = 0;
_L161:
      iVar2 = 3;
    }
    else {
      if (param_1 != 4) {
        if (param_1 == 3) {
          *param_6 = 0x16;
          uVar5 = 1;
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
            goto _L141;
          }
          *param_6 = ate_rate;
          uVar5 = ate_gi_bit;
        }
        *param_7 = uVar5;
        goto _L161;
      }
      *param_6 = 8;
      *param_7 = 0;
      iVar2 = 0;
    }
_L141:
    param_2 = param_2 + 0x28;
  }
  if (param_2 < 0x801) {
    iVar12 = 0;
    iVar9 = 0;
    iVar7 = 0;
    iVar6 = param_2;
  }
  else {
    iVar6 = 0x800;
    if (param_2 < 0xe01) {
      iVar7 = param_2 + -0x800;
      iVar12 = 0;
      iVar9 = 0;
    }
    else {
      if (param_2 < 0xf01) {
        iVar9 = param_2 + -0xe00;
        iVar12 = 0;
      }
      else {
        if (0x1000 < param_2) {
          iVar12 = 0;
          iVar9 = 0;
          iVar7 = 0;
          iVar6 = 0;
          goto _L146;
        }
        iVar12 = param_2 + -0xf00;
        iVar9 = 0x100;
      }
      iVar7 = 0x600;
    }
  }
_L146:
  fill_tx_frame(10,*param_6,param_2,iVar6,iVar7,iVar9,iVar12,0);
  *puVar3 = iVar2 << 0x18 | *puVar3 & 0xf8ffffff;
  *puVar4 = *puVar4 & 0xffc00fff | 0x1000;
  uVar5 = 0x80;
  if (param_1 != 6) {
    uVar5 = 0xfa0008;
  }
  uVar10 = uVar13 << 0x10;
  uVar11 = uVar13 >> 0x10;
  if (param_1 == 6) {
    uVar8 = uVar1 & 0xffff | 0x5d800000;
  }
  else {
    uVar8 = 0;
    uVar13 = 0;
  }
  *_PSDU0_OFFSET = uVar5;
  _PSDU0_OFFSET[1] = param_3;
  _PSDU0_OFFSET[2] = param_4 & 0xffff | uVar10;
  _PSDU0_OFFSET[3] = uVar1 << 0x10 | uVar11;
  _PSDU0_OFFSET[4] = uVar13;
  _PSDU0_OFFSET[5] = uVar8;
  _PSDU0_OFFSET[6] = 0xa0431;
  _PSDU0_OFFSET[7] = 0;
  _PSDU0_OFFSET[8] = param_5;
  uVar13 = _DAT_6003507c;
  if (param_1 == 6) {
    *puVar4 = *puVar4 & 0xf0ffffff | 0x1000000;
    *puVar4 = ((uVar13 & 0x3f) + 10) * 0x1000 | *puVar4 & 0xffc00fff;
  }
  return _PSDU0_OFFSET + 9;
}

