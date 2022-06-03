#include <iostream>
#define MAX 100 //nilai maksimum data stack
using namespace std;

struct Stack {
    int puncak; 
	int data[MAX];
} S;

void init() {
    S.puncak = -1;
}
 
bool isEmpty() {
    return S.puncak == -1;
}
 
bool isFull() {
    return S.puncak == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout << "\nStack Penuh" << endl;
    } else {
        S.puncak++;
        cout << "\nMasukkan data : ";
        cin >> S.data[S.puncak];
        cout << "\n Data : '" << S.data[S.puncak] <<endl; 
		cout << "Data Ditambahkan"<< endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\nStack Is Empty !! " << endl;
    } else {
        cout << "\n Data :"<<S.data[S.puncak] <<endl;
        cout << "Data Dihapus" << endl;
        S.puncak--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<< "\nStack Kosong\n";
    } else {
        cout << "Data Stack : ";
        for (int i = S.puncak; i >= 0; i--)
            cout << S.data[i] <<  ( ",");
    }
}

int main() {
	int choose;
	do
	{
		cout << "--------------STACK-------------\n"
			<< "---------------------------------\n"
			<< " 1. Menambahkan Data  \n"
			<< " 2. Menghapus Data \n"
			<< " 3. Menampilkan Data \n"
			<< " 4. EXIT \n\n"
			<< "----------------------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=3);
	return 0;
}
