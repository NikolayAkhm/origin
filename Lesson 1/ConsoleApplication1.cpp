#include <iostream>
#include <fstream>
#include <string>

int* create_array(int size);
void print_two_dim_array(int* int_arr, int size);
void left_shift(int* int_arr, int size);
void right_shift(int* int_arr, int size);

int main()
{
    std::ifstream fin("in.txt");
    int sizeArr1;
    fin >> sizeArr1; // Открыли файл и поместили первый символ в размер первого массива
    if (!fin.is_open())
    {
        std::cout << "error\n";
    }
    // на этмо этапе проверка открытия файла.
    else
    {
        int* int_ptr1;
        int_ptr1 = create_array(sizeArr1);
        int buf1;
        for (int i = sizeArr1 - 1; i > -1; i--)
        {
            fin >> buf1;
            int_ptr1[i] = buf1;
        }
        std::cout << "arr 1" << std::endl;// первый массив записан из файла в обычном порядке

        print_two_dim_array(int_ptr1, sizeArr1);
        std::cout << '\n' << "arr 2" << std::endl;
        int sizeArr2;
        fin >> sizeArr2;
        int* int_ptr2;
        int_ptr2 = create_array(sizeArr2);
        int buf2;
        for (int i = sizeArr2 - 1; i > -1; i--)
        {
            fin >> buf2;
            int_ptr2[i] = buf2;
        }
        print_two_dim_array(int_ptr2, sizeArr2);
        right_shift(int_ptr2, sizeArr2);
        left_shift(int_ptr1, sizeArr1);
        std::cout << "\n";
        std::cout << "arr 1'" << "\n";
        print_two_dim_array(int_ptr1, sizeArr1);
        std::cout << "\n";
        std::cout <<  "arr 2'" << "\n";
        print_two_dim_array(int_ptr2, sizeArr2);
        fin.close();

        std::ofstream fout;
        fout.open("out.txt");
        fout << sizeArr2 << "\n";
        for (int i = sizeArr2 - 1; i > -1; i--) {
            fout << int_ptr2[i] << " ";
        }
        fout << "\n" << sizeArr1 << "\n";
        for (int i = sizeArr1 - 1; i > -1; i--) {
            fout << int_ptr1[i] << " ";
        }
        fout.close();
        delete[] int_ptr2;
        int_ptr2 = nullptr;
        delete[] int_ptr1;
        int_ptr1 = nullptr;

    }

    return 0;
}
int* create_array(int size)
{
    int* int_ptr = new int[size] {};
    return int_ptr;
}
void print_two_dim_array(int* int_arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << int_arr[i] << "\t";
    }
}
void left_shift(int* int_arr, int size)
{
    int buf;
    buf = int_arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        int_arr[i] = int_arr[i + 1];
    }
    int_arr[size - 1] = buf;
}
void right_shift(int* int_arr, int size)
{
    int buf;
    buf = int_arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        int_arr[i] = int_arr[i - 1];
    }
    int_arr[0] = buf;
}