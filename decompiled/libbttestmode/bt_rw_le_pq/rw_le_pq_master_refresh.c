/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_master_refresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_master_refresh(uint *param_1,uint *param_2,int *param_3,char *param_4,char *param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((_DAT_60031014 & 0x20) != 0) {
    _DAT_60031018 = _DAT_60031018 | 0x20;
    *param_1 = *param_1 & 0xffffffc7;
    _evt_refresh_ind_v9 = 1;
    iVar1 = rw_le_v9_get_clkn();
    rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
    rw_le_v9_kick_start(0);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02c0);
  if (iVar1 != 0) {
    uVar3 = _DAT_3fcd02c4;
    if ((_DAT_3fcd02c0 >> 0x10 & 0xff) == 0) {
      uVar4 = *param_2;
      uVar3 = 1;
      *param_2 = uVar4 + 1;
      cVar2 = (char)((uint)_DAT_3fcd02c4 >> 0x10);
      iVar1 = (int)cVar2;
      if (uVar4 + 1 < 2) {
        *param_4 = cVar2;
        *param_5 = cVar2;
        *param_3 = iVar1;
      }
      else {
        *param_3 = *param_3 + iVar1;
        if (*param_4 < iVar1) {
          *param_4 = cVar2;
        }
        if (iVar1 < *param_5) {
          *param_5 = cVar2;
        }
      }
    }
    rw_le_v9_set_rxundone(&DAT_3fcd02c0,uVar3);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02e0);
  if (iVar1 != 0) {
    uVar3 = _DAT_3fcd02e4;
    if ((_DAT_3fcd02e0 >> 0x10 & 0xff) == 0) {
      uVar4 = *param_2;
      uVar3 = 1;
      *param_2 = uVar4 + 1;
      cVar2 = (char)((uint)_DAT_3fcd02e4 >> 0x10);
      iVar1 = (int)cVar2;
      if (uVar4 + 1 < 2) {
        *param_4 = cVar2;
        *param_5 = cVar2;
        *param_3 = iVar1;
      }
      else {
        *param_3 = *param_3 + iVar1;
        if (*param_4 < iVar1) {
          *param_4 = cVar2;
        }
        if (iVar1 < *param_5) {
          *param_5 = cVar2;
        }
      }
    }
    rw_le_v9_set_rxundone(&DAT_3fcd02e0,uVar3);
    return;
  }
  return;
}

