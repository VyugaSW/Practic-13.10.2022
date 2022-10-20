
#include <Windows.h>
#include <iostream>
#include <io.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
#define mode  1
struct Item {
	char title[20];
	unsigned int num;
	float p;
};




#if mode == 0
int main()
{    
	//fscanf_s();
	//fprintf();
	//feof()
	//fopen_s()

	// символы:
	// fgetc(FILE* f); - посимвольное чтение
	// fputc(int c, FILE* f); - посимвольная запись в файл
	// fflush(FILE* f); - очищает буфер

	// строки
	//fgets(char* s, int n, FILE* f) - построчное чтение из файла
	//fputs(char* s, FILE* f) -построчная запись в файл
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
	/*
	const char* path = "C:\\Test\\test.txt";
	FILE* f;
	int len = 0;
	char buff[128];
	if (!fopen_s(&f, path, "r")) {
		while (!feof(f)) {
			fgets(buff, 127, f);
			len = strlen(buff);
			if (buff[len - 1] == '\n')
				buff[len - 1] = '\0';
			puts(buff);
		}
	}
	*/


}
#else
int main() {
	setlocale(LC_ALL, "");

	/*const char* path = "C:\\Test\\data.dat";
	int arr[5];

	FILE* out;
	if (!fopen_s(&out, path, "wb")) {
		for (int i = 0; i < 5; i++) {
			arr[i] = i + 2;
			fwrite(&arr[i], sizeof(int), 1, out);
		}
	}

	FILE* in;
	char c[512];
	if (!fopen_s(&in, path, "rb")) {
		fread(&c, 1, 512, in);
		cout << c << endl;
	}*/

	/*const char* path = "C:\\Test\\data.dat";
	int arr[10], a;
	FILE* f;

	//запись данных в файл
	if (!fopen_s(&f, path, "wb"))
	{
		for (int i = 0; i < 10; i++) {
			arr[i] = i + 1;
			fwrite(&arr[i], sizeof(int), 1, f);
		}
		fclose(f);
	}

	//считывание десятого числа в файле
	if (!fopen_s(&f, path, "rb")) {
		for (int i = 0; i < 10; i++) {
			fread(&a, sizeof(int), 1, f);
		}
		cout << a << endl;
		fclose(f);
	}

	//считывание первого числа в файле
	if (!fopen_s(&f, path, "rb")) {
		fread(&a, sizeof(int), 1, f);
		cout << a << endl;
		fclose(f);
	}*/

	//int fseek(FILE* filename, long int offset, int origin)
	// - выполняет переход на нужную позицию в файле
	// offset - смещение (кол-во байтов, на которые будет смещен указатель файла)
	// origin - позиция начала отсчета (SEEK_SET,SEEK_CUR,SEEK_END) -- (начало, текующая позиция, конец файла)
	/*onst char* path = "C:\\Test\\data.dat";
	int n = 10, imax, imin, i;
	int* a, max, min, k;
	FILE* f;
	if (!fopen_s(&f, path, "wb"))
	{
		for (int i = 1; i < 11; i++) {
			fwrite(&i, sizeof(int), 1, f);
		}
		fclose(f);
	}
	if (!fopen_s(&f, path, "rb")) {
		for (int i = 0; i < 10; i++) {
			fread(&k, sizeof(int), 1, f);
			cout << k << endl;
		}

		fclose(f);
	}
	if (!fopen_s(&f, path, "r+b")) {
		a = new int[n];
		fread(a, sizeof(int), n, f);
		for (imax = imin = 0, max = min = a[0], i = 1; i < n; i++) {
			if (a[i] > max) {
				max = a[i];
				imax = i;
			}
			if (a[i] < min) {
				min = a[i];
				imin = i;
			}
		}
		fseek(f, sizeof(int)*imax, SEEK_SET);
		fwrite(&min, sizeof(int), 1, f);
		fseek(f, sizeof(int)*imin, SEEK_SET);
		fwrite(&max, sizeof(int), 1, f);
		fclose(f);
		delete[]a;
	}
	cout << endl;
	if (!fopen_s(&f, path, "rb")) {
		for (int i = 0; i < 10; i++) {
			fread(&k, sizeof(int), 1, f);
			cout << k << endl;
		}

		fclose(f);
	}*/

	//long _findfirst(char* path, _finddata_t* fileinfo)
	//int _findnext(long done, _finddata_t* fileinfo) | done - результат выполнения работы _findfirst

	/*struct _finddata_t myfileinfo;
	//time_create
	//time_access
	//time_write
	//size
	//name

	long done = _findfirst("*.cpp", &myfileinfo);
	cout << myfileinfo.name;*/
	/*
	struct _finddata_t fileinfo;
	char str[200] = "C:\\Test\\*.txt";
	intptr_t done = _findfirst(str, &fileinfo);
	do 
	{
	cout << fileinfo.name << endl;
	} while (_findnext(done, &fileinfo) != -1);*/
	
	
	
	
	
	
}
#endif
