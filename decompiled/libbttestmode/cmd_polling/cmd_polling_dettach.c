/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> cmd_polling.o -> cmd_polling_dettach
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 cmd_polling_dettach(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &cmd_queue;
  iVar2 = 0;
  while (((*pcVar1 != '\x01' || (*(int *)(pcVar1 + 8) != param_3)) ||
         ((param_1 == 1 && ((pcVar1[1] != '\x01' || (*(int *)(pcVar1 + 4) != param_2))))))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x10;
    if (iVar2 == 0x20) {
      return 0;
    }
  }
  (&cmd_queue)[iVar2 * 0x10] = 0;
  (&DAT_00010158)[iVar2 * 4] = 0;
  return 1;
}

