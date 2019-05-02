object Form1: TForm1
  Left = 638
  Top = 220
  Width = 784
  Height = 510
  Caption = 'rezno[R] Notepad'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object text_field: TMemo
    Left = 0
    Top = 0
    Width = 776
    Height = 464
    Align = alClient
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Consolas'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = text_fieldKeyDown
  end
  object MainMenu1: TMainMenu
    object File1: TMenuItem
      Caption = ' &File'
      object New1: TMenuItem
        Caption = '&New'
        ShortCut = 16462
        OnClick = New1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Open1: TMenuItem
        Caption = '&Open...'
        ShortCut = 16463
        OnClick = Open1Click
      end
      object Save1: TMenuItem
        Caption = '&Save'
        ShortCut = 16467
        OnClick = Save1Click
      end
      object SaveAs1: TMenuItem
        Caption = 'Save &As...'
        ShortCut = 24659
        OnClick = SaveAs1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = 'E&xit'
        OnClick = Exit1Click
      end
    end
    object Edit1: TMenuItem
      Caption = '&Edit'
      object CutCtrlX1: TMenuItem
        Caption = 'Cu&t'
        ShortCut = 16472
        OnClick = CutCtrlX1Click
      end
      object CopyCtrlC1: TMenuItem
        Caption = '&Copy'
        ShortCut = 16451
        OnClick = CopyCtrlC1Click
      end
      object PasteCtrlV1: TMenuItem
        Caption = '&Paste'
        ShortCut = 16470
        OnClick = PasteCtrlV1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object SelectAll1: TMenuItem
        Caption = 'Select &All'
        ShortCut = 16449
        OnClick = SelectAll1Click
      end
    end
    object Format1: TMenuItem
      Caption = 'F&ormat'
      object WordWrap1: TMenuItem
        Caption = '&Word Wrap'
        Checked = True
        OnClick = WordWrap1Click
      end
      object Font1: TMenuItem
        Caption = '&Font...'
        OnClick = Font1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object Info1: TMenuItem
        Caption = '&Info'
        object AboutreznorRNotepad1: TMenuItem
          Caption = '&About rezno[R] Notepad...'
          ShortCut = 16457
          OnClick = AboutreznorRNotepad1Click
        end
        object reznoRsyoutubechannel1: TMenuItem
          Caption = 'rezno[&R]'#39's youtube channel'
          OnClick = reznoRsyoutubechannel1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 
      'Text files (*.txt)|*.txt|INI files (*.ini)|*.ini|All files (*.*)' +
      '|*.*'
    Left = 32
  end
  object SaveDialog1: TSaveDialog
    Filter = 
      'Text files (*.txt)|*.txt|INI files (*.ini)|*.ini|All files (*.*)' +
      '|*.*'
    Options = [ofReadOnly, ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 64
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 96
  end
end
