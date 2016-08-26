// MFCFinderDlg.h : header file
//

#if !defined(AFX_MFCFINDERDLG_H__402E4A7B_9E43_416B_8143_BC9366384978__INCLUDED_)
#define AFX_MFCFINDERDLG_H__402E4A7B_9E43_416B_8143_BC9366384978__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCFinderDlg dialog

class CMFCFinderDlg : public CDialog
{
// Construction
public:
	CMFCFinderDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCFinderDlg)
	enum { IDD = IDD_MFCFINDER_DIALOG };
	CString	m_edit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCFinderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCFinderDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDropFiles(HDROP hDropInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCFINDERDLG_H__402E4A7B_9E43_416B_8143_BC9366384978__INCLUDED_)
