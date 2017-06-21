#pragma once
#include "afxwin.h"

// CSoundPlayDlg dialog
class CSoundPlayDlg : public CDialogEx
{
public:
	// Construction
	CSoundPlayDlg(CWnd* pParent = NULL);	// standard constructor

	// Dialog Data
	enum { IDD = IDD_SOUNDPLAY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBnClickedPlayBtn();
	DECLARE_MESSAGE_MAP()
};
