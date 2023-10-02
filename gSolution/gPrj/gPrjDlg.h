
// gPrjDlg.h : ��� ����
//
#include "DlgImage.h"

#pragma once


// CgPrjDlg ��ȭ ����
class CgPrjDlg : public CDialogEx
{
private:
	CImage m_image;
	BOOL validImgPos(int x, int y);
// �����Դϴ�.
public:
	CgPrjDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CDlgImage *m_pDlgImage;
	CDlgImage *m_pDlgImgResult;

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GPRJ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedBtnDlg();
	afx_msg void OnDestroy();

	void callFunc(int n);
	afx_msg void OnBnClickedBtnTest();
	afx_msg void OnBnClickedBtnProcess();
	afx_msg void OnBnClickedBtnMakePattern();
	afx_msg void OnBnClickedBtnGetData();
	afx_msg void OnBnClickedBtnThread();
	void UpdateDisplay();
	void moveRect();
	void drawCircle(unsigned char* fm, int i, int j, int m_nNUM, int nGray);
	bool isInCircle(int i, int j, int nCenterX, int nCenterY, int m_nNUM);
	int processImg(CRect rect);
	afx_msg void OnEnChangeEdit1();
	int m_nNUM;
};
