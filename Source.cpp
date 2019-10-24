
#include <iostream>
#include<vector>
using namespace std;
void quickSort(vector<int >& a, int l, int h) {
	if (l < h) {
		int pe, pi, i, j;
		pi = (l + h) / 2;
		pe = a[pi];
		std::swap(a[pi], a[l]);
		i = l;
		j = h;
		do {
			do { i++; } 
			while (a[i] < pe && i <= h);
			while (a[j] > pe)
				j--; 
			if (i < j)std::swap(a[i], a[j]);
		} while (i < j);
		std::swap(a[j], a[l]);
		quickSort(a, l, j - 1);
		quickSort(a, j + 1, h);
	}
}
int main() {
	vector<int>a = { 2,9,8,3,3,6,8,3,9,2,1 };
	int h = a.size() - 1;
	int l = 0;
	quickSort(a, l, h);
	for (auto c:a)
	{
		cout << c << " ";
	}
	return 0;
}

