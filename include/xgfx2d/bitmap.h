// ******************************************************************
// * 
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : bitmap.h
// *
// * note : Simple 2D Bitmap library
// *
// ******************************************************************

#ifndef XBITMAP_H
#define XBITMAP_H

#include "openxdk.h"

#if defined(__cplusplus)
extern "C"
{
#endif


//you shouldn't need to mess with this if you use the functions in this lib,
//but feel free to :)
//data = the raw bitmap data
//w = width in pixels
//h = height in pixels
//pitch = memory distance between rows, in pixels (you don't need to care)

typedef struct
{
	uint32 *data;
	int w, h;
	int pitch;	//in pixels, not bytes as many libs do
				//will in most cases be same as w
} Bitmap;


//creates a bitmap, sized WxH
Bitmap *create_bitmap(int w, int h);
//destroys a bitmap
void destroy_bitmap(Bitmap *bmp);

//image loaders
Bitmap *load_tga(char *filename);

#if defined(__cplusplus)
}
#endif

#endif
