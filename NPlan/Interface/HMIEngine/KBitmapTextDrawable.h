﻿//  File:        KBitmapTextDrawable.h
//  Copyright:   Copyright(C) 2013-2017 Wuhan KOTEI Informatics Co., Ltd. All rights reserved.
//  Website:     http://www.nuiengine.com
//  Description:  This code is part of NPlan Project (Powered by NUI Engine)
//  Comments:
//  Rev:         1
//  Created:     2018/8/27
//  Last edit:   2015/2/27
//  Author:      Chen Zhi and his team
//  E-mail:       cz_666@qq.com
//  License: APACHE V2.0 (see license file) 
#ifndef K_BITMAP_TEXT_DRAWABLE_H
#define K_BITMAP_TEXT_DRAWABLE_H

#include "KTextDrawable.h"
#include <vector>

typedef struct  BITMAPCHAR_
{
	TCHAR word;
	int x;
	int y;
	int w;
	int h;
	BITMAPCHAR_()
	{
		word = 0;
		x = 0;
		y = 0;
		w = 0;
		h = 0;
	}
}BITMAPCHAR;


class KBitmapTextDrawable : public KTextDrawable
{
public:
	KBitmapTextDrawable(const kn_char* szText, REColor color,  kn_int iFontSize, REPaint::Align align);
	~KBitmapTextDrawable();

	virtual void Draw(IRESurface* pDstSurface, const REMatrix* pMatrix = 0, int iDstX = 0, int iDstY = 0);
	virtual int getTextWidth();

	kn_bool LoadProfile(const kn_string& strFile);
	BITMAPCHAR* getBITMAPChar(TCHAR c);

	std::vector<BITMAPCHAR> m_chartable;
	IRESurface* m_bitmap_surface;

	int m_BitmapCharSetNum;
	int m_CharAverageWidth;
	int m_CharAverageHeight;
};

typedef boost::shared_ptr<KBitmapTextDrawable> KBitmapTextDrawable_PTR;

#endif
