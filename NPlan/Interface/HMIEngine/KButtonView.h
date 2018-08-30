﻿//  File:        KButtonView.h
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
#ifndef KButtonView_DEFINED
#define KButtonView_DEFINED

#include "KTextView.h"
#include "KTextDrawable.h"
#include "KImageDrawable.h"
#include "KColorDrawable.h"
#include "sigslot.h"


class KImgButtonView : public KTextView
{
public:
	KImgButtonView();
	virtual ~KImgButtonView();

	void setBKGImage(const kn_string& normalResPath, 
					const kn_string& focusResPath, 
					const kn_string& selectedResPath, 
					const kn_string& disabledResPath);
	void setBKG( KDrawable_PTR normal,  KDrawable_PTR focus, KDrawable_PTR selected, KDrawable_PTR disabled);
//	void SizeBKGToImage();
//	void SetPressed(bool value);
	virtual void setState( ViewState state ,kn_bool bRefresh=TRUE);

private:
//	void NotifyPaint();

	KDrawable_PTR m_focus_bk_drawable;
	KDrawable_PTR m_selected_bk_drawable;
	KDrawable_PTR m_disable_bk_drawable;
	//点击区域是否判断图片的alpha通道
	kn_bool m_b_check_alpha;
};
typedef boost::shared_ptr<KImgButtonView> KImgButtonView_PTR;

#endif

