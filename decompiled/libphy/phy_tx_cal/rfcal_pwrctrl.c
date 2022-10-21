/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> rfcal_pwrctrl
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_pwrctrl(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = (param_3 + -1) * 0x1000000 >> 0x18;
  iVar8 = 0;
  do {
    if ((char)iVar10 < '\0') {
      stop_tx_tone(1);
      return;
    }
    uVar4 = (uint)*(byte *)(param_2 + iVar10);
    if (iVar10 < param_3 + -1) {
      iVar8 = uVar4 - ((byte *)(param_2 + iVar10))[1];
    }
    iVar11 = 0;
    uVar9 = 2;
    do {
      iVar5 = iVar8 * -0x1000000 >> 0x18;
      if (0x14 < iVar5) {
        iVar5 = 0x14;
      }
      iVar5 = (param_7 - iVar5) * 0x1000000;
      iVar6 = iVar5 >> 0x18;
      cVar3 = (char)((uint)iVar5 >> 0x18);
      if (iVar6 < 0) {
        cVar3 = '\0';
      }
      if ('d' < cVar3) {
        cVar3 = 'd';
      }
      start_tx_tone_step(1,param_1,0,0,0);
      param_7 = (int)cVar3;
      _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
      iVar5 = get_power_db(param_6);
      iVar1 = get_power_db(param_6);
      iVar5 = ((iVar5 + iVar1) * 0x10000 >> 0x10) + 4 >> 3;
      uVar7 = iVar5 - uVar4;
      if ((int)uVar7 < 0x19) {
        if ((int)uVar7 < -0x18) {
          uVar7 = 0xffffffe8;
          goto _L144;
        }
        if (param_8 != 0) goto _L157;
_L145:
        if (uVar7 == 0) {
          if (iVar11 != 0) break;
        }
        else if ((uVar7 == 0xffffffff) && (uVar9 == 1)) break;
      }
      else {
        uVar7 = 0x18;
_L144:
        if (param_8 != 0) {
_L157:
          uVar2 = get_tone_sar_dout(1);
          phy_printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=%03d %d\n",iVar11,iVar5,
                     uVar4,uVar7,iVar8,param_7,uVar2);
          goto _L145;
        }
      }
      if (uVar9 == 0) break;
      if (iVar6 < 1) {
        if ((int)uVar7 < 0) {
          param_7 = 0;
          break;
        }
      }
      else if ((99 < iVar6) && (0 < (int)uVar7)) {
        param_7 = 100;
        break;
      }
      if (((uVar7 & 0xffff) + 2 & 0xffff) < 5) {
        iVar8 = 1;
        if ((int)uVar7 < 1) {
          iVar8 = -1;
        }
      }
      else {
        iVar8 = (int)(((uVar7 & 0xffff) - ((int)uVar7 >> 2)) * 0x10000) >> 0x10;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar7;
    } while (iVar11 != 10);
    iVar11 = (param_7 - param_4) * 0x1000000;
    if (iVar11 >> 0x18 < -0x18) {
      *(undefined1 *)(param_5 + iVar10) = 0xe8;
    }
    else {
      *(undefined1 *)(param_5 + iVar10) = (char)((uint)iVar11 >> 0x18);
    }
    iVar10 = iVar10 + -1;
  } while( true );
}

