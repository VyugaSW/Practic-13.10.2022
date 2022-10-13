
#include <Windows.h>
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

struct Item {
	char title[20];
	unsigned int num;
	float p;
};


int main()
{    
	//fscanf_s();
	//fprintf();
	//feof()
	//fopen_s()
	// 
	// fgetc(FILE* f); - посимвольное чтение
	// fputc(int c, FILE* f); - посимвольная запись в файл
	// fflush(FILE* f); - очищает буфер
	//FILE* out;
	//r - |открывает файл только лишь для чтения
	//w - |открывает файл только лишь для записи (информация прежняя стирается)
	//a - |открывает файл, но добавляет информацию в конец файла
	/*
	if ((fopen_s(&out,"C:\\Test\\test.txt", "w")))
		cout << "The file didn't create";
	else
		cout << "Okey";
	*/
	/*
	const int n = 5;
	int arr[n];
	FILE *out;
	const char* path = "C:\\Test\\test.txt";

	for (int i = 0; i < n; i++) {
		arr[i] = i+5;
	}

	if ((fopen_s(&out, path, "w")))
		cout << "The file wasn't created";
	else {
		for (int i = 0; i < n; i++) {
			fprintf(out, "%1d", arr[i]);
			fprintf(out, "\n");
		}
		if (fclose(out) == EOF)
			cout << "File wasn't closed";
		else
			cout << "File was closed";
	}
	*/
	/*
	FILE* in;
	const char* path = "C:\\Test\\test.txt";
	float a;

	if (fopen_s(&in, path, "r"))
		cout << "File can't be opened";
	else {
		while (!feof(in)) 
		{
			fscanf_s(in, "%f",&a);
			cout << a << " ";
		}
	}
	*/
	/*
	int i = 0;
	FILE* in;
	Item myStruct[3];
	const char* path = "C:\\Test\\test.txt";

	if (!fopen_s(&in, path, "r")) {
		while (!feof(in)) {
			fscanf_s(in, "%s",&myStruct[i].title, sizeof(myStruct[i].title));
			fscanf_s(in, "%d", &myStruct[i].num, sizeof(myStruct[i].num));
			fscanf_s(in, "%f", &myStruct[i].p, sizeof(myStruct[i].p));

			cout << myStruct[i].title << " ";
			cout << myStruct[i].num << " ";
			cout << myStruct[i].p << " ";
			cout << endl;
			i++;
		}
	}
	*/
	/*
	const char* path = "C:\\Test\\test.txt";
	int c;
	int len = 0, cnt = 0;
	FILE* f;

	if (!fopen_s(&f, path, "r")) {
		while (!feof(f)) {
			c = fgetc(f);
			if (c == '\n') {
				cnt++;
				cout << "String = " << cnt << " lenght = " << len << endl;
				len = 0;
			}
			else
				len++;
		}
		if (len) {
			cnt++;
			cout << "String = " << cnt << " lenght = " << len << endl;
		}
	}
	*/
	/*
	const char* path = "C:\\Test\\test.txt";
	int c;
	FILE* f;

	if (!fopen_s(&f, path, "r")) {
		while (!feof(f)) {
			c = fgetc(f);
			if (c == '\n') {
				cout << endl;
			}
			else
				cout << char(c);
		}
	}
	*/
}

