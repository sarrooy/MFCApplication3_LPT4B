
// MFCApplication3_LPT4BDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CMFCApplication3LPT4BDlg
class CMFCApplication3LPT4BDlg : public CDialogEx
{
// Construcción
public:
	CMFCApplication3LPT4BDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_LPT4B_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	short m_address_port;
	short m_data2writte;
	afx_msg void OnBnClickedSendButton();
	short m_RDATA;
	short m_RSTATUS;
	short m_RCTRL;
	afx_msg void OnBnClickedStatusButton();
};
