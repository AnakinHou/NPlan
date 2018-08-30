﻿//  File:        KStaticTextView.cpp
//  Copyright:   Copyright(C) 2013-2017 Wuhan KOTEI Informatics Co., Ltd. All rights reserved.
//  Website:     http://www.nuiengine.com
//  Description:  This code is part of NPlan Project (Powered by NUI Engine)
//  Comments:
//  Rev:         2
//  Created:     2018/8/27
//  Last edit:   2018/8/30
//  Author:      Chen Zhi and his team
//  E-mail:       cz_666@qq.com
//  License: APACHE V2.0 (see license file) 
#include "KStaticTextView.h"


KStaticTextView::KStaticTextView(void)
{
}


KStaticTextView::~KStaticTextView(void)
{
}

SkTypeface* KStaticTextView::GetFont()
{
	return m_text_drawable->GetFont();
}

void KStaticTextView::SetFont( SkTypeface* pTypeFace )
{
	writeLock lock(m_lst_drawable_mutex);
	m_text_drawable->setFont(pTypeFace);
}
 
