#include <bits/stdc++.h>

using namespace std; 

class cCandidate{
    private:
        string maSV,hoTen,birthday;
        double dToan,dVan,dAnh;
     
    public: 
        ~cCandidate();
        cCandidate();
        cCandidate(string,string,string,double, double, double);
        cCandidate(const cCandidate&);
        cCandidate& operator =(const cCandidate& a);
        string getMaSV() const;
        string getHoTen() const; 
        string getbirth() const; 
        double getDiemToan() const; 
        double getDiemVan() const; 
        double getDiemAnh() const; 

        void setMaSV(string);
        void setHoTen(string) ;
        void setBirth(string) ; 
        void setDiem(double, double, double);
        friend istream& operator >> (istream&, cCandidate&);
        friend ostream& operator << (ostream&, const cCandidate&);
        double tongDiem();

};

        cCandidate::~cCandidate(){
            cout << "Goi ham huy 1 diem\n";
        }
        cCandidate::cCandidate(){
            this->maSV="000001";
            this->hoTen="Nguyen Van A";
            this->birthday="00/00/0000";
            this->dAnh= this->dToan = this->dVan= 0;
        }
        cCandidate:: cCandidate(string ma, string ten , string snhat,double toan, double van, double anh){
            this->maSV =ma;
            this->hoTen  =ten;
            this->birthday = snhat;
            this->dToan= toan;
            this->dVan = van;
            this->dAnh = anh;
        };
        cCandidate:: cCandidate(const cCandidate& a){
            this->maSV = a.maSV;
            this->hoTen  = a.hoTen;
            this->birthday = a.birthday;
            this->dToan= a.dToan;
            this->dVan = a.dVan;
            this->dAnh = a.dAnh;
            cout << "Goi ham sao chep thi sinh" << endl;
        };
        cCandidate& cCandidate::operator =(const cCandidate& a){
            cout << "Goi ham nap chong toan tu gan cCandidate::operator= \n";
            this->maSV = a.maSV;
            this->hoTen  = a.hoTen;
            this->birthday = a.birthday;
            this->dToan= a.dToan;
            this->dVan = a.dVan;
            this->dAnh = a.dAnh;
            return *this;
        }
        string cCandidate::getMaSV()const{
            return maSV;
        }
        string cCandidate::getHoTen()const {
            return hoTen;
        }
        string cCandidate::getbirth() const{
            return birthday;
        }
        double cCandidate::getDiemToan() const{
            return dToan;
        }
        double cCandidate::getDiemVan() const{
            return dVan;
        }
        double cCandidate::getDiemAnh() const{
            return dAnh;
        }
        void cCandidate::setMaSV(string a){
            this->maSV= a;
        }
        void cCandidate::setHoTen(string a){
            this->hoTen =a;
        }
        void cCandidate::setBirth(string a){
            this->birthday=a;
        }
        void cCandidate::setDiem(double a, double b, double c){
            this->dToan =a;
            this->dVan =b;
            this->dAnh =c;
        }
        double cCandidate::tongDiem(){
            return this->dToan + this->dVan + this->dAnh;
        }

        istream& operator >> (istream& in, cCandidate& a){
            cout << "\nNhap ma sinh vien: ";
            in >> a.maSV;
            cin.ignore();
            cout << "\nNhap ho va ten: " ;           
            getline(in,a.hoTen);
            cout << "\nNhap ngay thang nam sinh: ";           
            getline(in, a.birthday);
            cout << "\nNhap diem toan: "; 
            in >> a.dToan; 
            cin.ignore();
            cout << "\nNhap diem van: "; 
            in >> a.dVan; 
            cin.ignore();
            cout << "\nNhap diem anh: "; 
            in >> a.dAnh;
            return in; 

        }
        ostream& operator << (ostream& out, const cCandidate& a){
            out << "\nMa sinh vien: " << a.maSV;
            out << "\nHo va ten: " << a.hoTen;
            out << "\nNgay thang nam sinh: " << a.birthday;
            out << "\nDiem toan: " << a.dToan;
            out << "\nDiem van: " << a.dVan;
            out << "\nDiem anh: " << a.dAnh;
            out << endl;
            return out;
        }



class cListCandidate{
    private:
        int n; //so luong thi sinh 
        cCandidate* List = new cCandidate[n];
    public: 
        void xuatDiem15() const;
        void maxDiem() const;
        //friend void quickSort(cListCandidate,int, int);
        void xuat() const;
        void SortDecrease();
        friend istream& operator >> (istream& is, cListCandidate& a);

};

void cListCandidate:: xuatDiem15() const{
    for(int i=0; i<n ;i++){
        if(List[i].tongDiem() >15){
            cout << List[i];
        }
    }
}

void cListCandidate::maxDiem() const{
    int ans=-99;
    cCandidate a;
    for(int i=0; i< n; i++){
        if(ans < List[i].tongDiem()){
            ans=List[i].tongDiem();
            a=List[i];
        }
    }
    cout << a << endl;

}

istream& operator >> (istream& in, cListCandidate &a){
    in >> a.n;
    a.List = new cCandidate[a.n];
    for(int i=0; i< a.n; i++){
        in >> a.List[i];   
    }
    
    return in;
}

void cListCandidate::xuat() const{
    for(int i=0; i< n; i++){
        cout << this->List[i] << " ";
    }
    cout << endl;
}

void quickSort(cCandidate *&a, int l, int r){
    if(l >= r) return; 
    int i=l, j=r;
    int mid= a[(l+r)/2].tongDiem();
    while(i <=  j){
        while(a[i].tongDiem() > mid){
            i++;
        }
        while(a[j].tongDiem() < mid){
            j--;
        }
        if(i <= j){
            cCandidate temp = a[i];
            a[i]= a[j];
            a[j]= temp;
            i++;
            j--;
        }
    }
    if(i < r) quickSort(a,i,r);
    if(l < j) quickSort(a,l,j);
}

void  cListCandidate::SortDecrease(){

    quickSort(this->List,0,n);
    xuat();
}