#include <iostream>
using namespace std;
// 1~5까지의 삼각형 꼴
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
//6~10까지의 직사각형 꼴
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
//6~10까지의 삼각형 꼴
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
//11~15까지의 직사각형 꼴
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
//11~15까지의 삼각형 꼴
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
//16~20까지의 직육면체 꼴
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
//16~20까지의 삼각형 꼴
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
    // 숫자를 조건별로 나눠서 출력시키기
    //삼각형과 사각형의 조합으로 나눠서 구현
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
        // 범위 벗어날시 알림
        cout << "out of bound";
    }
    return 0;
}