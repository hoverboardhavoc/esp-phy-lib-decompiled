/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> esp_phy_getstopcmd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 esp_phy_getstopcmd(void)

{
  int iVar1;
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  char acStack_8c [32];
  undefined1 auStack_6c [40];
  undefined1 auStack_44 [56];
  
  iVar1 = UartGetCmdLn(auStack_44);
  if (iVar1 == 0) {
    puStack_90 = auStack_44;
    remove_head_newline(auStack_44,&puStack_90);
    iVar1 = cmd_parse(puStack_90,acStack_8c,auStack_94,auStack_6c);
    if (iVar1 == 0) {
      iVar1 = strcmp(acStack_8c,"CmdStop");
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = strcmp(acStack_8c,"cmdstop");
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = strcmp(acStack_8c,"CmdStatus");
      if (iVar1 == 0) {
        return 3;
      }
      iVar1 = strcmp(acStack_8c,"cmdstatus");
      if (iVar1 == 0) {
        return 3;
      }
    }
    phy_printf(" Plz run CmdStop to exit current cmd!\n");
  }
  return 1;
}

