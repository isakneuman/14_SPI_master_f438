#ifndef AT45_H_
#define AT45_H_
	#include "spif429.h"
	#include "stdint.h"

	#define	CC_AT45D	SPI1_NSS

 	#define	AT45_PAGE_READ         		0xD2         /// Main memory page read command code.
    #define	AT45_CONTINUOUS_READ_LEG    0xE8         /// Continous array read (legacy) command code.
    #define AT45_CONTINUOUS_READ_LF     0x03         /// Continous array read (low frequency) command code.
    #define AT45_CONTINUOUS_READ_LP     0x01         /// Continous array read (low power) command code.
    #define AT45_CONTINUOUS_READ        0x0B         /// Continous array read command code.
    #define AT45_BUF1_READ_LF           0xD1         /// Buffer 1 read (low frequency) command code.
    #define AT45_BUF2_READ_LF           0xD3         /// Buffer 2 read (low frequency) command code.
    #define AT45_BUF1_READ_SER          0xD4         /// Buffer 1 read (serial) command code.
    #define AT45_BUF2_READ_SER          0xD6         /// Buffer 2 read (serial) command code.
    #define AT45_BUF1_READ_8B           0x54         /// Buffer 1 read (8-bit) command code.
    #define AT45_BUF2_READ_8B           0x56         /// Buffer 2 read (8-bit) command code.
    #define AT45_BUF1_WRITE             0x84         /// Buffer 1 write command code.
    #define AT45_BUF2_WRITE             0x87         /// Buffer 2 write command code.
    #define AT45_BUF1_MEM_ERASE         0x83         /// Buffer 1 to main memory page program with erase command code.
    #define AT45_BUF2_MEM_ERASE         0x86         /// Buffer 2 to main memory page program with erase command code.
    #define AT45_BUF1_MEM_NOERASE       0x88         /// Buffer 1 to main memory page program without erase command code.
    #define AT45_BUF2_MEM_NOERASE       0x89         /// Buffer 2 to main memory page program without erase command code.
    #define AT45_PAGE_ERASE             0x81         /// Page erase command code.
    #define AT45_BLOCK_ERASE            0x50         /// Block erase command code.
    #define AT45_SECTOR_ERASE           0x7C         /// Sector erase command code.
    #define AT45_CHIP_ERASE_FIRST       0xC7         /// Chip erase command code.
    #define AT45_PAGE_WRITE_BUF1        0x82         /// Main memory page program through buffer 1 command code.
    #define AT45_PAGE_WRITE_BUF2        0x85         /// Main memory page program through buffer 2 command code.
    #define AT45_BUFFER_WRITE_BUF1      0x84         /// Buffer Write to buffer 1 command code.
    #define AT45_BUFFER_WRITE_BUF2      0x87         /// Buffer Write to buffer 2 command code.
    #define AT45_BUFFER_TO_MAIN_MEMORY_BUF1  0x83    /// Buffer to Main memory page through buffer 1 command code.
    #define AT45_BUFFER_TO_MAIN_MEMORY_BUF2  0x86    /// Buffer to Main memory page through buffer 2 command code.
    #define AT45_PAGE_BUF1_TX           0x53         /// Main memory page to buffer 1 transfer command code.
    #define AT45_PAGE_BUF2_TX           0x55         /// Main memory page to buffer 2 transfer command code.
    #define AT45_PAGE_BUF1_CMP          0x60         /// Main memory page to buffer 1 compare command code.
    #define AT45_PAGE_BUF2_CMP          0x61         /// Main memory page to buffer 2 compare command code.
    #define AT45_AUTO_REWRITE_BUF1      0x58         /// Auto page rewrite through buffer 1 command code.
    #define AT45_AUTO_REWRITE_BUF2      0x59         /// Auto page rewrite through buffer 2 command code.
	#define AT45_ULTRA_DEEP_PDOWN       0x79         /// Ultra Deep power-down command code.
    #define AT45_DEEP_PDOWN             0xB9         /// Deep power-down command code.
    #define AT45_RES_DEEP_PDOWN         0xAB         /// Resume from deep power-down command code.
    #define AT45_STATUS_READ            0xD7         /// Status register read command code.
    #define AT45_ID_READ                0x9F         /// Manufacturer and device ID read command code.
    #define AT45_BINARY_PAGE_FIRST_OPCODE   0x3D     /// Power-of-2 binary page size configuration command code.

	#define STATUS_REG_RDY_Pos			0x07
	#define STATUS_REG_RDY				(1<<0x07)

	#define MAIN_PAGE_READ_OPCODE_SIZE	0x08

	void	get_devid(uint8_t *data);
	void	get_status_register(uint8_t *data);

	uint8_t at45_readpage(uint32_t addr, uint8_t *buff, uint32_t size);
	uint8_t at45_writepage(uint32_t addr, uint8_t *buff, uint32_t size);
	uint8_t at45_writebuffer(uint32_t addr, uint8_t *buff, uint32_t size);
	uint8_t at45_buffer2memory(uint32_t addr);

	void 	init_at45(void);
#endif /* AT45_H_ */
