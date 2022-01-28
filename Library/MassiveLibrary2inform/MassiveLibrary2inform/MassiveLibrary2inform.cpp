#include "pch.h"
#include "MassiveLibrary2inform.h"
#include "cmath"
#include "time.h"

using namespace System;
using namespace System::Windows::Forms;

namespace MassiveLibrary2inform
{
    void M2::enter2mas(int** mas, int n, int m)
    {
        srand(unsigned(time(NULL)));
        for (int i = 0; i < n; i++)
        {
            mas[i] = new int[m];
            for (int j = 0; j < m; j++)
                mas[i][j] = (int)(rand() % 201 - 100);
        }
    }
    void M2::output2mas(int** mas, int n, int m, DataGridView^ grd)
    {
        grd->ColumnCount = m + 1;
        grd->RowCount = n + 1;
        grd->Rows[0]->Cells[0]->Value = "[" + n + "]" + "[" + m + "]";
        for (int i = 0; i < n; i++) {
            grd->Rows[i + 1]->Cells[0]->Value = "[" + i + "]";
            for (int j = 0; j < m; j++) {
                grd->Rows[0]->Cells[j + 1]->Value = "[" + j + "]";
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        grd->Rows[i + 1]->Cells[j + 1]->Value = mas[i][j];
                    }
                }
            }
        }
        int sum = 0;
        int sum1 = 0;
        for (int s = 0; s < grd->ColumnCount; s++) {
            sum += grd->Columns[s]->Width;
        }
        for (int o = 0; o < grd->RowCount; o++) {
            sum1 += grd->Rows[o]->Height;
        }
        if (sum > 1000) grd->Width = 1000;
        if (sum1 > 1000) grd->Height = 1000;
        else
            grd->Width = sum;
        grd->Height = sum1;
    }
    void M2::output_mas(int* mas, int len, DataGridView^ grid)
    {
        grid->ColumnCount = len;
        grid->RowCount = 2;
        for (int i = 0; i < len; i++)
        {
            grid->Rows[0]->Cells[i]->Value = "[" + i + "]";
            grid->Rows[1]->Cells[i]->Value = mas[i];
        }
        int sum = 0;
        for (int s = 0; s < grid->ColumnCount; s++)
            sum += grid->Columns[s]->Width;
        if (sum > 410) grid->Width = 410;
        else grid->Width = sum;
    }
    void M2::minusl9xx(int** mas, int n, int m, int& min2x)
    {
        min2x = 100;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if ((mas[i][j] < min2x) && (mas[i][j] != -100))  //((Convert::ToInt32(mas[i]) % 100 == 0) && (mas[i] < min3x)) ФЫВЫФ(((9 < mas[i][j] < 100) || (-100 < mas[i][j] < -9)) &&ФЫВФЫ
                    min2x = mas[i][j];
            }
        if ((min2x > 99) || (min2x < -99))
            MessageBox::Show("Таких чисел нет!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
        else if (min2x < 100)
            MessageBox::Show("Минимальное 2-х значное число: " + min2x, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    void M2::rezmass(int** mas, int* rezmas, int min2x, int n, int m, int& r, int last)
    {
        r = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (i = j)
                {
                    rezmas[r] = mas[i - 1][j - 1];
                    r++;
                }
               last = mas[i][j];
            }
        for (r; r<n; r++)
            if (r = n)
            {
                rezmas[r - 1] = last;
                break;
            }
    }
    void M2::SwapMatrix(int** mas, int& min, int& max, int n, int m, ListBox^l)
    {
        int mini, minj, maxi, maxj;
        for (int j = 0; j < m; j++)
        {
            min = 1000;
            max = -1000;
            for (int i = 0; i < n; i++)
            {
                if (mas[i][j] < min)
                {
                    min = mas[i][j];
                    mini = i;
                    minj = j;
                }
                if (mas[i][j] > max)
                {
                    max = mas[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
            l->Items->Add("       " + j.ToString() +"                         " + min.ToString() + "                                    " + max.ToString());
            int swap = mas[mini][minj];
            mas[mini][minj] = mas[maxi][maxj];
            mas[maxi][maxj] = swap;
        }
    }
}

