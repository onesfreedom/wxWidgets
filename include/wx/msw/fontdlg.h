/////////////////////////////////////////////////////////////////////////////
// Name:        fontdlg.h
// Purpose:     wxFontDialog class
// Author:      Julian Smart
// Modified by:
// Created:     01/02/97
// RCS-ID:      $Id$
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_MSW_FONTDLG_H_
#define _WX_MSW_FONTDLG_H_

#ifdef __GNUG__
    #pragma interface "fontdlg.h"
#endif

// ----------------------------------------------------------------------------
// wxFontDialog
// ----------------------------------------------------------------------------

class WXDLLEXPORT wxFontDialog : public wxFontDialogBase
{
public:
    wxFontDialog() : wxFontDialogBase() { }
    wxFontDialog(wxWindow *parent) : wxFontDialogBase(parent) { }
    wxFontDialog(wxWindow *parent, const wxFontData& data)
        : wxFontDialogBase(parent, data) { }

    virtual int ShowModal();

    // deprecated
    wxFontDialog(wxWindow *parent, wxFontData *data)
        : wxFontDialogBase(parent, data) { }

protected:
    DECLARE_DYNAMIC_CLASS(wxFontDialog)
};

#endif
    // _WX_MSW_FONTDLG_H_

