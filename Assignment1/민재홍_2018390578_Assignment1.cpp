#include <iostream>
using namespace std;
// 1~5������ �ﰢ�� ��
void print_triangular(int n) {
    for (int i = 1; i <= n; ++i) {
        // Print the first part of the row with tabs
        for (int j = 1; j < i; ++j) {
            std::cout << "\t\t";
        }

        // Print the multiplication part of the row
        for (int j = i; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//6~10������ ���簢�� ��
void print_ractangle_6(int n) {
    for (int i = 1; i <= 5; ++i) {
        // Print the multiplication part of the row
        for (int j = 6; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//6~10������ �ﰢ�� ��
void print_triangular_6(int n) {
    for (int i = 6; i <= n; ++i) {
        // Print the first part of the row with tabs
        for (int j = 6; j < i; ++j) {
            std::cout << "\t\t";
        }

        // Print the multiplication part of the row
        for (int j = i; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//11~15������ ���簢�� ��
void print_ractangle_11(int n) {
    for (int i = 1; i <= 10; ++i) {
        // Print the multiplication part of the row
        for (int j = 11; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//11~15������ �ﰢ�� ��
void print_triangular_11(int n) {
    for (int i = 11; i <= n; ++i) {
        // Print the first part of the row with tabs
        for (int j = 11; j < i; ++j) {
            std::cout << "\t\t";
        }

        // Print the multiplication part of the row
        for (int j = i; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//16~20������ ������ü ��
void print_ractangle_16(int n) {
    for (int i = 1; i <= 15; ++i) {
        // Print the multiplication part of the row
        for (int j = 16; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
//16~20������ �ﰢ�� ��
void print_triangular_16(int n) {
    for (int i = 16; i <= n; ++i) {
        // Print the first part of the row with tabs
        for (int j = 16; j < i; ++j) {
            std::cout << "\t\t";
        }

        // Print the multiplication part of the row
        for (int j = i; j <= n; ++j) {
            std::cout << j << "x" << i << "= " << j * i << "\t";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}
int main(int argc, char* argv[]) {
    cout << "please input int until 20>>" << endl;
    int n = atoi(argv[1]);
    // ���ڸ� ���Ǻ��� ������ ��½�Ű��
    //�ﰢ���� �簢���� �������� ������ ����
    if (n <= 5) {
        print_triangular(n);

    }
    else if (n <= 10) {
        print_triangular(5);
        cout << endl;
        print_ractangle_6(n);
        print_triangular_6(n);

    }
    else if (n <= 15) {
        print_triangular(5);
        cout << endl;
        print_ractangle_6(10);
        print_triangular_6(10);
        cout << endl;
        print_ractangle_11(n);
        print_triangular_11(n);
    }
    else if (n <= 20) {
        print_triangular(5);
        cout << endl;
        print_ractangle_6(10);
        print_triangular_6(10);
        cout << endl;
        print_ractangle_11(15);
        print_triangular_11(15);
        cout << endl;
        print_ractangle_16(n);
        print_triangular_16(n);
    }
    else {
        // ���� ����� �˸�
        cout << "out of bound";
    }
    return 0;
}