// ֳכאגםûי DLL-פאיכ.

#include "stdafx.h"

#include "LibDLL.h"
#include <random>
#include <cstdlib>
#include <ctime>

namespace LibDLL {
	void Class1::generate_array(int* arr, int n){
		srand(time(0));
		for (int i = 0; i<n; i++){
			repeat: arr[i] = (int)(rand() % 30 + 1);
			for (int j = 0; j<i; j++){
				if (arr[i] == arr[j])
					goto repeat;
			}
		}
	}

	void Class1::display_array(int* arr, int len, DataGridView^ grid){
		grid->ColumnCount = len;
		grid->RowCount = 2;
		for (int i = 0; i<len; i++){
			grid->Rows[0]->Cells[i]->Value = "[" + i + "]";
			grid->Rows[1]->Cells[i]->Value = arr[i];
		}
		int sum = 0;
		for (int s = 0; s<grid->ColumnCount; s++)
			sum+=grid->Columns[s]->Width;
		if (sum > 410) grid->Width = 410;
		else grid->Width = sum;
	}

	int Class1::min3(int* arr, int n){
		int m = 1000;
		for (int i = 0; i<n;i++){
			if (arr[i]<m && arr[i] % 3 == 0) m = arr[i];
		}
		return m;
	}
	void Class1::generate_res(int* arr, int* res, int n, int m){
		for (int i = 0; i<n; i++){
			res[i] = arr[i] * m;
		}
	}

	void Class1::delete_elem(int* arr, int& n, int k){
		for (int i = k-1; i<n; i++)
			arr[i] = arr[i+1];
		n--;
	}
};