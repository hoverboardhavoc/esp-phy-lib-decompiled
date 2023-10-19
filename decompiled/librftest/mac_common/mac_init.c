/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> mac_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mac_init(void)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  
  mac_buffer_get();
  uVar2 = DAT_600123c3;
  do {
  } while ((DAT_60013121 & 1) == 0);
  uVar3 = CONCAT13(DAT_60012420,CONCAT12(DAT_6001241f,CONCAT11(DAT_6001241e,DAT_6001241d))) &
          0xfffffff8;
  DAT_6001241d = DAT_6001241d & 0xf8;
  DAT_6001241e = (undefined1)(uVar3 >> 8);
  DAT_6001241f = (undefined1)(uVar3 >> 0x10);
  DAT_60012420 = (undefined1)(uVar3 >> 0x18);
  uVar3 = CONCAT13(DAT_60012424,CONCAT12(DAT_60012423,CONCAT11(DAT_60012422,DAT_60012421))) &
          0xfffffff8;
  DAT_60012421 = DAT_60012421 & 0xf8;
  DAT_60012422 = (undefined1)(uVar3 >> 8);
  DAT_60012423 = (undefined1)(uVar3 >> 0x10);
  DAT_60012424 = (undefined1)(uVar3 >> 0x18);
  uVar3 = CONCAT13(DAT_60012428,CONCAT12(DAT_60012427,CONCAT11(DAT_60012426,DAT_60012425))) &
          0xfffffff8;
  DAT_60012425 = DAT_60012425 & 0xf8;
  DAT_60012426 = (undefined1)(uVar3 >> 8);
  DAT_60012427 = (undefined1)(uVar3 >> 0x10);
  DAT_60012428 = (undefined1)(uVar3 >> 0x18);
  uVar3 = CONCAT13(DAT_6001242c,CONCAT12(DAT_6001242b,CONCAT11(DAT_6001242a,DAT_60012429))) &
          0xfffffff8;
  DAT_60012429 = DAT_60012429 & 0xf8;
  DAT_6001242a = (undefined1)(uVar3 >> 8);
  DAT_6001242b = (undefined1)(uVar3 >> 0x10);
  DAT_6001242c = (undefined1)(uVar3 >> 0x18);
  uVar3 = CONCAT13(DAT_60012fd4,CONCAT12(DAT_60012fd3,CONCAT11(DAT_60012fd2,DAT_60012fd1))) &
          0xfffffffd;
  uVar3 = CONCAT13((char)(uVar3 >> 0x18),
                   CONCAT12((char)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8),DAT_60012fd1))) &
          0xffffffed;
  uVar3 = CONCAT13((char)(uVar3 >> 0x18),
                   CONCAT12((char)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8),DAT_60012fd1))) &
          0x7fffffed;
  DAT_60012fd2 = (undefined1)(uVar3 >> 8);
  bVar1 = (byte)(uVar3 >> 0x10);
  DAT_60012fd4 = (undefined1)(uVar3 >> 0x18);
  bVar4 = DAT_600123c4 | 0x10;
  DAT_60012f85 = 0x1f;
  DAT_60012f86 = 0;
  DAT_60012f87 = 0;
  DAT_60012f88 = 0;
  DAT_600123a1 = 4;
  DAT_600123a2 = 5;
  DAT_600123a3 = 6;
  DAT_600123a4 = 7;
  DAT_600123a5 = 8;
  DAT_600123a6 = 9;
  DAT_600123a7 = 0;
  DAT_600123a8 = 0;
  DAT_600130ad = 0;
  DAT_600130ae = 0x30;
  DAT_600130af = 1;
  DAT_600130b0 = 4;
  uVar3 = CONCAT13(DAT_60012f6c,CONCAT12(DAT_60012f6b,CONCAT11(DAT_60012f6a,DAT_60012f69))) &
          0x7fffffff;
  DAT_60012f6a = (undefined1)(uVar3 >> 8);
  DAT_60012f6b = (undefined1)(uVar3 >> 0x10);
  DAT_60012f6c = (undefined1)(uVar3 >> 0x18);
  DAT_60012fd3 = bVar1 | 0x80;
  uVar3 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,0xc))) & 0xefffffff;
  DAT_600123c1 = 0xc;
  DAT_600123c2 = (undefined1)(uVar3 >> 8);
  DAT_600123c3 = (undefined1)(uVar3 >> 0x10);
  DAT_600123c4 = (byte)(uVar3 >> 0x18);
  DAT_60012fd1 = DAT_60012fd1 & 0xed;
  DAT_60013121 = DAT_60013121 | 2;
  rx_ampdu_buffer_init(RX_ampdu_buff0_start,0x1000,bVar1,uVar2,bVar4);
  bVar1 = DAT_600123c4;
  DAT_600123c4 = DAT_600123c4 | 0x10;
  rx_ampdu_entry_fresh(RX_ampdu_entry0_start,300,DAT_600123c3,bVar1);
  rx_ampdu_entrysd_fresh(RX_ampdu_entrysd0_start,100);
  rx_buffer_ena();
  uVar3 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1))) &
          0xefffffff;
  DAT_600123c2 = (char)(uVar3 >> 8);
  DAT_600123c3 = (char)(uVar3 >> 0x10);
  DAT_600123c4 = (char)(uVar3 >> 0x18);
  return;
}

