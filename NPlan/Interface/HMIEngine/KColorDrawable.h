﻿//  File:        KColorDrawable.h
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
#ifndef K_COLOR_DRAWABLE_H
#define K_COLOR_DRAWABLE_H

#include "KDrawable.h"
#include "REColor.h"

class KColorDrawable :	public KDrawable
{
public:
	KColorDrawable(REColor color);
	//virtual ~KColorDrawable(void);

	virtual void Draw(IRESurface* pDstSurface, const REMatrix* pMatrix = 0, int iDstX = 0, int iDstY = 0);
	void setColor(REColor color);
	REColor getColor();
	virtual void setColorAlpha(kn_byte);
private:

	REColor m_color;
	//颜色填充会忽略当前透明度设置，增加一个alpha变量记录外部alpha
	BYTE	m_alpha;
};

typedef boost::shared_ptr<KColorDrawable> KColorDrawable_PTR;

#endif	//	K_COLOR_DRAWABLE_H
