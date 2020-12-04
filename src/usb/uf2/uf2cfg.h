#include "boards.h"

#define UF2_NUM_BLOCKS     8000   // at least 4,1 MB for FAT16

#ifndef UF2_VOLUME_LABEL
#define UF2_VOLUME_LABEL   "NRF52BOOT  "
#endif

#define FLASH_SIZE         (USER_FLASH_END-USER_FLASH_START) // Max flash size

// Only allow to write application TODO dynamic depending on SD size
#ifdef S340 //S340 uses more flash
#define USER_FLASH_START   0x31000
#else
#define USER_FLASH_START   0x26000
#endif
#define USER_FLASH_END     0xAD000 // Fat Fs start here

#define FLASH_PAGE_SIZE    4096

#define UF2_FAMILY_ID      0xADA52840
