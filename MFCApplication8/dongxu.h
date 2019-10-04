#pragma once
class dongxu
{
private:
	int x1, x2, y1, y2, x3, y3, x4, y4;

public:
	dongxu(void);
	void thietlap(int mx1, int mx2, int my1, int my2);
	void background(CClientDC* pDC);
	void vedongxu(CClientDC* pDC);
	void dongxuLeft();
	void dongxuRight();
	void dongxuUp();
	void dongxuDown();
	void dongxudcLeft(CClientDC* pDC);
	void dongxudcRight(CClientDC* pDC);
	void dongxudcUp(CClientDC* pDC);
	void dongxudcDown(CClientDC* pDC);
	~dongxu(void);
};

