﻿//  File:        KMenuView.h
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
#ifndef KMenuView_DEFINED
#define KMenuView_DEFINED

#include "KViewGroup.h"
#include "KTextDrawable.h"
#include "KImageDrawable.h"
#include "KColorDrawable.h"
#include "sigslot.h"

#define NO_HIDE_MENU 400

class KMenuBase : public KViewGroup
{
public:
	KMenuBase();
	virtual ~KMenuBase();

	virtual void init();
	kn_bool isAutoHide();
	void setAutoHide(kn_bool b);
	sigslot::signal1<int> m_sign_menu_click;
	void  setBKDrawable( KDrawable_PTR p );
protected:
	//触发menu的view
	KView_PTR	m_active_view;
	KDrawable_PTR	m_bk_drawable;

	//自动隐藏，只要菜单收到点击消息就隐藏
	kn_bool m_b_auto_hide;

};
//Menu 类使用智能指针管理
typedef boost::shared_ptr<KMenuBase> KMenuBase_PTR;


//标准菜单
class KMenuList : public KMenuBase
{
public:
	KMenuList();
	virtual ~KMenuList();

	virtual void init();
	void addItem();
private:

};
typedef boost::shared_ptr<KMenuList> KMenuList_PTR;

#endif

