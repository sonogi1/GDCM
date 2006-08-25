// -*- C++ -*- generated by wxGlade 0.4.1 on Sat Aug 19 15:28:55 2006

#include "wxGDCMFrame.h"
#include "wxVTKRenderWindowInteractor.h"
#include "vtkImageViewer.h"
#include "vtkGDCMReader.h"

BEGIN_EVENT_TABLE( wxGDCMFrame, wxFrame )
    EVT_MENU(wxID_OPEN, wxGDCMFrame::OnOpen)
    EVT_MENU(wxID_HELP, wxGDCMFrame::OnAbout)
    EVT_MENU(wxID_EXIT, wxGDCMFrame::OnQuit)
    EVT_CLOSE(          wxGDCMFrame::OnCloseFrame)
END_EVENT_TABLE( );


wxGDCMFrame::wxGDCMFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: wxGDCMFrame::wxGDCMFrame
    Panel = new wxPanel(this, -1);
    TopFrameMenubar = new wxMenuBar();
    SetMenuBar(TopFrameMenubar);

    // First menu
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    wxglade_tmp_menu_1->Append(wxID_OPEN, wxT("&Open...\tCtrl+o"),
      wxT("Open DICOM file"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->Append(wxID_SAVE, wxT("&Rewrite...\tCtrl+r"),
      wxT("Rewrite DICOM file"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->AppendSeparator();
    wxglade_tmp_menu_1->Append(wxID_EXIT, wxT("E&xit...\tCtrl+x"),
      wxT("Exit app"), wxITEM_NORMAL);
    TopFrameMenubar->Append(wxglade_tmp_menu_1, wxT("File"));

    // Second menu
    wxMenu* wxglade_tmp_menu_2 = new wxMenu();
    //wxglade_tmp_menu_2->Append(wxID_TOOLS, wxT("&Tools...\tCtrl+t"), 
    //  wxT("Tools"), wxITEM_NORMAL);
    TopFrameMenubar->Append(wxglade_tmp_menu_2, wxT("Tools"));

    // Third menu
    wxMenu* wxglade_tmp_menu_3 = new wxMenu();
    wxglade_tmp_menu_3->Append(wxID_HELP, wxT("&About...\tCtrl+a"), 
      wxT("About Dialog"), wxITEM_NORMAL);
    TopFrameMenubar->Append(wxglade_tmp_menu_3, wxT("Help"));
    // Status bar
    TopFrameStatusbar = CreateStatusBar(1, 0);
    // Toolbar
    TopFrameToolbar = new wxToolBar(this, -1, wxDefaultPosition,
      wxDefaultSize, wxTB_HORIZONTAL|wxTB_TEXT);
    SetToolBar(TopFrameToolbar);
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap,
      wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->AddSeparator();
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap, 
      wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->AddSeparator();
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap, 
      wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->Realize();
    // VTK window
    VTKwindow = new wxVTKRenderWindowInteractor(Panel, -1);

    set_properties();
    do_layout();
    // end wxGlade
    imageViewer = vtkImageViewer::New();
    imageViewer->SetupInteractor( VTKwindow );
    Reader      = vtkGDCMReader::New();
    directory = wxT("/home/mathieu/Projects/GDCM/gdcmData");
}

wxGDCMFrame::~wxGDCMFrame()
{
  VTKwindow->Delete();
  imageViewer->Delete();
  Reader->Delete();
}

void wxGDCMFrame::set_properties()
{
    // begin wxGlade: wxGDCMFrame::set_properties
    SetTitle(wxT("wxGDCM"));
    SetSize(wxSize(436, 350));
    int TopFrameStatusbar_widths[] = { -1 };
    TopFrameStatusbar->SetStatusWidths(1, TopFrameStatusbar_widths);
    const wxString TopFrameStatusbar_fields[] = {
        wxT("frame_1_statusbar")
    };
    for(int i = 0; i < TopFrameStatusbar->GetFieldsCount(); ++i) {
        TopFrameStatusbar->SetStatusText(TopFrameStatusbar_fields[i], i);
    }
    // end wxGlade
}


void wxGDCMFrame::do_layout()
{
    // begin wxGlade: wxGDCMFrame::do_layout
    wxBoxSizer* Sizer = new wxBoxSizer(wxVERTICAL);
    wxGridSizer* GridSizer = new wxGridSizer(1, 1, 0, 0);
    GridSizer->Add(VTKwindow, 1, wxEXPAND, 0);
    Panel->SetAutoLayout(true);
    Panel->SetSizer(GridSizer);
    GridSizer->Fit(Panel);
    GridSizer->SetSizeHints(Panel);
    Sizer->Add(Panel, 1, wxEXPAND, 0);
    SetAutoLayout(true);
    SetSizer(Sizer);
    Layout();
    // end wxGlade
}

void wxGDCMFrame::OnCloseFrame( wxCloseEvent& event )
{
  std::cerr << "Close" << std::endl;
  Destroy();
}

void wxGDCMFrame::OnOpen(wxCommandEvent& event)
{
  std::cerr << "Open" << std::endl;
  wxString filemask = wxT("DICOM files (*.dcm)|*.dcm");
  wxFileDialog* dialog = new wxFileDialog( this, wxT("Open DICOM"), directory,
	filename, filemask, wxOPEN );
  dialog->CentreOnParent();
  if ( dialog->ShowModal() == wxID_OK )
  {
    directory = dialog->GetDirectory();
    filename  = dialog->GetFilename();
    std::cerr << "Dir: " << directory.fn_str() << std::endl;
    std::cerr << "File: " << filename.fn_str() << std::endl;
    //wxString fn = dialog->GetFilename();
    //std::cerr << "fn: " << fn.fn_str() << std::endl;
    std::string fn = (const char*)directory.fn_str();
    fn += "/";
    fn += (const char *)filename.fn_str();
    Reader->SetFileName( fn.c_str() );
    //Reader->Update();
    imageViewer->SetInputConnection( Reader->GetOutputPort() );
    imageViewer->Render();
  }
  dialog->Close();
  dialog->Destroy();
}

void wxGDCMFrame::OnQuit( wxCommandEvent& event )
{
  std::cerr << "Quit" << std::endl;
  Close(true);
}

void wxGDCMFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox( _T("This is the about box for wxGDCM"), _T("About wxGDCM"));
/*
  wxMessageDialog* msgDialog = new wxMessageDialog( this, wxString(
	text.c_str(), wxConvUTF8 ), wxString( title.c_str(), wxConvUTF8 ), wxOK );
  msgDialog->ShowModal();
  msgDialog->Close();
  msgDialog->Destroy();
*/

}


