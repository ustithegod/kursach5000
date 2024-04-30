#pragma once
#include <fstream>
#include <string>
#include <sstream> 
#include <vector>
#include <msclr\marshal_cppstd.h>

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

class TXTD {
public:
	static void SaveData(DataGridView^ dataGrid);
	static void LoadData(DataGridView^ dataGrid);
	static int GetRows();
};

