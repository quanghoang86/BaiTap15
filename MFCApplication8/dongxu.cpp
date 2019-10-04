#include "pch.h"
#include "dongxu.h"

dongxu::dongxu(void)
{
}
void dongxu::thietlap(int mx1, int mx2, int my1, int my2)// ham thiet lap vi tri dongxu
{
	x1= mx1; y1= my1; x2= mx2; y2= my2;
}

void dongxu::vedongxu(CClientDC* pDC)//ham ve dongxu 
{

	pDC->Ellipse(x1 - 90, y1 - 90, x2 - 90, y2 - 90);//ve hinh tron 1
	pDC->Ellipse(x1 - 90, y1 - 90, x2 - 90, y2 - 90);//ve hinhtron2


}
void dongxu::background(CClientDC* pDC)
{
	pDC->Rectangle(0, 0, 1400, 800);
}
void dongxu::dongxuLeft()//ham dich trai
{
	x1 -= 10; x2 -= 10;
}
void dongxu::dongxuRight()//ham dich phai
{
	x1 += 10; x2 += 10;
}
void dongxu::dongxuUp()//ham dich len
{
	y1 -= 10; y2 -= 10;
}
void dongxu::dongxuDown()//ham dich xuong
{
	y1 += 10; y2 += 10;
}
void dongxu::dongxudcLeft(CClientDC* pDC)//ham di chuyen + ve mau :ben trai
{
	int r = 0, r1 = 255;
	int g = 0, g1 = 255;
	int b = 0, b1 = 255;

	CPen* pen;
	pen = new CPen(PS_SOLID, 1, RGB(r1, g1, b1));

	CBrush* newbrush = new CBrush(RGB(r, g, b));
	CBrush* oldbrush;
	int i = 0;
	while (i < 10)
	{
		pDC->SelectObject(pen);
		vedongxu(pDC);
		dongxuLeft();
		oldbrush = pDC->SelectObject(newbrush);
		vedongxu(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void dongxu::dongxudcRight(CClientDC* pDC)//ham di chuyen + ve mau :ben phai
{
	int r = 0, r1 = 255;
	int g = 0, g1 = 255;
	int b = 0, b1 = 255;

	CPen* pen;
	pen = new CPen(PS_SOLID, 1, RGB(r1, g1, b1));

	CBrush* newbrush = new CBrush(RGB(r, g, b));
	CBrush* oldbrush;
	int i = 0;
	while (i < 10)
	{
		pDC->SelectObject(pen);
		vedongxu(pDC);
		dongxuRight();
		oldbrush = pDC->SelectObject(newbrush);
		vedongxu(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void dongxu::dongxudcUp(CClientDC* pDC)//ham di chuyen + ve mau :ben tren
{
	int r = 0, r1 = 255;
	int g = 0, g1 = 255;
	int b = 0, b1 = 255;

	CPen* pen;
	pen = new CPen(PS_SOLID, 1, RGB(r1, g1, b1));

	CBrush* newbrush = new CBrush(RGB(r, g, b));
	CBrush* oldbrush;
	int i = 0;
	while (i < 10)
	{
		pDC->SelectObject(pen);
		vedongxu(pDC);
		dongxuUp();
		oldbrush = pDC->SelectObject(newbrush);
		vedongxu(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
void dongxu::dongxudcDown(CClientDC* pDC)//ham di chuyen + ve mau :ben duoi
{
	int r = 0, r1 = 255;
	int g = 0, g1 = 255;
	int b = 0, b1 = 255;

	CPen* pen;
	pen = new CPen(PS_SOLID, 1, RGB(r1, g1, b1));

	CBrush* newbrush = new CBrush(RGB(r, g, b));
	CBrush* oldbrush;
	int i = 0;
	while (i < 10)
	{
		pDC->SelectObject(pen);
		vedongxu(pDC);
		dongxuDown();
		oldbrush = pDC->SelectObject(newbrush);
		vedongxu(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(50);
		i++;
	}
}
dongxu::~dongxu(void)
{
}