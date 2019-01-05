// Obj.cpp: implementation of the CObj class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Obj.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CObj::CObj()
{
	m_er = E_OK;
}

//////////////////////////////////////////////////////////////////////

CObj::~CObj()
{

}

//////////////////////////////////////////////////////////////////////

const TCHAR *CObj::GetErrorString()
{
	const TCHAR *lpError;
	switch (m_er)
	{
	case E_OK:
		lpError = _T("��.");
		break;

	case E_INVALID_ARG:
		lpError = _T("�������� ���������.");
		break;

	default:
		lpError = _T("�������� ��� ������.");
	}
	return lpError;
}

//////////////////////////////////////////////////////////////////////

void CObj::ClearError()
{
	m_er = E_OK;
}

//////////////////////////////////////////////////////////////////////
