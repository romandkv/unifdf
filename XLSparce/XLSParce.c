//#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "libxl.h"

int main() 
{
	BookHandle book = xlCreateBook();
	FILE* fout = fopen("map.txt", "w");

	if (book) 
	{
		if (xlBookLoad(book, "example.xls"))
		{
			SheetHandle sheet = xlBookGetSheet(book, 0);
			if (sheet)
			{
				for (int row = 0; row < xlSheetLastRow(sheet); row++)
				{
					for (int col = 0; col < xlSheetLastCol(sheet); col++)
					{
						if (xlSheetCellType(sheet, row, col) == CELLTYPE_NUMBER) {
							fprintf(fout, "%d ", (int)xlSheetReadNum(sheet, row, col, NULL));
						}
					}
					fprintf(fout, "\n", NULL);
				}
				fclose(fout);
			}
		}
	}

   xlBookRelease(book);
   return 0;
}