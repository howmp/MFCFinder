// MFCFinder.h : main header file for the MFCFINDER application
//

#if !defined(AFX_MFCFINDER_H__44A228D9_9676_4529_8D22_BC022572A218__INCLUDED_)
#define AFX_MFCFINDER_H__44A228D9_9676_4529_8D22_BC022572A218__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCFinderApp:
// See MFCFinder.cpp for the implementation of this class
//

class CMFCFinderApp : public CWinApp
{
public:
	CMFCFinderApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCFinderApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCFinderApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCFINDER_H__44A228D9_9676_4529_8D22_BC022572A218__INCLUDED_)
