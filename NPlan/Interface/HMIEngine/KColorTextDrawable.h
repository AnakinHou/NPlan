﻿//  File:        KColorTextDrawable.h
//  Copyright:   Copyright(C) 2013-2017 Wuhan KOTEI Informatics Co., Ltd. All rights reserved.
//  Website:     http://www.nuiengine.com
//  Description:  This code is part of NPlan Project (Powered by NUI Engine)
//  Comments:
//  Rev:         1
//  Created:     2018/8/27
//  Last edit:   2015/11/18
//  Author:      Chen Zhi and his team
//  E-mail:       cz_666@qq.com
//  License: APACHE V2.0 (see license file) 
#ifndef K_COLORTEXT_DRAWABLE_H
#define K_COLORTEXT_DRAWABLE_H

#include "KTextDrawable.h"


class KFocusColorTextDrawable : public KTextDrawable
{
protected:
	kn_string m_focus_text;
	REColor   m_focus_color;

public:
	KFocusColorTextDrawable(const kn_char* szText, REColor color = RE_ColorBLACK,  kn_int iFontSize = 20, REPaint::Align align = REPaint::kLeft_Align);

	virtual void Draw(IRESurface* pDstSurface, const REMatrix* pMatrix = 0, int iDstX = 0, int iDstY = 0);

	void SetFocusText(const kn_string &szText);
	const kn_string& GetFocusText();
	void setFocusColor(REColor color);
	REColor getFocusColor();

};

typedef boost::shared_ptr<KFocusColorTextDrawable> KFocusColorTextDrawable_PTR;

#endif
