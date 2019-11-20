#ifndef LIBXL_C_H
#define LIBXL_C_H

#define LIBXL_VERSION 0x03080700

#ifdef _UNICODE

    #include "BookW.h"
    #include "SheetW.h"
    #include "FormatW.h"
    #include "FontW.h"
    #include "AutoFilterW.h"
    #include "FilterColumnW.h"

    #define xlCreateBook xlCreateBookCW
    #define xlCreateXMLBook xlCreateXMLBookCW
    #define xlBookLoad xlBookLoadW
    #define xlBookSave xlBookSaveW
    #define xlBookLoadUsingTempFile xlBookLoadUsingTempFileW
    #define xlBookSaveUsingTempFile xlBookSaveUsingTempFileW
    #define xlBookLoadPartially xlBookLoadPartiallyW
    #define xlBookLoadPartiallyUsingTempFile xlBookLoadPartiallyUsingTempFileW
    #define xlBookLoadWithoutEmptyCells xlBookLoadWithoutEmptyCellsW
    #define xlBookLoadInfo xlBookLoadInfoW
    #define xlBookLoadRaw xlBookLoadRawW
    #define xlBookLoadRawPartially xlBookLoadRawPartiallyW
    #define xlBookSaveRaw xlBookSaveRawW
    #define xlBookAddSheet xlBookAddSheetW
    #define xlBookInsertSheet xlBookInsertSheetW
    #define xlBookGetSheet xlBookGetSheetW
    #define xlBookGetSheetName xlBookGetSheetNameW
    #define xlBookSheetType xlBookSheetTypeW
    #define xlBookMoveSheet xlBookMoveSheetW
    #define xlBookDelSheet xlBookDelSheetW
    #define xlBookSheetCount xlBookSheetCountW
    #define xlBookAddFormat xlBookAddFormatW
    #define xlBookAddFont xlBookAddFontW
    #define xlBookAddCustomNumFormat xlBookAddCustomNumFormatW
    #define xlBookCustomNumFormat xlBookCustomNumFormatW
    #define xlBookFormat xlBookFormatW
    #define xlBookFormatSize xlBookFormatSizeW
    #define xlBookFont xlBookFontW
    #define xlBookFontSize xlBookFontSizeW
    #define xlBookDatePack xlBookDatePackW
    #define xlBookDateUnpack xlBookDateUnpackW
    #define xlBookColorPack xlBookColorPackW
    #define xlBookColorUnpack xlBookColorUnpackW
    #define xlBookActiveSheet xlBookActiveSheetW
    #define xlBookSetActiveSheet xlBookSetActiveSheetW
    #define xlBookPictureSize xlBookPictureSizeW
    #define xlBookGetPicture xlBookGetPictureW
    #define xlBookAddPicture xlBookAddPictureW
    #define xlBookAddPicture2 xlBookAddPicture2W
    #define xlBookAddPictureAsLink xlBookAddPictureAsLinkW
    #define xlBookDefaultFont xlBookDefaultFontW
    #define xlBookSetDefaultFont xlBookSetDefaultFontW
    #define xlBookSetKey xlBookSetKeyW
    #define xlBookRefR1C1 xlBookRefR1C1W
    #define xlBookSetRefR1C1 xlBookSetRefR1C1W
    #define xlBookRgbMode xlBookRgbModeW
    #define xlBookSetRgbMode xlBookSetRgbModeW
    #define xlBookVersion xlBookVersionW
    #define xlBookBiffVersion xlBookBiffVersionW
    #define xlBookIsDate1904 xlBookIsDate1904W
    #define xlBookSetDate1904 xlBookSetDate1904W
    #define xlBookIsTemplate xlBookIsTemplateW
    #define xlBookSetTemplate xlBookSetTemplateW
    #define xlBookSetLocale xlBookSetLocaleW
    #define xlBookErrorMessage xlBookErrorMessageW
    #define xlBookRelease xlBookReleaseW

    #define xlSheetCellType xlSheetCellTypeW
    #define xlSheetCellFormat xlSheetCellFormatW
    #define xlSheetSetCellFormat xlSheetSetCellFormatW
    #define xlSheetIsFormula xlSheetIsFormulaW
    #define xlSheetReadStr xlSheetReadStrW
    #define xlSheetWriteStr xlSheetWriteStrW
    #define xlSheetReadNum xlSheetReadNumW
    #define xlSheetWriteNum xlSheetWriteNumW
    #define xlSheetReadBool xlSheetReadBoolW
    #define xlSheetWriteBool xlSheetWriteBoolW
    #define xlSheetReadBlank xlSheetReadBlankW
    #define xlSheetWriteBlank xlSheetWriteBlankW
    #define xlSheetReadFormula xlSheetReadFormulaW
    #define xlSheetWriteFormula xlSheetWriteFormulaW
    #define xlSheetWriteFormulaNum xlSheetWriteFormulaNumW
    #define xlSheetWriteFormulaStr xlSheetWriteFormulaStrW
    #define xlSheetWriteFormulaBool xlSheetWriteFormulaBoolW
    #define xlSheetReadComment xlSheetReadCommentW
    #define xlSheetWriteComment xlSheetWriteCommentW
    #define xlSheetRemoveComment xlSheetRemoveCommentW
    #define xlSheetIsDate xlSheetIsDateW
    #define xlSheetReadError xlSheetReadErrorW
    #define xlSheetWriteError xlSheetWriteErrorW
    #define xlSheetColWidth xlSheetColWidthW
    #define xlSheetRowHeight xlSheetRowHeightW
    #define xlSheetColWidthPx xlSheetColWidthPxW
    #define xlSheetRowHeightPx xlSheetRowHeightPxW
    #define xlSheetSetCol xlSheetSetColW
    #define xlSheetSetRow xlSheetSetRowW
    #define xlSheetRowHidden xlSheetRowHiddenW
    #define xlSheetSetRowHidden xlSheetSetRowHiddenW
    #define xlSheetColHidden xlSheetColHiddenW
    #define xlSheetSetColHidden xlSheetSetColHiddenW
    #define xlSheetGetMerge xlSheetGetMergeW
    #define xlSheetSetMerge xlSheetSetMergeW
    #define xlSheetDelMerge xlSheetDelMergeW
    #define xlSheetMergeSize xlSheetMergeSizeW
    #define xlSheetMerge xlSheetMergeW
    #define xlSheetDelMergeByIndex xlSheetDelMergeByIndexW
    #define xlSheetPictureSize xlSheetPictureSizeW
    #define xlSheetGetPicture xlSheetGetPictureW
    #define xlSheetSetPicture xlSheetSetPictureW
    #define xlSheetSetPicture2 xlSheetSetPicture2W
    #define xlSheetGetHorPageBreak xlSheetGetHorPageBreakW
    #define xlSheetGetHorPageBreakSize xlSheetGetHorPageBreakSizeW
    #define xlSheetGetVerPageBreak xlSheetGetVerPageBreakW
    #define xlSheetGetVerPageBreakSize xlSheetGetVerPageBreakSizeW
    #define xlSheetSetHorPageBreak xlSheetSetHorPageBreakW
    #define xlSheetSetVerPageBreak xlSheetSetVerPageBreakW
    #define xlSheetSplit xlSheetSplitW
    #define xlSheetSplitInfo xlSheetSplitInfoW
    #define xlSheetGroupRows xlSheetGroupRowsW
    #define xlSheetGroupCols xlSheetGroupColsW
    #define xlSheetGroupSummaryBelow xlSheetGroupSummaryBelowW
    #define xlSheetSetGroupSummaryBelow xlSheetSetGroupSummaryBelowW
    #define xlSheetGroupSummaryRight xlSheetGroupSummaryRightW
    #define xlSheetSetGroupSummaryRight xlSheetSetGroupSummaryRightW
    #define xlSheetClear xlSheetClearW
    #define xlSheetInsertCol xlSheetInsertColW
    #define xlSheetInsertRow xlSheetInsertRowW
    #define xlSheetRemoveCol xlSheetRemoveColW
    #define xlSheetRemoveRow xlSheetRemoveRowW
    #define xlSheetCopyCell xlSheetCopyCellW
    #define xlSheetFirstRow xlSheetFirstRowW
    #define xlSheetLastRow xlSheetLastRowW
    #define xlSheetFirstCol xlSheetFirstColW
    #define xlSheetLastCol xlSheetLastColW
    #define xlSheetDisplayGridlines xlSheetDisplayGridlinesW
    #define xlSheetSetDisplayGridlines xlSheetSetDisplayGridlinesW
    #define xlSheetPrintGridlines xlSheetPrintGridlinesW
    #define xlSheetSetPrintGridlines xlSheetSetPrintGridlinesW
    #define xlSheetZoom xlSheetZoomW
    #define xlSheetSetZoom xlSheetSetZoomW
    #define xlSheetPrintZoom xlSheetPrintZoomW
    #define xlSheetSetPrintZoom xlSheetSetPrintZoomW
    #define xlSheetGetPrintFit xlSheetGetPrintFitW
    #define xlSheetSetPrintFit xlSheetSetPrintFitW
    #define xlSheetLandscape xlSheetLandscapeW
    #define xlSheetSetLandscape xlSheetSetLandscapeW
    #define xlSheetPaper xlSheetPaperW
    #define xlSheetSetPaper xlSheetSetPaperW
    #define xlSheetHeader xlSheetHeaderW
    #define xlSheetSetHeader xlSheetSetHeaderW
    #define xlSheetHeaderMargin xlSheetHeaderMarginW
    #define xlSheetFooter xlSheetFooterW
    #define xlSheetSetFooter xlSheetSetFooterW
    #define xlSheetFooterMargin xlSheetFooterMarginW
    #define xlSheetHCenter xlSheetHCenterW
    #define xlSheetSetHCenter xlSheetSetHCenterW
    #define xlSheetVCenter xlSheetVCenterW
    #define xlSheetSetVCenter xlSheetSetVCenterW
    #define xlSheetMarginLeft xlSheetMarginLeftW
    #define xlSheetSetMarginLeft xlSheetSetMarginLeftW
    #define xlSheetMarginRight xlSheetMarginRightW
    #define xlSheetSetMarginRight xlSheetSetMarginRightW
    #define xlSheetMarginTop xlSheetMarginTopW
    #define xlSheetSetMarginTop xlSheetSetMarginTopW
    #define xlSheetMarginBottom xlSheetMarginBottomW
    #define xlSheetSetMarginBottom xlSheetSetMarginBottomW
    #define xlSheetPrintRowCol xlSheetPrintRowColW
    #define xlSheetSetPrintRowCol xlSheetSetPrintRowColW
    #define xlSheetPrintRepeatRows xlSheetPrintRepeatRowsW
    #define xlSheetSetPrintRepeatRows xlSheetSetPrintRepeatRowsW
    #define xlSheetPrintRepeatCols xlSheetPrintRepeatColsW
    #define xlSheetSetPrintRepeatCols xlSheetSetPrintRepeatColsW
    #define xlSheetPrintArea xlSheetPrintAreaW
    #define xlSheetSetPrintArea xlSheetSetPrintAreaW
    #define xlSheetClearPrintRepeats xlSheetClearPrintRepeatsW
    #define xlSheetClearPrintArea xlSheetClearPrintAreaW
    #define xlSheetGetNamedRange xlSheetGetNamedRangeW
    #define xlSheetSetNamedRange xlSheetSetNamedRangeW
    #define xlSheetDelNamedRange xlSheetDelNamedRangeW
    #define xlSheetNamedRangeSize xlSheetNamedRangeSizeW
    #define xlSheetNamedRange xlSheetNamedRangeW
    #define xlSheetTableSize xlSheetTableSizeW
    #define xlSheetTable xlSheetTableW
    #define xlSheetHyperlinkSize xlSheetHyperlinkSizeW
    #define xlSheetHyperlink xlSheetHyperlinkW
    #define xlSheetDelHyperlink xlSheetDelHyperlinkW
    #define xlSheetAddHyperlink xlSheetAddHyperlinkW
    #define xlSheetAutoFilter xlSheetAutoFilterW
    #define xlSheetApplyFilter xlSheetApplyFilterW
    #define xlSheetRemoveFilter xlSheetRemoveFilterW
    #define xlSheetName xlSheetNameW
    #define xlSheetSetName xlSheetSetNameW
    #define xlSheetProtect xlSheetProtectW
    #define xlSheetSetProtect xlSheetSetProtectW
    #define xlSheetSetProtectEx xlSheetSetProtectExW
    #define xlSheetHidden xlSheetHiddenW
    #define xlSheetSetHidden xlSheetSetHiddenW
    #define xlSheetGetTopLeftView xlSheetGetTopLeftViewW
    #define xlSheetSetTopLeftView xlSheetSetTopLeftViewW
    #define xlSheetRightToLeft xlSheetRightToLeftW
    #define xlSheetSetRightToLeft xlSheetSetRightToLeftW
    #define xlSheetSetAutoFitArea xlSheetSetAutoFitAreaW
    #define xlSheetAddrToRowCol xlSheetAddrToRowColW
    #define xlSheetRowColToAddr xlSheetRowColToAddrW
    #define xlSheetSetTabColor xlSheetSetTabColorW
    #define xlSheetSetTabRgbColor xlSheetSetTabRgbColorW
    #define xlSheetAddIgnoredError xlSheetAddIgnoredErrorW
    #define xlSheetAddDataValidation xlSheetAddDataValidationW
    #define xlSheetAddDataValidationEx xlSheetAddDataValidationExW
    #define xlSheetAddDataValidationDouble xlSheetAddDataValidationDoubleW
    #define xlSheetAddDataValidationDoubleEx xlSheetAddDataValidationDoubleExW
    #define xlSheetRemoveDataValidations xlSheetRemoveDataValidationsW

    #define xlFontSize xlFontSizeW
    #define xlFontSetSize xlFontSetSizeW
    #define xlFontItalic xlFontItalicW
    #define xlFontSetItalic xlFontSetItalicW
    #define xlFontStrikeOut xlFontStrikeOutW
    #define xlFontSetStrikeOut xlFontSetStrikeOutW
    #define xlFontColor xlFontColorW
    #define xlFontSetColor xlFontSetColorW
    #define xlFontBold xlFontBoldW
    #define xlFontSetBold xlFontSetBoldW
    #define xlFontScript xlFontScriptW
    #define xlFontSetScript xlFontSetScriptW
    #define xlFontUnderline xlFontUnderlineW
    #define xlFontSetUnderline xlFontSetUnderlineW
    #define xlFontName xlFontNameW
    #define xlFontSetName xlFontSetNameW

    #define xlFormatFont xlFormatFontW
    #define xlFormatSetFont xlFormatSetFontW
    #define xlFormatNumFormat xlFormatNumFormatW
    #define xlFormatSetNumFormat xlFormatSetNumFormatW
    #define xlFormatAlignH xlFormatAlignHW
    #define xlFormatSetAlignH xlFormatSetAlignHW
    #define xlFormatAlignV xlFormatAlignVW
    #define xlFormatSetAlignV xlFormatSetAlignVW
    #define xlFormatWrap xlFormatWrapW
    #define xlFormatSetWrap xlFormatSetWrapW
    #define xlFormatRotation xlFormatRotationW
    #define xlFormatSetRotation xlFormatSetRotationW
    #define xlFormatIndent xlFormatIndentW
    #define xlFormatSetIndent xlFormatSetIndentW
    #define xlFormatShrinkToFit xlFormatShrinkToFitW
    #define xlFormatSetShrinkToFit xlFormatSetShrinkToFitW
    #define xlFormatSetBorder xlFormatSetBorderW
    #define xlFormatSetBorderColor xlFormatSetBorderColorW
    #define xlFormatBorderLeft xlFormatBorderLeftW
    #define xlFormatSetBorderLeft xlFormatSetBorderLeftW
    #define xlFormatBorderRight xlFormatBorderRightW
    #define xlFormatSetBorderRight xlFormatSetBorderRightW
    #define xlFormatBorderTop xlFormatBorderTopW
    #define xlFormatSetBorderTop xlFormatSetBorderTopW
    #define xlFormatBorderBottom xlFormatBorderBottomW
    #define xlFormatSetBorderBottom xlFormatSetBorderBottomW
    #define xlFormatBorderLeftColor xlFormatBorderLeftColorW
    #define xlFormatSetBorderLeftColor xlFormatSetBorderLeftColorW
    #define xlFormatBorderRightColor xlFormatBorderRightColorW
    #define xlFormatSetBorderRightColor xlFormatSetBorderRightColorW
    #define xlFormatBorderTopColor xlFormatBorderTopColorW
    #define xlFormatSetBorderTopColor xlFormatSetBorderTopColorW
    #define xlFormatBorderBottomColor xlFormatBorderBottomColorW
    #define xlFormatSetBorderBottomColor xlFormatSetBorderBottomColorW
    #define xlFormatBorderDiagonal xlFormatBorderDiagonalW
    #define xlFormatSetBorderDiagonal xlFormatSetBorderDiagonalW
    #define xlFormatBorderDiagonalStyle xlFormatBorderDiagonalStyleW
    #define xlFormatSetBorderDiagonalStyle xlFormatSetBorderDiagonalStyleW
    #define xlFormatBorderDiagonalColor xlFormatBorderDiagonalColorW
    #define xlFormatSetBorderDiagonalColor xlFormatSetBorderDiagonalColorW
    #define xlFormatFillPattern xlFormatFillPatternW
    #define xlFormatSetFillPattern xlFormatSetFillPatternW
    #define xlFormatPatternForegroundColor xlFormatPatternForegroundColorW
    #define xlFormatSetPatternForegroundColor xlFormatSetPatternForegroundColorW
    #define xlFormatPatternBackgroundColor xlFormatPatternBackgroundColorW
    #define xlFormatSetPatternBackgroundColor xlFormatSetPatternBackgroundColorW
    #define xlFormatLocked xlFormatLockedW
    #define xlFormatSetLocked xlFormatSetLockedW
    #define xlFormatHidden xlFormatHiddenW
    #define xlFormatSetHidden xlFormatSetHiddenW

    #define xlAutoFilterGetRef xlAutoFilterGetRefW
    #define xlAutoFilterSetRef xlAutoFilterSetRefW
    #define xlAutoFilterColumn xlAutoFilterColumnW
    #define xlAutoFilterColumnSize xlAutoFilterColumnSizeW
    #define xlAutoFilterColumnByIndex xlAutoFilterColumnByIndexW
    #define xlAutoFilterGetSortRange xlAutoFilterGetSortRangeW
    #define xlAutoFilterGetSort xlAutoFilterGetSortW
    #define xlAutoFilterSetSort xlAutoFilterSetSortW

    #define xlFilterColumnIndex xlFilterColumnIndexW
    #define xlFilterColumnFilterType xlFilterColumnFilterTypeW
    #define xlFilterColumnFilterSize xlFilterColumnFilterSizeW
    #define xlFilterColumnFilter xlFilterColumnFilterW
    #define xlFilterColumnAddFilter xlFilterColumnAddFilterW
    #define xlFilterColumnGetTop10 xlFilterColumnGetTop10W
    #define xlFilterColumnSetTop10 xlFilterColumnSetTop10W
    #define xlFilterColumnGetCustomFilter xlFilterColumnGetCustomFilterW
    #define xlFilterColumnSetCustomFilter xlFilterColumnSetCustomFilterW
    #define xlFilterColumnSetCustomFilterEx xlFilterColumnSetCustomFilterExW
    #define xlFilterColumnClear xlFilterColumnClearW

