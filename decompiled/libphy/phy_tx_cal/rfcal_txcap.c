/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_txcap(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  
  start_tx_tone_step(1,param_1,param_2,0,0,0);
  iVar8 = 0;
  do {
    cVar9 = (char)iVar8;
    bVar1 = (&_LANCHOR1)[iVar8];
    iVar11 = 0;
    *param_4 = bVar1;
    uVar2 = (uint)(char)bVar1;
    uVar10 = uVar2;
    for (; -1 < (int)uVar2; uVar2 = (int)(((uVar2 & 0xff) - 1) * 0x1000000) >> 0x18) {
      if (cVar9 == '\x01') {
        uVar6 = 0;
        uVar5 = 3;
_L127:
        uVar4 = 2;
      }
      else {
        if (cVar9 == '\x02') {
          uVar6 = 4;
          uVar5 = 7;
          goto _L127;
        }
        uVar6 = 0;
        uVar5 = 3;
        uVar4 = 1;
      }
      (**(code **)(_g_phyFuns + 0x1bc))
                (0x6b,0,uVar4,uVar5,uVar6,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
      sVar3 = get_tone_sar_dout(1);
      iVar7 = (int)sVar3;
      if (param_3 != 0) {
        phy_printf("%d, %d; ",uVar10,iVar7);
      }
      if (iVar11 < iVar7) {
        *param_4 = (byte)uVar2;
        iVar11 = iVar7;
      }
      else if ((0x14 < iVar11 - iVar7) && ((int)uVar10 < (int)(uint)*param_4)) break;
      uVar10 = uVar10 - 1;
    }
    if (param_3 != 0) {
      phy_printf("reg_i=%d, indata=%d\n",iVar8,*param_4);
    }
    if (cVar9 == '\x01') {
      uVar6 = 0;
      uVar5 = 3;
_L129:
      uVar4 = 2;
    }
    else {
      if (cVar9 == '\x02') {
        uVar6 = 4;
        uVar5 = 7;
        goto _L129;
      }
      uVar6 = 0;
      uVar5 = 3;
      uVar4 = 1;
    }
    (**(code **)(_g_phyFuns + 0x1bc))
              (0x6b,0,uVar4,uVar5,uVar6,*param_4,*(code **)(_g_phyFuns + 0x1bc));
    iVar8 = iVar8 + 1;
    param_4 = param_4 + 1;
    if (iVar8 == 3) {
      stop_tx_tone(1);
      return;
    }
  } while( true );
}

