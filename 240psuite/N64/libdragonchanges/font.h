/**
 * @file font.h
 * @brief Font Data
 * @ingroup graphics
 */
#ifndef __LIBDRAGON_FONT
#define __LIBDRAGON_FONT

/** 
 * @brief Monochrome fixed-width font
 * @ingroup graphics
 */
static unsigned char const __font_data[2048] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x81, 0xA5, 0x81, 0xBD, 0x99, 0x81, 0x7E,
	0x7E, 0xFF, 0xDB, 0xFF, 0xC3, 0xE7, 0xFF, 0x7E, 0x6C, 0xFE, 0xFE, 0xFE, 0x7C, 0x38, 0x10, 0x00,
	0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x10, 0x00, 0x38, 0x7C, 0x38, 0xFE, 0xFE, 0x92, 0x10, 0x7C,
	0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x7C, 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x7C,
	0xFF, 0xFF, 0xE7, 0xC3, 0xC3, 0xE7, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7F, 0x63, 0x7F, 0x63, 0x63, 0x67, 0xE6, 0xC0, 0x99, 0x5A, 0x3C, 0xE7, 0xE7, 0x3C, 0x5A, 0x99,
	0x80, 0xE0, 0xF8, 0xFE, 0xF8, 0xE0, 0x80, 0x00, 0x02, 0x0E, 0x3E, 0xFE, 0x3E, 0x0E, 0x02, 0x00,
	0x18, 0x3C, 0x7E, 0x18, 0x18, 0x7E, 0x3C, 0x18, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x00,
	0x7F, 0xDB, 0xDB, 0x7B, 0x1B, 0x1B, 0x1B, 0x00, 0x3E, 0x63, 0x38, 0x6C, 0x6C, 0x38, 0x86, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x7E, 0x00, 0x18, 0x3C, 0x7E, 0x18, 0x7E, 0x3C, 0x18, 0xFF,
	0x18, 0x3C, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x3C, 0x18, 0x00,
	0x00, 0x18, 0x0C, 0xFE, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x30, 0x60, 0xFE, 0x60, 0x30, 0x00, 0x00,
	0x00, 0x30, 0x60, 0xFE, 0x60, 0x30, 0x00, 0x00, 0x00, 0x30, 0x60, 0xFE, 0x60, 0x30, 0x00, 0x00,
	0x00, 0x30, 0x60, 0xFE, 0x60, 0x30, 0x00, 0x00, 0x00, 0x30, 0x60, 0xFE, 0x60, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, 0x00,
	0x28, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x7C, 0x28, 0x7C, 0x28, 0x00, 0x00,
	0x00, 0x38, 0x50, 0x38, 0x14, 0x38, 0x00, 0x00, 0x20, 0x24, 0x08, 0x10, 0x24, 0x04, 0x00, 0x00,
	0x00, 0x10, 0x28, 0x10, 0x28, 0x14, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 0x00, 0x00,
	0x00, 0x28, 0x10, 0x38, 0x10, 0x28, 0x00, 0x00, 0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x04, 0x08, 0x10, 0x20, 0x00, 0x00, 0x00,
	0x08, 0x14, 0x14, 0x14, 0x14, 0x08, 0x00, 0x00, 0x08, 0x18, 0x08, 0x08, 0x08, 0x1C, 0x00, 0x00,
	0x18, 0x24, 0x04, 0x08, 0x10, 0x3C, 0x00, 0x00, 0x3C, 0x04, 0x18, 0x04, 0x24, 0x18, 0x00, 0x00,
	0x08, 0x18, 0x28, 0x3C, 0x08, 0x08, 0x00, 0x00, 0x3C, 0x20, 0x38, 0x04, 0x24, 0x18, 0x00, 0x00,
	0x18, 0x20, 0x38, 0x24, 0x24, 0x18, 0x00, 0x00, 0x3C, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00,
	0x18, 0x24, 0x18, 0x24, 0x24, 0x18, 0x00, 0x00, 0x18, 0x24, 0x24, 0x1C, 0x04, 0x18, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x10, 0x20, 0x00,
	0x00, 0x04, 0x08, 0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x08, 0x04, 0x08, 0x10, 0x00, 0x00, 0x08, 0x14, 0x04, 0x08, 0x00, 0x08, 0x00, 0x00,
	0x30, 0x48, 0x58, 0x58, 0x40, 0x30, 0x00, 0x00, 0x30, 0x48, 0x48, 0x78, 0x48, 0x48, 0x00, 0x00,
	0x70, 0x48, 0x70, 0x48, 0x48, 0x70, 0x00, 0x00, 0x30, 0x48, 0x40, 0x40, 0x48, 0x30, 0x00, 0x00,
	0x70, 0x48, 0x48, 0x48, 0x48, 0x70, 0x00, 0x00, 0x78, 0x40, 0x70, 0x40, 0x40, 0x78, 0x00, 0x00,
	0x78, 0x40, 0x70, 0x40, 0x40, 0x40, 0x00, 0x00, 0x30, 0x48, 0x40, 0x58, 0x48, 0x38, 0x00, 0x00,
	0x48, 0x48, 0x78, 0x48, 0x48, 0x48, 0x00, 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x48, 0x30, 0x00, 0x00, 0x48, 0x50, 0x60, 0x60, 0x50, 0x48, 0x00, 0x00,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x78, 0x00, 0x00, 0x48, 0x78, 0x78, 0x48, 0x48, 0x48, 0x00, 0x00,
	0x48, 0x68, 0x68, 0x58, 0x58, 0x48, 0x00, 0x00, 0x30, 0x48, 0x48, 0x48, 0x48, 0x30, 0x00, 0x00,
	0x70, 0x48, 0x48, 0x70, 0x40, 0x40, 0x00, 0x00, 0x30, 0x48, 0x48, 0x48, 0x68, 0x30, 0x08, 0x00,
	0x70, 0x48, 0x48, 0x70, 0x50, 0x48, 0x00, 0x00, 0x30, 0x48, 0x20, 0x10, 0x48, 0x30, 0x00, 0x00,
	0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x48, 0x48, 0x48, 0x48, 0x48, 0x30, 0x00, 0x00,
	0x48, 0x48, 0x48, 0x48, 0x30, 0x30, 0x00, 0x00, 0x48, 0x48, 0x48, 0x78, 0x78, 0x48, 0x00, 0x00,
	0x48, 0x48, 0x30, 0x30, 0x48, 0x48, 0x00, 0x00, 0x28, 0x28, 0x28, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x78, 0x08, 0x10, 0x20, 0x40, 0x78, 0x00, 0x00, 0x38, 0x20, 0x20, 0x20, 0x20, 0x38, 0x00, 0x00,
	0x00, 0x40, 0x20, 0x10, 0x08, 0x00, 0x00, 0x00, 0x38, 0x08, 0x08, 0x08, 0x08, 0x38, 0x00, 0x00,
	0x10, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
	0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x24, 0x2C, 0x14, 0x00, 0x00,
	0x20, 0x20, 0x38, 0x24, 0x24, 0x38, 0x00, 0x00, 0x00, 0x00, 0x18, 0x20, 0x20, 0x18, 0x00, 0x00,
	0x04, 0x04, 0x1C, 0x24, 0x24, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x18, 0x2C, 0x30, 0x18, 0x00, 0x00,
	0x08, 0x14, 0x10, 0x38, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x24, 0x18, 0x20, 0x1C, 0x00,
	0x20, 0x20, 0x38, 0x24, 0x24, 0x24, 0x00, 0x00, 0x08, 0x00, 0x18, 0x08, 0x08, 0x1C, 0x00, 0x00,
	0x04, 0x00, 0x04, 0x04, 0x04, 0x14, 0x08, 0x00, 0x20, 0x20, 0x28, 0x30, 0x28, 0x24, 0x00, 0x00,
	0x18, 0x08, 0x08, 0x08, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x28, 0x3C, 0x24, 0x24, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x18, 0x24, 0x24, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x24, 0x24, 0x38, 0x20, 0x00, 0x00, 0x00, 0x1C, 0x24, 0x24, 0x1C, 0x04, 0x00,
	0x00, 0x00, 0x38, 0x24, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x30, 0x0C, 0x38, 0x00, 0x00,
	0x10, 0x10, 0x38, 0x10, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x14, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x3C, 0x3C, 0x00, 0x00,
	0x00, 0x00, 0x24, 0x18, 0x18, 0x24, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x14, 0x08, 0x10, 0x00,
	0x00, 0x00, 0x3C, 0x08, 0x10, 0x3C, 0x00, 0x00, 0x04, 0x08, 0x18, 0x08, 0x08, 0x04, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x10, 0x08, 0x0C, 0x08, 0x08, 0x10, 0x00, 0x00,
	0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x42, 0x99, 0xA1, 0xA1, 0x99, 0x42, 0x3C,
	0x7C, 0xC6, 0xC0, 0xC6, 0x7C, 0x0C, 0x06, 0x7C, 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x76, 0x00,
	0x1C, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00, 0x7E, 0x81, 0x3C, 0x06, 0x3E, 0x66, 0x3B, 0x00,
	0xCC, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0xE0, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00,
	0x30, 0x30, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC0, 0x78, 0x0C, 0x38,
	0x7E, 0x81, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00, 0xCC, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00,
	0xE0, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00, 0xCC, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00,
	0x7C, 0x82, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00, 0xE0, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00,
	0xC6, 0x10, 0x7C, 0xC6, 0xFE, 0xC6, 0xC6, 0x00, 0x30, 0x30, 0x00, 0x78, 0xCC, 0xFC, 0xCC, 0x00,
	0x1C, 0x00, 0xFC, 0x60, 0x78, 0x60, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x0C, 0x7F, 0xCC, 0x7F, 0x00,
	0x3E, 0x6C, 0xCC, 0xFE, 0xCC, 0xCC, 0xCE, 0x00, 0x78, 0x84, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00,
	0x00, 0xCC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0xE0, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00,
	0x78, 0x84, 0x00, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x00, 0xE0, 0x00, 0xCC, 0xCC, 0xCC, 0x76, 0x00,
	0x00, 0xCC, 0x00, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8, 0xC3, 0x18, 0x3C, 0x66, 0x66, 0x3C, 0x18, 0x00,
	0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x18, 0x18, 0x7E, 0xC0, 0xC0, 0x7E, 0x18, 0x18,
	0x38, 0x6C, 0x64, 0xF0, 0x60, 0xE6, 0xFC, 0x00, 0xCC, 0xCC, 0x78, 0x30, 0xFC, 0x30, 0xFC, 0x30,
	0xF8, 0xCC, 0xCC, 0xFA, 0xC6, 0xCF, 0xC6, 0xC3, 0x0E, 0x1B, 0x18, 0x3C, 0x18, 0x18, 0xD8, 0x70,
	0x1C, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x38, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00,
	0x00, 0x1C, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x1C, 0x00, 0xCC, 0xCC, 0xCC, 0x76, 0x00,
	0x00, 0xF8, 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0x00, 0xFC, 0x00, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x00,
	0x3C, 0x6C, 0x6C, 0x3E, 0x00, 0x7E, 0x00, 0x00, 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x7C, 0x00, 0x00,
	0x18, 0x00, 0x18, 0x18, 0x30, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xC0, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x0C, 0x0C, 0x00, 0x00, 0xC6, 0xCC, 0xD8, 0x36, 0x6B, 0xC2, 0x84, 0x0F,
	0xC3, 0xC6, 0xCC, 0xDB, 0x37, 0x6D, 0xCF, 0x03, 0x18, 0x00, 0x18, 0x18, 0x3C, 0x3C, 0x18, 0x00,
	0x00, 0x33, 0x66, 0xCC, 0x66, 0x33, 0x00, 0x00, 0x00, 0xCC, 0x66, 0x33, 0x66, 0xCC, 0x00, 0x00,
	0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA,
	0xDD, 0x77, 0xDD, 0x77, 0xDD, 0x77, 0xDD, 0x77, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18,
	0x36, 0x36, 0x36, 0x36, 0xF6, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x36, 0x36, 0x36,
	0x00, 0x00, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x36, 0x36, 0xF6, 0x06, 0xF6, 0x36, 0x36, 0x36,
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00, 0xFE, 0x06, 0xF6, 0x36, 0x36, 0x36,
	0x36, 0x36, 0xF6, 0x06, 0xFE, 0x00, 0x00, 0x00, 0x36, 0x36, 0x36, 0x36, 0xFE, 0x00, 0x00, 0x00,
	0x18, 0x18, 0xF8, 0x18, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18, 0x36, 0x36, 0x36, 0x36, 0x37, 0x36, 0x36, 0x36,
	0x36, 0x36, 0x37, 0x30, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x30, 0x37, 0x36, 0x36, 0x36,
	0x36, 0x36, 0xF7, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF7, 0x36, 0x36, 0x36,
	0x36, 0x36, 0x37, 0x30, 0x37, 0x36, 0x36, 0x36, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00,
	0x36, 0x36, 0xF7, 0x00, 0xF7, 0x36, 0x36, 0x36, 0x18, 0x18, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00,
	0x36, 0x36, 0x36, 0x36, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x3F, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x1F, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xFF, 0x36, 0x36, 0x36,
	0x18, 0x18, 0xFF, 0x18, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1F, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
	0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x76, 0xDC, 0xC8, 0xDC, 0x76, 0x00, 0x00, 0x78, 0xCC, 0xF8, 0xCC, 0xF8, 0xC0, 0xC0,
	0x00, 0xFC, 0xCC, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x6C, 0x6C, 0x6C, 0x6C, 0x00,
	0xFC, 0xCC, 0x60, 0x30, 0x60, 0xCC, 0xFC, 0x00, 0x00, 0x00, 0x7E, 0xD8, 0xD8, 0xD8, 0x70, 0x00,
	0x00, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x60, 0xC0, 0x00, 0x76, 0xDC, 0x18, 0x18, 0x18, 0x18, 0x00,
	0xFC, 0x30, 0x78, 0xCC, 0xCC, 0x78, 0x30, 0xFC, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x6C, 0x38, 0x00,
	0x38, 0x6C, 0xC6, 0xC6, 0x6C, 0x6C, 0xEE, 0x00, 0x1C, 0x30, 0x18, 0x7C, 0xCC, 0xCC, 0x78, 0x00,
	0x00, 0x00, 0x7E, 0xDB, 0xDB, 0x7E, 0x00, 0x00, 0x06, 0x0C, 0x7E, 0xDB, 0xDB, 0x7E, 0x60, 0xC0,
	0x38, 0x60, 0xC0, 0xF8, 0xC0, 0x60, 0x38, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00,
	0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x7E, 0x00,
	0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0xFC, 0x00, 0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0xFC, 0x00,
	0x0E, 0x1B, 0x1B, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xD8, 0xD8, 0x70,
	0x18, 0x18, 0x00, 0x7E, 0x00, 0x18, 0x18, 0x00, 0x00, 0x76, 0xDC, 0x00, 0x76, 0xDC, 0x00, 0x00,
	0x38, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0F, 0x0C, 0x0C, 0x0C, 0xEC, 0x6C, 0x3C, 0x1C,
	0x58, 0x6C, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x70, 0x98, 0x30, 0x60, 0xF8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif
