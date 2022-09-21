#pragma once
#include <vector>
#include "vector.h"
class Matrix
{
	std::vector<std::vector<int>> matrix;
public:
	void setMatrix(std::vector<std::vector<int>> matrix);
	std::vector<std::vector<int>> getMatrix();
	int& at(int x, int y);
	Vector operator*(Vector vec);
	std::vector<std::vector<int>> generateIdentityMatrix();
	friend bool operator == (Matrix leftOne, Matrix rightOne);
};

