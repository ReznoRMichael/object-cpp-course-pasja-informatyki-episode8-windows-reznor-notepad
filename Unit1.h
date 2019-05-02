//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *New1;
        TMenuItem *N1;
        TMenuItem *Open1;
        TMenuItem *Save1;
        TMenuItem *SaveAs1;
        TMenuItem *N2;
        TMenuItem *Exit1;
        TMenuItem *Edit1;
        TMenuItem *CutCtrlX1;
        TMenuItem *CopyCtrlC1;
        TMenuItem *PasteCtrlV1;
        TMenuItem *Format1;
        TMenuItem *WordWrap1;
        TMenuItem *Font1;
        TMenuItem *Help1;
        TMenuItem *Info1;
        TMenuItem *AboutreznorRNotepad1;
        TMenuItem *reznoRsyoutubechannel1;
        TMemo *text_field;
        TOpenDialog *OpenDialog1;
    TSaveDialog *SaveDialog1;
    TFontDialog *FontDialog1;
    TMenuItem *N3;
    TMenuItem *SelectAll1;
        void __fastcall Open1Click(TObject *Sender);
    void __fastcall SaveAs1Click(TObject *Sender);
    void __fastcall Save1Click(TObject *Sender);
    void __fastcall New1Click(TObject *Sender);
    void __fastcall text_fieldKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Exit1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall CutCtrlX1Click(TObject *Sender);
    void __fastcall CopyCtrlC1Click(TObject *Sender);
    void __fastcall PasteCtrlV1Click(TObject *Sender);
    void __fastcall WordWrap1Click(TObject *Sender);
    void __fastcall Font1Click(TObject *Sender);
    void __fastcall AboutreznorRNotepad1Click(TObject *Sender);
    void __fastcall reznoRsyoutubechannel1Click(TObject *Sender);
    void __fastcall SelectAll1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
