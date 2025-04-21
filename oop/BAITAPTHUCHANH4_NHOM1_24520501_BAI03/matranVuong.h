#include <bits/stdc++.h>

using namespace std;

class mtVuong{
    private:
        int n;
        int **p;
    public:
        ~mtVuong();
        mtVuong(): n(0), p(nullptr) {}
        mtVuong(int n){
            this->n= n;
            p = new int*[n];
            for (int i = 0; i < n; ++i) {
                p[i] = new int[n];
            }
        }
        mtVuong copy(mtVuong &other);
        mtVuong& operator= (mtVuong &other);
        int get(int i, int j) const;
        void set(int i, int j, int value);
        void output() const;
        void input();
        friend istream& operator>>(istream &in, mtVuong &matrix);
        friend ostream& operator<<(ostream &out, const mtVuong &matrix);
        void phatSinh(int mi, int ma);
        void oddTrenDuongCheoChinh() const;
        int countEnding3() const;
        bool isNegative_MangTren() const;
        int firstEven() const;
        void sapxepgiamdantrendgcheophu();
};

mtVuong::~mtVuong(){
    if(p!=NULL){
        delete[]p;
        p= NULL;
        n=0;
        cout << "Da huy ma tran \n";
    }
}


mtVuong&    mtVuong::operator= (mtVuong &other){
    if (this != &other) {
        for (int i = 0; i < n; ++i) {
            delete[] p[i];
        }
        delete[] p;

        n = other.n;
        p = new int*[n];
        for (int i = 0; i < n; ++i) {
            p[i] = new int[n];
            for (int j = 0; j < n; ++j) {
                p[i][j] = other.p[i][j];
            }
        }
    }
    return *this;
}

int mtVuong::get(int i, int j) const {
    return p[i][j];
}

void mtVuong::set(int i, int j, int value) {
    p[i][j] = value;
}

void mtVuong::input() {
    cout << "Nhap vao n trong ma tran vuong nxn: ";
    cin >> n;
    cout << endl;
     this->n= n;
            p = new int*[n];
            for (int i = 0; i < n; ++i) {
                p[i] = new int[n];
            }
    cout << "Nhap cac phan tu ma tran:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> p[i][j];
        }
    }
}

void mtVuong::output() const {
    if(p==NULL)
    {
        cout << "Ma tran rong" << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << p[i][j] << " ";
        }
        cout << std::endl;
    }
}

istream& operator>>(istream &in, mtVuong &matrix) {
    matrix.input();
    return in;
}

ostream& operator<<(ostream &out, const mtVuong &matrix) {
    matrix.output();
    return out;
}

void mtVuong::phatSinh(int mi, int ma) {

    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            p[i][j] = mi + rand() % (ma - mi + 1);
        }
    }
}
void mtVuong::oddTrenDuongCheoChinh() const {
    cout << "Cac phan tu le nam tren duong cheo chinh: ";
    for (int i = 0; i < n; ++i) {
        if (p[i][i] % 2 != 0) {
            cout << p[i][i] << " ";
        }
    }
    cout << endl;
}

int mtVuong::countEnding3() const {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int j = n - 1 - i; // Tính chỉ số cột trên đường chéo phụ
        if (p[i][j] % 10 == 3) { // Kiểm tra ký số cuối
            count++;
        }
    }
    return count;
}

bool mtVuong::isNegative_MangTren() const{
    for(int i=0; i <n-1 ;i++){
        for(int j=i+1; j< n; j++)
            if(p[i][j]<0) return 1;
    }
    return 0;
}

int mtVuong::firstEven() const{
    for(int i=2; i<n; i++){
        for(int j=0; j<i-1 ;j++){
            if(p[i][j]%2==0){
                return p[i][j];
            }
        }
    }
    return -1;
}
void mtVuong::sapxepgiamdantrendgcheophu()
{
    for (int i = 0; i < n; ++i) {
        int j = n - 1 - i;
        for(int k=i+1;k<n;k++)
        {
            int t=n-1-k;
            if(p[i][j]>p[k][t])
                swap(p[i][j],p[k][t]);
        }
        }
    }





