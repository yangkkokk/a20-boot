/*
* (C) Copyright 2007-2013
* Allwinner Technology Co., Ltd. <www.allwinnertech.com>
* Martin zheng <zhengjiewen@allwinnertech.com>
*
* See file CREDITS for list of people who contributed to this
* project.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston,
* MA 02111-1307 USA
*/
//------------------------------------------------------------------------------------------------------------
//
// twofish.h
//
// scott
//
// 2009-04-27 17:45:28
//
//------------------------------------------------------------------------------------------------------------

#ifndef ___TWO_FISH____H_____
#define ___TWO_FISH____H_____

#include    "../encrypt.h"


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------

#define TF_SIZE				16			//TF���ܷ���size 16�ֽ�

//------------------------------------------------------------------------------------------------------------
//������key����
//------------------------------------------------------------------------------------------------------------
#define KEY_LEN_128_BIT		(128 / 8)	//128 bit
#define KEY_LEN_192_BIT		(192 / 8)	//192 bit
#define KEY_LEN_256_BIT		(256 / 8)	//256 bit


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
typedef void * HTF;

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
HTF TFInitial(__u32 * key, __u32 keylen);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
__u32 TFEncode(HTF hTF, void * ibuf, __u32 len, void * obuf);


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
__u32 TFDecode(HTF hTF, void * ibuf, __u32 len, void * obuf);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
__u32 TFUnInitial(HTF hTF);


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------

#endif //___TWO_FISH____H_____


