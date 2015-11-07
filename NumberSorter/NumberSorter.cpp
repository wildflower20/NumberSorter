// Sort N Numbers.cpp
// 
// Copyright 2015 Akash <akashs2013@outlook.com>
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
// MA 02110-1301, USA.


#include <iostream>
using namespace std;

void dash(int dashes)
{
	for (int dash = 1; dash <= dashes; dash++)
	{
		cout << '_';
	}

	for (int back = 1; back <= dashes; back++)
	{
		cout << '\b';
	}
}

int main()
{
	cout << "Enter the no. of elements to sort: ";
	dash(8);
	int size;
	cin >> size;
	cin.get();

	if (size < 1)
	{
		cout << "Please Enter a Postive Number (> 0) of Elements.\n";
		cin.get();
		return 1;
	}

	int * array = new int[size];

	if (&array == nullptr)
	{
		cout << "Error allocating memory.\n";
		cin.get();
		return 0;
	}


	for (int input = 1; input <= size; input++)
	{
		cout << "Enter no. " << input << " of " << size << ":";
		dash(8);
		cin >> array[input - 1];
		cin.get();
	}

	int minpos, temp;


	for (int index = 0; index < size - 1; index++)
	{
		minpos = index;

		for (int checkmin = index + 1; checkmin < size; checkmin++)
		{
			if (array[checkmin] < array[minpos])
			{
				minpos = checkmin;
			}

		}

		if (minpos != index)
		{
			temp = array[index];
			array[index] = array[minpos];
			array[minpos] = temp;
		}
	}

	cout << "The array is:\n";

	for (int output = 0; output < size; output++)
	{
		if (output != size - 1)
		{
			cout << array[output] << ", ";
		}
		else
		{
			cout << array[output] << '\n';
		}
	}

	cin.get();

	return 0;
}

