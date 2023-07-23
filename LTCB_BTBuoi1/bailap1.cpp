// 0850080033_NguyenPhuongNga_08THMT

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    cout << "Nhập số câu hỏi?" << endl;
    cout << "1. In ra thông tin của sinh viên" << endl;
    cout << "2. In ra thông tin và tính điểm trung bình" << endl;
    cout << "3. Chia lấy phần nguyên và phần dư" << endl;
    cout << "4. Tính tổng 2 số nguyên" << endl;
    cout << "5. Giải phương trình bậc nhất ax+b" << endl;
    cout << "6. Tính tổng các số nguyên" << endl;
    cout << "7. Tìm số lớn nhất/nhỏ nhất trong 3 số" << endl;
    cout << "8. Xếp 3 số theo thứ tự tăng dần" << endl;
    cout << "9. Kí tự thường -> IN HOA" << endl;

    cout << "Số nhập là: ";

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        string hoTen;
        int mssv;
        string lop;
        string sdt;
        string gioiTinh;

        cout << "Họ tên: ";
        getline(cin, hoTen);
        cin >> hoTen;

        cout << "Mã số sinh viên: ";
        cin >> mssv;
        cin.ignore();

        cout << "Lớp: ";
        getline(cin, lop);

        cout << "Số điện thoại: ";
        cin >> sdt;
        cin.ignore();

        cout << "Nhập giới tính sinh viên: ";
        getline(cin, gioiTinh);

        cout << "Thông tin sinh viên:" << endl;
        cout << "Họ và tên: " << hoTen << endl;
        cout << "Mã số sinh viên: " << mssv << endl;
        cout << "Lớp: " << lop << endl;
        cout << "Số điện thoại: " << sdt << "         Giới tính: " << gioiTinh << endl;
        break;
    }
    case 2:
    {
        string hoTen, lop, namhoc, khoa;
        int mssv, mon1, mon2, mon3, mon4, mon5;
        cout << "***BAI TAP THUC HANH LAP TRINH C***" << endl;
        cout << "*********** TUAN 1 ****************" << endl;

        cout << "Mã số sinh viên: ";
        cin >> mssv;
        cin.ignore();

        cout << "Họ tên: ";
        getline(cin, hoTen);

        cout << "Lớp: ";
        getline(cin, lop);

        cout << "Khoa: ";
        getline(cin, khoa);

        cout << "Năm học: ";
        cin >> namhoc;
        cin.ignore();

        cout << "*** BANG DIEM ***" << endl;
        cout << "Môn 1: ";
        cin >> mon1;
        cin.ignore();
        cout << "Môn 2: ";
        cin >> mon2;
        cin.ignore();
        cout << "Môn 3: ";
        cin >> mon3;
        cin.ignore();
        cout << "Môn 4: ";
        cin >> mon4;
        cin.ignore();
        cout << "Môn 5: ";
        cin >> mon5;
        cin.ignore();

        int diemtrungbinh = (mon1 + mon2 + mon3 + mon4 + mon5) / 5;

        cout << "Điểm trung bình: " << diemtrungbinh << endl;

        break;
    }

    case 3:
    {
        int a, b;
        cout << "Nhập số nguyên dương a: ";
        cin >> a;

        if (a <= 0)
        {
            cout << "a là số nguyên dương." << endl;
            return 1;
        }

        cout << "Nhập số nguyên dương b: ";
        cin >> b;

        if (b <= 0)
        {
            cout << "b là số nguyên dương." << endl;
            return 1;
        }

        int phannguyen = a / b;
        int phandu = a % b;

        cout << "Kết quả chia lấy nguyên: " << phannguyen << endl;
        cout << "Kết quả chia lấy dư: " << phandu << endl;
        break;
    }

    case 4:
    {
        int x, y;
        cout << "Nhập số nguyên dương có 2 chữ số thứ nhất: ";
        cin >> x;
        if (x < 0 || x > 9)
        {
            cout << "Nhập lại số nguyên 1 chữ số" << endl;
            return 1;
        }
        cout << "Nhập số nguyên dương có 2 chữ số thứ hai: ";
        cin >> y;
        if (y < 0 || y > 9)
        {
            cout << "Nhập lại số nguyên 1 chữ số" << endl;
            return 1;
        }
        int tong = x + y;
        cout << "Tong cua hai so nguyen la: " << tong << endl;
        break;
    }
    case 5:
    {
        float a, b;
        cout << "Nhập hệ số a: ";
        cin >> a;

        cout << "Nhập hệ số b: ";
        cin >> b;

        if (a == 0)
        {
            if (b == 0)
            {
                cout << "Phương trình vô số nghiệm" << endl;
            }
            else
            {
                cout << "Phương trình vô nghiệm" << endl;
            }
        }
        else
        {
            float x = -b / a;
            cout << "Nghiệm của phương trình là: " << x << endl;
            break;
        }
    }
    case 6:
    {
        int N;
        cout << "Nhập vào một số nguyên dương: ";
        cin >> N;

        int sum = 0;

        for (int i = 1; i <= N; i++)
        {
            sum += i;
        }

        cout << "Tổng các số từ 1 đến " << N << " là: " << sum << endl;
        break;
    }
    case 7:
    {
        int num1, num2, num3;
        cout << "Nhập ba số nguyên: ";
        cin >> num1 >> num2 >> num3;

        int max_num = num1;
        int min_num = num1;

        if (num2 > max_num)
        {
            max_num = num2;
        }
        else if (num2 < min_num)
        {
            min_num = num2;
        }

        if (num3 > max_num)
        {
            max_num = num3;
        }
        else if (num3 < min_num)
        {
            min_num = num3;
        }
        cout << "Số lớn nhất trong ba số là: " << max_num << endl;
        cout << "Số nhỏ nhất trong ba số là: " << min_num << endl;

        break;
    }

    case 8:
    {
        double a, b, c;
        cout << "Nhập ba số thực a, b và c: ";
        cin >> a >> b >> c;

        if (a > b)
        {
            double temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            double temp = b;
            b = c;
            c = temp;
        }
        if (a > b)
        {
            double temp = a;
            a = b;
            b = temp;
        }

        cout << "Các số theo thứ tự tăng dần là: " << a << " " << b << " " << c << endl;
        break;
    }

    case 9:
    {
        char lowercase;
        cout << "Nhập một kí tự thường: ";
        cin >> lowercase;
        char uppercase = toupper(lowercase);
        cout << "Kí tự in hoa tương ứng là: " << uppercase << endl;
        break;
    }
    }
}