
// MFCApplication8View.cpp : implementation of the CMFCApplication8View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCApplication8.h"
#endif

#include "MFCApplication8Doc.h"
#include "MFCApplication8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication8View

IMPLEMENT_DYNCREATE(CMFCApplication8View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication8View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMFCApplication8View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMFCApplication8View construction/destruction

CMFCApplication8View::CMFCApplication8View() noexcept
{
	// TODO: add construction code here
	dongxu1.thietlap(370, 450, 150, 250);//thiet lap vi tri ban dau

}

CMFCApplication8View::~CMFCApplication8View()
{
}

BOOL CMFCApplication8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCApplication8View drawing

void CMFCApplication8View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);//ve dong xu hien thi ban dau thi khoi chay chuong trinh

	int r = 0;
	int g = 0;
	int b = 0;
	CPen* pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pDC.SelectObject(pen);//chon but ve
	CBrush* newbrush = new CBrush(RGB(r, g, b));
	pDC.SelectObject(newbrush);
	dongxu1.vedongxu(&pDC);

	// TODO: add draw code for native data here
}


// CMFCApplication8View printing


void CMFCApplication8View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMFCApplication8View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCApplication8View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCApplication8View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMFCApplication8View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCApplication8View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCApplication8View diagnostics

#ifdef _DEBUG
void CMFCApplication8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication8Doc* CMFCApplication8View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication8Doc)));
	return (CMFCApplication8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication8View message handlers


void CMFCApplication8View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	int key = nChar;//bien key de luu ma ascii thi an 4 nut di chuyen
	if (key == 37)//dieu kien dongxu di trai khi an nut mui ten trai
	{
		CClientDC pDC(this);
		dongxu1.dongxudcLeft(&pDC);

	}
	else if (key == 39)//dieu kien dongxu di phai khi an nut mui ten phai
	{
		CClientDC pDC(this);
		dongxu1.dongxudcRight(&pDC);
	}
	else if (key == 38)//dieu kien dongxu di len khi an nut mui ten len
	{
		CClientDC pDC(this);
		dongxu1.dongxudcUp(&pDC);

	}
	else if (key == 40)//dieu kien dongxu di xuong khi an nut mui ten xuong
	{
		CClientDC pDC(this);
			dongxu1.dongxudcDown(&pDC);
	}

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
