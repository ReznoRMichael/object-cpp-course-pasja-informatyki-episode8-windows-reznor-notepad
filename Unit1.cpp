//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString file_name="";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Open1Click(TObject *Sender)
{
    if (OpenDialog1 -> Execute())
    {
        try
        {
            text_field -> Lines -> LoadFromFile(OpenDialog1 -> FileName);
            file_name = OpenDialog1 -> FileName;
        }
        catch (...)
        {
            ShowMessage ("Error opening the file. Please check if the file exists on the disk.");
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SaveAs1Click(TObject *Sender)
{
    if (SaveDialog1 -> Execute())
    {
        try
        {
            text_field -> Lines -> SaveToFile(SaveDialog1 -> FileName);
            file_name = SaveDialog1 -> FileName;
        }
        catch (...)
        {
            ShowMessage ("An error occured while saving the file. Please try again.");
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
    if (file_name != "")
    {
        text_field -> Lines -> SaveToFile(file_name);
    }
    else
    {
        TForm1::SaveAs1Click(MainMenu1);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::New1Click(TObject *Sender)
{
    if (Application -> MessageBox
    ("Are you sure you want to create a new file? Unsaved file will be lost.", "Confirm",
    MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
    {
        text_field -> Lines -> Clear();
        file_name = "";
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::text_fieldKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Shift.Contains(ssCtrl))
    {
        if ((Key == 's') || (Key == 'S'))
        {
            TForm1::SaveAs1Click(MainMenu1);
        }
        else if ((Key == 'n') || (Key == 'N'))
        {
            TForm1::New1Click(MainMenu1);
        }
        else if ((Key == 'o') || (Key == 'O'))
        {
            TForm1::Open1Click(MainMenu1);
        }
        else if ((Key == 'a') || (Key == 'A'))
        {
            TForm1::SelectAll1Click(MainMenu1);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
    if (text_field -> Lines -> Count != 0)
    {
        if (Application -> MessageBox
        ("Are you sure you want to exit? Unsaved file will be lost.", "Confirm",
        MB_YESNO | MB_ICONQUESTION) == IDYES)
        {
            Application -> Terminate();
        }
    }
    else
    {
        Application -> Terminate();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    if (text_field -> Lines -> Count != 0)
    {
        if (Application -> MessageBox
        ("Are you sure you want to exit? Unsaved file will be lost.", "Confirm",
        MB_YESNO | MB_ICONQUESTION) == IDNO)
        {
            Action = caNone;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CutCtrlX1Click(TObject *Sender)
{
    text_field -> CutToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CopyCtrlC1Click(TObject *Sender)
{
    text_field -> CopyToClipboard();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PasteCtrlV1Click(TObject *Sender)
{
    text_field -> PasteFromClipboard();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WordWrap1Click(TObject *Sender)
{
    if (WordWrap1 -> Checked == true)
    {
        text_field -> WordWrap = false;
        text_field -> ScrollBars = ssBoth;
        WordWrap1 -> Checked = false;
    }
    else
    {
        text_field -> WordWrap = true;
        WordWrap1 -> Checked = true;
        text_field -> ScrollBars = ssVertical;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Font1Click(TObject *Sender)
{
    if (FontDialog1 -> Execute())
    {
        text_field -> Font -> Name = FontDialog1 -> Font -> Name;
        text_field -> Font -> Color = FontDialog1 -> Font -> Color;
        text_field -> Font -> Size = FontDialog1 -> Font -> Size;
        text_field -> Font -> Style = FontDialog1 -> Font -> Style;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AboutreznorRNotepad1Click(TObject *Sender)
{
    Form2 -> ShowModal();     
}
//---------------------------------------------------------------------------


void __fastcall TForm1::reznoRsyoutubechannel1Click(TObject *Sender)
{
    ShellExecute(NULL, "open", "https://www.youtube.com/c/MichaelReznoR", NULL, NULL, SW_SHOWNORMAL);    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectAll1Click(TObject *Sender)
{
    text_field -> SelectAll();
}
//---------------------------------------------------------------------------

