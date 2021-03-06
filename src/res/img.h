#ifndef IMG_H
#define IMG_H
#ifdef __cplusplus
extern "C" {
#endif

#include <avr/pgmspace.h>

// b1.bmp / 16x24
PROGMEM const unsigned char bmpB1[] = {
	16, 24,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xF8,0x3F,0xFC,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// b2.bmp / 16x24
PROGMEM const unsigned char bmpB2[] = {
	16, 24,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xF8,0x3F,0xFC,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x1F,0xF8,0x3F,0xFC,0x00,0x00
};

// b3.bmp / 16x24
PROGMEM const unsigned char bmpB3[] = {
	16, 24,
	0x3F,0xFC,0x1F,0xF8,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xF8,0x3F,0xFC,0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x1F,0xF8,0x3F,0xFC,0x00,0x00
};

// msg.bmp / 80x16
PROGMEM const unsigned char bmpMsg[] = {
	80, 16,
	0x1F,0x86,0x1C,0x3B,0xF8,0x01,0xE1,0x86,0xFE,0xFC,0x30,0x0F,0x1C,0x3B,0x00,0x03,0x39,0x86,0xC0,0xC6,0x70,0x0F,0x1E,0x7B,0x00,0x06,0x19,0xCE,0xC0,0xC7,0x60,0x0F,0x1E,0x7B,0x00,0x06,0x1D,0xCC,0xC0,0xC6,0x6F,0x9F,0x9F,0xFB,0xF8,0x06,0x0C,0xCC,0xFE,0xCE,0x61,0x99,0x9B,0xFB,0x00,0x06,0x0C,0xDC,0xC0,0xF8,0x61,0x9F,0x99,0xBB,0x00,0x06,0x0C,0x78,0xC0,0xCC,0x61,0xB9,0xD8,0x3B,0x00,0x06,0x1C,0x78,0xC0,0xCE,
	0x31,0xB0,0xD8,0x3B,0x00,0x03,0x18,0x78,0xC0,0xC6,0x1F,0xB0,0xD8,0x3B,0xF8,0x01,0xF0,0x30,0xFE,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// n0.bmp / 16x24
PROGMEM const unsigned char bmpN0[] = {
	16, 24,
	0x3F,0xFC,0x5F,0xFA,0x6F,0xF6,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x60,0x06,0x40,0x02,0x00,0x00,0x40,0x02,0x60,0x06,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x6F,0xF6,0x5F,0xFA,0x3F,0xFC,0x00,0x00
};

// n1.bmp / 16x24
PROGMEM const unsigned char bmpN1[] = {
	16, 24,
	0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x00
};

// n2.bmp / 16x24
PROGMEM const unsigned char bmpN2[] = {
	16, 24,
	0x3F,0xFC,0x1F,0xFA,0x0F,0xF6,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x06,0x1F,0xFA,0x3F,0xFC,0x5F,0xF8,0x60,0x00,0x70,0x00,0x70,0x00,
	0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x6F,0xF0,0x5F,0xF8,0x3F,0xFC,0x00,0x00
};

// n3.bmp / 16x24
PROGMEM const unsigned char bmpN3[] = {
	16, 24,
	0x3F,0xFC,0x1F,0xFA,0x0F,0xF6,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x06,0x1F,0xFA,0x3F,0xFC,0x1F,0xFA,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x0F,0xF6,0x1F,0xFA,0x3F,0xFC,0x00,0x00
};

// n4.bmp / 16x24
PROGMEM const unsigned char bmpN4[] = {
	16, 24,
	0x00,0x00,0x40,0x02,0x60,0x06,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x60,0x06,0x5F,0xFA,0x3F,0xFC,0x1F,0xFA,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x00
};

// n5.bmp / 16x24
PROGMEM const unsigned char bmpN5[] = {
	16, 24,
	0x3F,0xFC,0x5F,0xF8,0x6F,0xF0,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
	0x70,0x00,0x60,0x00,0x5F,0xF8,0x3F,0xFC,0x1F,0xFA,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x0F,0xF6,0x1F,0xFA,0x3F,0xFC,0x00,0x00
};

// n6.bmp / 16x24
PROGMEM const unsigned char bmpN6[] = {
	16, 24,
	0x3F,0xFC,0x5F,0xF8,0x6F,0xF0,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
	0x70,0x00,0x60,0x00,0x5F,0xF8,0x3F,0xFC,0x5F,0xFA,0x60,0x06,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x6F,0xF6,0x5F,0xFA,0x3F,0xFC,0x00,0x00
};

// n7.bmp / 16x24
PROGMEM const unsigned char bmpN7[] = {
	16, 24,
	0x3F,0xFC,0x1F,0xFA,0x0F,0xF6,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x06,0x00,0x02,0x00,0x00,0x00,0x00
};

// n8.bmp / 16x24
PROGMEM const unsigned char bmpN8[] = {
	16, 24,
	0x3F,0xFC,0x5F,0xFA,0x6F,0xF6,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x60,0x06,0x5F,0xFA,0x3F,0xFC,0x5F,0xFA,0x60,0x06,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x6F,0xF6,0x5F,0xFA,0x3F,0xFC,0x00,0x00
};

// n9.bmp / 16x24
PROGMEM const unsigned char bmpN9[] = {
	16, 24,
	0x3F,0xFC,0x5F,0xFA,0x6F,0xF6,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x60,0x06,0x5F,0xFA,0x3F,0xFC,0x1F,0xFA,0x00,0x06,0x00,0x0E,0x00,0x0E,
	0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x0F,0xF6,0x1F,0xFA,0x3F,0xFC,0x00,0x00
};

// na.bmp / 16x24
PROGMEM const unsigned char bmpNa[] = {
	16, 24,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xF8,0x3F,0xFC,0x5F,0xFA,0x60,0x06,0x70,0x0E,0x70,0x0E,
	0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x60,0x06,0x40,0x02,0x00,0x00,0x00,0x00
};


#ifdef __cplusplus
}
#endif
#endif
