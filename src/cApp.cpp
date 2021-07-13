#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{
}

cApp::~cApp()
{
}

bool cApp::OnInit()
{
	wxString title;
	title.Printf(wxT("Welcome to %s"), wxVERSION_STRING);

	m_frame = new cMain(title);
	m_frame->Show();
	return true;
}
