#include "classLib.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream> 
#include <iomanip>
#include <msclr\marshal_cppstd.h>

using namespace System::Windows::Forms;

void TXTD::SaveData(DataGridView^ dataGrid) {
	// �������� ����� ��� ������
	std::ofstream outfile("data.txt");
    std::string value;

	// ���������� ������ �� ������ ������ DataGridView
	for (int i = 0; i != dataGrid->RowCount; ++i) {
		for (int j = 0; j != dataGrid->ColumnCount; ++j) {
            value = msclr::interop::marshal_as<std::string>(dataGrid->Rows[i]->Cells[j]->Value->ToString());
            outfile << value << "\t"; // ����������� ��� ������ �����
		}
		outfile << "\n";
	}

	outfile.close();
}

void TXTD::LoadData(DataGridView^ dataGrid) {
	std::ifstream infile("data.txt");

    std::string line;
    while (std::getline(infile, line)) {
        // ��������� ������ �� �������� �� ���������
        std::vector<std::string> values;
        std::string value;
        std::istringstream iss(line);
        while (std::getline(iss, value, '\t')) {
            values.push_back(value);
        }

        // �������� ������ � DataGridView
        dataGrid->Rows->Add();
        int rowIndex = dataGrid->Rows->Count - 1;
        for (int i = 0; i < values.size(); ++i) {
            dataGrid->Rows[rowIndex]->Cells[i]->Value = gcnew System::String(values[i].c_str());
        }
    }

    // ������� ����
    infile.close();

}

int TXTD::GetRows() {
    std::ifstream file("data.txt");

    int rowCount = 0;
    std::string line;
    std::string sub = "���������!";
    while (std::getline(file, line)) {
        if (!(line.find(sub) != std::string::npos)) rowCount++;
    }

    file.close();

    return rowCount;
}
