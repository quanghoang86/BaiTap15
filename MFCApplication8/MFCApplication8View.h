
// MFCApplication8View.h : interface of the CMFCApplication8View class
//

#pragma once
#include "dongxu.h"

class CMFCApplication8View : public CView
{
protected: // create from serialization only
	CMFCApplication8View() noexcept;
	DECLARE_DYNCREATE(CMFCApplication8View)

// Attributes
public:
	CMFCApplication8Doc* GetDocument() const;

// Operations
public:
	dongxu dongxu1;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCApplication8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in MFCApplication8View.cpp
inline CMFCApplication8Doc* CMFCApplication8View::GetDocument() const
   { return reinterpret_cast<CMFCApplication8Doc*>(m_pDocument); }
#endif