#else

    #include "BookA.h"
    #include "SheetA.h"
    #include "FormatA.h"
    #include "FontA.h"
    #include "AutoFilterA.h"
    #include "FilterColumnA.h"

    #define xlCreateBook xlCreateBookCA
    #define xlCreateXMLBook xlCreateXMLBookCA
    #define xlBookLoad xlBookLoadA
    #define xlBookSave xlBookSaveA
    #define xlBookLoadUsingTempFile xlBookLoadUsingTempFileA
    #define xlBookSaveUsingTempFile xlBookSaveUsingTempFileA
    #define xlBookLoadPartially xlBookLoadPartiallyA
    #define xlBookLoadPartiallyUsingTempFile xlBookLoadPartiallyUsingTempFileA
    #define xlBookLoadWithoutEmptyCells xlBookLoadWithoutEmptyCellsA
    #define xlBookLoadInfo xlBookLoadInfoA
    #define xlBookLoadRaw xlBookLoadRawA
    #define xlBookLoadRawPartially xlBookLoadRawPartiallyA
    #define xlBookSaveRaw xlBookSaveRawA
    #define xlBookAddSheet xlBookAddSheetA
    #define xlBookInsertSheet xlBookInsertSheetA
    #define xlBookGetSheet xlBookGetSheetA
    #define xlBookGetSheetName xlBookGetSheetNameA
    #define xlBookSheetType xlBookSheetTypeA
    #define xlBookMoveSheet xlBookMoveSheetA
    #define xlBookDelSheet xlBookDelSheetA
    #define xlBookSheetCount xlBookSheetCountA
    #define xlBookAddFormat xlBookAddFormatA
    #define xlBookAddFont xlBookAddFontA
    #define xlBookAddCustomNumFormat xlBookAddCustomNumFormatA
    #define xlBookCustomNumFormat xlBookCustomNumFormatA
    #define xlBookFormat xlBookFormatA
    #define xlBookFormatSize xlBookFormatSizeA
    #define xlBookFont xlBookFontA
    #define xlBookFontSize xlBookFontSizeA
    #define xlBookDatePack xlBookDatePackA
    #define xlBookDateUnpack xlBookDateUnpackA
    #define xlBookColorPack xlBookColorPackA
    #define xlBookColorUnpack xlBookColorUnpackA
    #define xlBookActiveSheet xlBookActiveSheetA
    #define xlBookSetActiveSheet xlBookSetActiveSheetA
    #define xlBookPictureSize xlBookPictureSizeA
    #define xlBookGetPicture xlBookGetPictureA
    #define xlBookAddPicture xlBookAddPictureA
    #define xlBookAddPicture2 xlBookAddPicture2A
    #define xlBookAddPictureAsLink xlBookAddPictureAsLinkA
    #define xlBookDefaultFont xlBookDefaultFontA
    #define xlBookSetDefaultFont xlBookSetDefaultFontA
    #define xlBookSetKey xlBookSetKeyA
    #define xlBookRefR1C1 xlBookRefR1C1A
    #define xlBookSetRefR1C1 xlBookSetRefR1C1A
    #define xlBookRgbMode xlBookRgbModeA
    #define xlBookSetRgbMode xlBookSetRgbModeA
    #define xlBookVersion xlBookVersionA
    #define xlBookBiffVersion xlBookBiffVersionA
    #define xlBookIsDate1904 xlBookIsDate1904A
    #define xlBookSetDate1904 xlBookSetDate1904A
    #define xlBookIsTemplate xlBookIsTemplateA
    #define xlBookSetTemplate xlBookSetTemplateA
    #define xlBookSetLocale xlBookSetLocaleA
    #define xlBookErrorMessage xlBookErrorMessageA
    #define xlBookRelease xlBookReleaseA

    #define xlSheetCellType xlSheetCellTypeA
    #define xlSheetCellFormat xlSheetCellFormatA
    #define xlSheetSetCellFormat xlSheetSetCellFormatA
    #define xlSheetIsFormula xlSheetIsFormulaA
    #define xlSheetReadStr xlSheetReadStrA
    #define xlSheetWriteStr xlSheetWriteStrA
    #define xlSheetReadNum xlSheetReadNumA
    #define xlSheetWriteNum xlSheetWriteNumA
    #define xlSheetReadBool xlSheetReadBoolA
    #define xlSheetWriteBool xlSheetWriteBoolA
    #define xlSheetReadBlank xlSheetReadBlankA
    #define xlSheetWriteBlank xlSheetWriteBlankA
    #define xlSheetReadFormula xlSheetReadFormulaA
    #define xlSheetWriteFormula xlSheetWriteFormulaA
    #define xlSheetWriteFormulaNum xlSheetWriteFormulaNumA
    #define xlSheetWriteFormulaStr xlSheetWriteFormulaStrA
    #define xlSheetWriteFormulaBool xlSheetWriteFormulaBoolA
    #define xlSheetReadComment xlSheetReadCommentA
    #define xlSheetWriteComment xlSheetWriteCommentA
    #define xlSheetRemoveComment xlSheetRemoveCommentA
    #define xlSheetIsDate xlSheetIsDateA
    #define xlSheetReadError xlSheetReadErrorA
    #define xlSheetWriteError xlSheetWriteErrorA
    #define xlSheetColWidth xlSheetColWidthA
    #define xlSheetRowHeight xlSheetRowHeightA
    #define xlSheetColWidthPx xlSheetColWidthPxA
    #define xlSheetRowHeightPx xlSheetRowHeightPxA
    #define xlSheetSetCol xlSheetSetColA
    #define xlSheetSetRow xlSheetSetRowA
    #define xlSheetRowHidden xlSheetRowHiddenA
    #define xlSheetSetRowHidden xlSheetSetRowHiddenA
    #define xlSheetColHidden xlSheetColHiddenA
    #define xlSheetSetColHidden xlSheetSetColHiddenA
    #define xlSheetGetMerge xlSheetGetMergeA
    #define xlSheetSetMerge xlSheetSetMergeA
    #define xlSheetDelMerge xlSheetDelMergeA
    #define xlSheetMergeSize xlSheetMergeSizeA
    #define xlSheetMerge xlSheetMergeA
    #define xlSheetDelMergeByIndex xlSheetDelMergeByIndexA
    #define xlSheetPictureSize xlSheetPictureSizeA
    #define xlSheetGetPicture xlSheetGetPictureA
    #define xlSheetSetPicture xlSheetSetPictureA
    #define xlSheetSetPicture2 xlSheetSetPicture2A
    #define xlSheetGetHorPageBreak xlSheetGetHorPageBreakA
    #define xlSheetGetHorPageBreakSize xlSheetGetHorPageBreakSizeA
    #define xlSheetGetVerPageBreak xlSheetGetVerPageBreakA
    #define xlSheetGetVerPageBreakSize xlSheetGetVerPageBreakSizeA
    #define xlSheetSetHorPageBreak xlSheetSetHorPageBreakA
    #define xlSheetSetVerPageBreak xlSheetSetVerPageBreakA
    #define xlSheetSplit xlSheetSplitA
    #define xlSheetSplitInfo xlSheetSplitInfoA
    #define xlSheetGroupRows xlSheetGroupRowsA
    #define xlSheetGroupCols xlSheetGroupColsA
    #define xlSheetGroupSummaryBelow xlSheetGroupSummaryBelowA
    #define xlSheetSetGroupSummaryBelow xlSheetSetGroupSummaryBelowA
    #define xlSheetGroupSummaryRight xlSheetGroupSummaryRightA
    #define xlSheetSetGroupSummaryRight xlSheetSetGroupSummaryRightA
    #define xlSheetClear xlSheetClearA
    #define xlSheetInsertCol xlSheetInsertColA
    #define xlSheetInsertRow xlSheetInsertRowA
    #define xlSheetRemoveCol xlSheetRemoveColA
    #define xlSheetRemoveRow xlSheetRemoveRowA
    #define xlSheetCopyCell xlSheetCopyCellA
    #define xlSheetFirstRow xlSheetFirstRowA
    #define xlSheetLastRow xlSheetLastRowA
    #define xlSheetFirstCol xlSheetFirstColA
    #define xlSheetLastCol xlSheetLastColA
    #define xlSheetDisplayGridlines xlSheetDisplayGridlinesA
    #define xlSheetSetDisplayGridlines xlSheetSetDisplayGridlinesA
    #define xlSheetPrintGridlines xlSheetPrintGridlinesA
    #define xlSheetSetPrintGridlines xlSheetSetPrintGridlinesA
    #define xlSheetZoom xlSheetZoomA
    #define xlSheetSetZoom xlSheetSetZoomA
    #define xlSheetPrintZoom xlSheetPrintZoomA
    #define xlSheetSetPrintZoom xlSheetSetPrintZoomA
    #define xlSheetGetPrintFit xlSheetGetPrintFitA
    #define xlSheetSetPrintFit xlSheetSetPrintFitA
    #define xlSheetLandscape xlSheetLandscapeA
    #define xlSheetSetLandscape xlSheetSetLandscapeA
    #define xlSheetPaper xlSheetPaperA
    #define xlSheetSetPaper xlSheetSetPaperA
    #define xlSheetHeader xlSheetHeaderA
    #define xlSheetSetHeader xlSheetSetHeaderA
    #define xlSheetHeaderMargin xlSheetHeaderMarginA
    #define xlSheetFooter xlSheetFooterA
    #define xlSheetSetFooter xlSheetSetFooterA
    #define xlSheetFooterMargin xlSheetFooterMarginA
    #define xlSheetHCenter xlSheetHCenterA
    #define xlSheetSetHCenter xlSheetSetHCenterA
    #define xlSheetVCenter xlSheetVCenterA
    #define xlSheetSetVCenter xlSheetSetVCenterA
    #define xlSheetMarginLeft xlSheetMarginLeftA
    #define xlSheetSetMarginLeft xlSheetSetMarginLeftA
    #define xlSheetMarginRight xlSheetMarginRightA
    #define xlSheetSetMarginRight xlSheetSetMarginRightA
    #define xlSheetMarginTop xlSheetMarginTopA
    #define xlSheetSetMarginTop xlSheetSetMarginTopA
    #define xlSheetMarginBottom xlSheetMarginBottomA
    #define xlSheetSetMarginBottom xlSheetSetMarginBottomA
    #define xlSheetPrintRowCol xlSheetPrintRowColA
    #define xlSheetSetPrintRowCol xlSheetSetPrintRowColA
    #define xlSheetPrintRepeatRows xlSheetPrintRepeatRowsA
    #define xlSheetSetPrintRepeatRows xlSheetSetPrintRepeatRowsA
    #define xlSheetPrintRepeatCols xlSheetPrintRepeatColsA
    #define xlSheetSetPrintRepeatCols xlSheetSetPrintRepeatColsA
    #define xlSheetPrintArea xlSheetPrintAreaA
    #define xlSheetSetPrintArea xlSheetSetPrintAreaA
    #define xlSheetClearPrintRepeats xlSheetClearPrintRepeatsA
    #define xlSheetClearPrintArea xlSheetClearPrintAreaA
    #define xlSheetGetNamedRange xlSheetGetNamedRangeA
    #define xlSheetSetNamedRange xlSheetSetNamedRangeA
    #define xlSheetDelNamedRange xlSheetDelNamedRangeA
    #define xlSheetNamedRangeSize xlSheetNamedRangeSizeA
    #define xlSheetNamedRange xlSheetNamedRangeA
    #define xlSheetTableSize xlSheetTableSizeA
    #define xlSheetTable xlSheetTableA
    #define xlSheetHyperlinkSize xlSheetHyperlinkSizeA
    #define xlSheetHyperlink xlSheetHyperlinkA
    #define xlSheetDelHyperlink xlSheetDelHyperlinkA
    #define xlSheetAddHyperlink xlSheetAddHyperlinkA
    #define xlSheetAutoFilter xlSheetAutoFilterA
    #define xlSheetApplyFilter xlSheetApplyFilterA
    #define xlSheetRemoveFilter xlSheetRemoveFilterA
    #define xlSheetName xlSheetNameA
    #define xlSheetSetName xlSheetSetNameA
    #define xlSheetProtect xlSheetProtectA
    #define xlSheetSetProtect xlSheetSetProtectA
    #define xlSheetSetProtectEx xlSheetSetProtectExA
    #define xlSheetHidden xlSheetHiddenA
    #define xlSheetSetHidden xlSheetSetHiddenA
    #define xlSheetGetTopLeftView xlSheetGetTopLeftViewA
    #define xlSheetSetTopLeftView xlSheetSetTopLeftViewA
    #define xlSheetRightToLeft xlSheetRightToLeftA
    #define xlSheetSetRightToLeft xlSheetSetRightToLeftA
    #define xlSheetSetAutoFitArea xlSheetSetAutoFitAreaA
    #define xlSheetAddrToRowCol xlSheetAddrToRowColA
    #define xlSheetRowColToAddr xlSheetRowColToAddrA
    #define xlSheetSetTabColor xlSheetSetTabColorA
    #define xlSheetSetTabRgbColor xlSheetSetTabRgbColorA
    #define xlSheetAddIgnoredError xlSheetAddIgnoredErrorA
    #define xlSheetAddDataValidation xlSheetAddDataValidationA
    #define xlSheetAddDataValidationEx xlSheetAddDataValidationExA
    #define xlSheetAddDataValidationDouble xlSheetAddDataValidationDoubleA
    #define xlSheetAddDataValidationDoubleEx xlSheetAddDataValidationDoubleExA
    #define xlSheetRemoveDataValidations xlSheetRemoveDataValidationsA

    #define xlFontSize xlFontSizeA
    #define xlFontSetSize xlFontSetSizeA
    #define xlFontItalic xlFontItalicA
    #define xlFontSetItalic xlFontSetItalicA
    #define xlFontStrikeOut xlFontStrikeOutA
    #define xlFontSetStrikeOut xlFontSetStrikeOutA
    #define xlFontColor xlFontColorA
    #define xlFontSetColor xlFontSetColorA
    #define xlFontBold xlFontBoldA
    #define xlFontSetBold xlFontSetBoldA
    #define xlFontScript xlFontScriptA
    #define xlFontSetScript xlFontSetScriptA
    #define xlFontUnderline xlFontUnderlineA
    #define xlFontSetUnderline xlFontSetUnderlineA
    #define xlFontName xlFontNameA
    #define xlFontSetName xlFontSetNameA

    #define xlFormatFont xlFormatFontA
    #define xlFormatSetFont xlFormatSetFontA
    #define xlFormatNumFormat xlFormatNumFormatA
    #define xlFormatSetNumFormat xlFormatSetNumFormatA
    #define xlFormatAlignH xlFormatAlignHA
    #define xlFormatSetAlignH xlFormatSetAlignHA
    #define xlFormatAlignV xlFormatAlignVA
    #define xlFormatSetAlignV xlFormatSetAlignVA
    #define xlFormatWrap xlFormatWrapA
    #define xlFormatSetWrap xlFormatSetWrapA
    #define xlFormatRotation xlFormatRotationA
    #define xlFormatSetRotation xlFormatSetRotationA
    #define xlFormatIndent xlFormatIndentA
    #define xlFormatSetIndent xlFormatSetIndentA
    #define xlFormatShrinkToFit xlFormatShrinkToFitA
    #define xlFormatSetShrinkToFit xlFormatSetShrinkToFitA
    #define xlFormatSetBorder xlFormatSetBorderA
    #define xlFormatSetBorderColor xlFormatSetBorderColorA
    #define xlFormatBorderLeft xlFormatBorderLeftA
    #define xlFormatSetBorderLeft xlFormatSetBorderLeftA
    #define xlFormatBorderRight xlFormatBorderRightA
    #define xlFormatSetBorderRight xlFormatSetBorderRightA
    #define xlFormatBorderTop xlFormatBorderTopA
    #define xlFormatSetBorderTop xlFormatSetBorderTopA
    #define xlFormatBorderBottom xlFormatBorderBottomA
    #define xlFormatSetBorderBottom xlFormatSetBorderBottomA
    #define xlFormatBorderLeftColor xlFormatBorderLeftColorA
    #define xlFormatSetBorderLeftColor xlFormatSetBorderLeftColorA
    #define xlFormatBorderRightColor xlFormatBorderRightColorA
    #define xlFormatSetBorderRightColor xlFormatSetBorderRightColorA
    #define xlFormatBorderTopColor xlFormatBorderTopColorA
    #define xlFormatSetBorderTopColor xlFormatSetBorderTopColorA
    #define xlFormatBorderBottomColor xlFormatBorderBottomColorA
    #define xlFormatSetBorderBottomColor xlFormatSetBorderBottomColorA
    #define xlFormatBorderDiagonal xlFormatBorderDiagonalA
    #define xlFormatSetBorderDiagonal xlFormatSetBorderDiagonalA
    #define xlFormatBorderDiagonalStyle xlFormatBorderDiagonalStyleA
    #define xlFormatSetBorderDiagonalStyle xlFormatSetBorderDiagonalStyleA
    #define xlFormatBorderDiagonalColor xlFormatBorderDiagonalColorA
    #define xlFormatSetBorderDiagonalColor xlFormatSetBorderDiagonalColorA
    #define xlFormatFillPattern xlFormatFillPatternA
    #define xlFormatSetFillPattern xlFormatSetFillPatternA
    #define xlFormatPatternForegroundColor xlFormatPatternForegroundColorA
    #define xlFormatSetPatternForegroundColor xlFormatSetPatternForegroundColorA
    #define xlFormatPatternBackgroundColor xlFormatPatternBackgroundColorA
    #define xlFormatSetPatternBackgroundColor xlFormatSetPatternBackgroundColorA
    #define xlFormatLocked xlFormatLockedA
    #define xlFormatSetLocked xlFormatSetLockedA
    #define xlFormatHidden xlFormatHiddenA
    #define xlFormatSetHidden xlFormatSetHiddenA

    #define xlAutoFilterGetRef xlAutoFilterGetRefA
    #define xlAutoFilterSetRef xlAutoFilterSetRefA
    #define xlAutoFilterColumn xlAutoFilterColumnA
    #define xlAutoFilterColumnSize xlAutoFilterColumnSizeA
    #define xlAutoFilterColumnByIndex xlAutoFilterColumnByIndexA
    #define xlAutoFilterGetSortRange xlAutoFilterGetSortRangeA
    #define xlAutoFilterGetSort xlAutoFilterGetSortA
    #define xlAutoFilterSetSort xlAutoFilterSetSortA

    #define xlFilterColumnIndex xlFilterColumnIndexA
    #define xlFilterColumnFilterType xlFilterColumnFilterTypeA
    #define xlFilterColumnFilterSize xlFilterColumnFilterSizeA
    #define xlFilterColumnFilter xlFilterColumnFilterA
    #define xlFilterColumnAddFilter xlFilterColumnAddFilterA
    #define xlFilterColumnGetTop10 xlFilterColumnGetTop10A
    #define xlFilterColumnSetTop10 xlFilterColumnSetTop10A
    #define xlFilterColumnGetCustomFilter xlFilterColumnGetCustomFilterA
    #define xlFilterColumnSetCustomFilter xlFilterColumnSetCustomFilterA
    #define xlFilterColumnSetCustomFilterEx xlFilterColumnSetCustomFilterExA
    #define xlFilterColumnClear xlFilterColumnClearA

#endif

#endif
