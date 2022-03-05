#include "at45.h"

void init_at45(void)
{
	init_spi1();
	slave_select_off();
}

void	get_devid(uint8_t *data)
{
	uint8_t opto	=	AT45_ID_READ;
	slave_select_on();
	spi1_transmit(&opto, 1);
	spi1_recieve(data,4);
	slave_select_off();
}

void	get_status_register(uint8_t *data)
{
	uint8_t buff 	=	AT45_STATUS_READ;
	slave_select_on();
	spi1_transmit(&buff, 1);
	spi1_recieve(data, 1);
	slave_select_off();
}

uint8_t at45_readpage(uint32_t addr, uint8_t *buff, uint32_t size)
{
    uint8_t     opcode[MAIN_PAGE_READ_OPCODE_SIZE];

    uint8_t 	state = 0;
    while(!(state & STATUS_REG_RDY))
    {
    	get_status_register(&state);
    }

    opcode[0] = AT45_PAGE_READ;
    opcode[1] = (uint8_t)((addr >> 16) & 0xff);
    opcode[2] = (uint8_t)((addr >> 8) & 0xff);
    opcode[3] = (uint8_t)(addr & 0xff);
    opcode[4] = opcode[5] = opcode[6] = opcode[7] = 0x00;
    // now send command to chip and read back data
    slave_select_on();
    spi1_transmit(opcode,MAIN_PAGE_READ_OPCODE_SIZE);
    spi1_recieve(buff, size);
    slave_select_off();
    return 1;
}

uint8_t at45_writepage(uint32_t addr, uint8_t *buff, uint32_t size)
{
    uint8_t     opcode[4];
    uint8_t 	state = 0;
    while(!(state & STATUS_REG_RDY))
    {
    	get_status_register(&state);
    }
    opcode[0] = AT45_PAGE_WRITE_BUF1;
    opcode[1] = (uint8_t)((addr >> 16) & 0xff);
    opcode[2] = (uint8_t)((addr >> 8) & 0xff);
    opcode[3] = (uint8_t)(addr & 0xff);

    slave_select_on();
    spi1_transmit(opcode, 4);
    spi1_transmit(buff, size);
    slave_select_off();
    return 1;
}

uint8_t at45_writebuffer(uint32_t addr, uint8_t *buff, uint32_t size)
{
    uint8_t     opcode[4];

    uint8_t 	state = 0;
    while(!(state & STATUS_REG_RDY))
    {
    	get_status_register(&state);
    }

    opcode[0] = AT45_BUFFER_WRITE_BUF1;
    opcode[1] = (uint8_t)((addr >> 16) & 0xff);
    opcode[2] = (uint8_t)((addr >> 8) & 0xff);
    opcode[3] = (uint8_t)(addr & 0xff);

    slave_select_on();
    spi1_transmit(opcode, 4);
    spi1_transmit(buff, size);
    slave_select_off();
    return 1;
}

uint8_t at45_buffer2memory(uint32_t addr)
{
    uint8_t     opcode[4];

    uint8_t 	state = 0;
    while(!(state & STATUS_REG_RDY))
    {
    	get_status_register(&state);
    }

    opcode[0] = AT45_BUFFER_TO_MAIN_MEMORY_BUF1;
    opcode[1] = (uint8_t)((addr >> 16) & 0xff);
    opcode[2] = (uint8_t)((addr >> 8) & 0xff);
    opcode[3] = (uint8_t)(addr & 0xff);
    slave_select_on();
    spi1_transmit(opcode, 4);
    slave_select_off();
    return 1;
}

