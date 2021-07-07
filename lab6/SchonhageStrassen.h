#pragma once
#include <vector>

typedef std::vector<int> lNum;

/**
 * @brief ����������� ��� ������� ����� �����
 * @param num1 ������ ������� �����
 * @param num2 ������ ������� �����
 * @result ���������
 */
lNum SS_fastMultiply(lNum num1, lNum num2);

lNum SS_intArray2LNum(int* array, int size);

int* SS_lNum2Array(lNum num, int *size = nullptr);


std::string SS_lNum2String(lNum num); 