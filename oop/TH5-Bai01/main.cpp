#include "mang1c.h"

int main()
{
    mang1c m1c;
    int chon;
    do
    {
        cout << "------CHUONG TRINH XU LY MANG 1 CHIEU------\n";
        cout << "1. Nhap mang\n";
        cout << "2. Phat sinh mang\n";
        cout << "3. Xuat mang\n";
        cout << "4. Cap nhat so phan tu mang goi ham SetN(n)\n";
        cout << "5. Liet ke cac phan tu la SNT\n";
        cout << "6. Dem so luong cac phan tu la SCP\n";
        cout << "7. Tinh tong gia tri cac phan tu la SHT\n";
        cout << "8. Tinh TB cong gia tri cac phan tu la SDX\n";
        cout << "9. Kiem tra mang toan phan tu le\n";
        cout << "10. Tim phan tu chan be nhat\n";
        cout << "11. Sap xep mang tang dan\n";
        cout << "12. Xoa phan tu tai vi tri\n";
        cout << "13. Them phan tu tai vi tri\n";
        cout << "14. Xoa mang\n";
        cout << "15. Cap nhat gia tri phan tu tai vi tri\n";
        cout << "16. Tim kiem tuyen tinh\n";
        cout << "17. Tim kiem nhi phan\n";
        cout << "0. Thoat CT\n";
        cout << "--------------------------------------------\n";
        cout << "Ban chon: ";
        cin >> chon;
        switch (chon)
        {
            case 0:
                cout << "Dang thoat CT\n";
                break;
            case 1:
                cin >> m1c;
                break;
            case 2:
                m1c.PhatSinh();
                break;
            case 3:
                cout << m1c;
                break;
                        case 4:
        {
            int n_moi;
            cout << "Nhap so phan tu can cap nhat: ";
            cin >> n_moi;
            m1c.SetN(n_moi);
            cout << "Mang sau khi cap nhat so phan tu la: " << m1c;
            break;
        }
        case 5:
            if (m1c.GetN() > 0)
                m1c.LietkeSNT();
            else
                cout << "Mang rong\n";
            break;
        case 6:
            if (m1c.GetN() > 0)
            {
                int demscp = m1c.DemSCP();
                if (demscp > 0)
                    cout << "Co " << demscp << " phan tu la SCP trong mang\n";
                else
                    cout << "Mang khong co phan tu la SCP\n";
            }
            else
                cout << "Mang rong\n";
            break;
        case 7:
            if (m1c.GetN() > 0)
            {
                int tongsht = m1c.TinhTongSHT();
                if (tongsht > 0)
                    cout << "Tong gia tri cac phan tu la SHT trong mang la: " << tongsht << endl;
                else
                    cout << "Mang khong co phan tu la SHT\n";
            }
            else
                cout << "Mang rong\n";
            break;
                    case 8:
        {
            if (m1c.GetN() > 0)
            {
                double tbcongsdx = m1c.TinhTBCongSDX();
                if (tbcongsdx > 0)
                    cout << "TB cong gia tri cac phan tu la SDX trong mang la: " << setprecision(6) << fixed << tbcongsdx << endl;
                else
                    cout << "Mang khong co phan tu la SDX\n";
            }
            else
                cout << "Mang rong\n";
            break;
        }
        case 9:
            if (m1c.GetN() > 0)
            {
                if (m1c.KiemTraMangLe())
                    cout << "Mang toan phan tu le\n";
                else
                    cout << "Mang co chua phan tu chan\n";
            }
            else
                cout << "Mang rong\n";
            break;
        case 10:
            if (m1c.GetN() > 0)
                m1c.TimChanBeNHat();
            else
                cout << "Mang rong\n";
            break;
        case 11:
            if (m1c.GetN() > 0)
            {
                m1c.SapxepMangTang();
                cout << "Mang sau khi sap xep tang dan la:\n" << m1c;
            }
            else
                cout << "Mang rong\n";
            break;
                    case 12:
            if (m1c.GetN() > 0)
            {
                int vtxoa;
                do
                {
                    cout << "Nhap vi tri phan tu muon xoa tu 0 den " << m1c.GetN() - 1 << ": ";
                    cin >> vtxoa;
                } while (vtxoa < 0 || vtxoa >= m1c.GetN());
                m1c.XoaTaiVT(vtxoa);
                cout << "Mang sau khi xoa phan tu tai vi tri " << vtxoa << " la:\n" << m1c;
            }
            else
                cout << "Mang rong\n";
            break;
        case 13:
        {
            int vtthem, gtthem;
            do
            {
                cout << "Nhap vi tri phan tu muon them tu 0 den " << m1c.GetN() << ": ";
                cin >> vtthem;
            } while (vtthem < 0 || vtthem > m1c.GetN());
            cout << "Nhap gia tri phan tu muon them: ";
            cin >> gtthem;
            m1c.ThemTaiVT(vtthem, gtthem);
            cout << "Mang sau khi them phan tu a[" << vtthem << "] = " << gtthem << " la:\n" << m1c;
            break;
        }
        case 14:
            m1c.~mang1c();
            cout << "Mang sau khi xoa la: " << m1c;
            break;
                    case 15:
            if (m1c.GetN() > 0)
            {
                int vtcapnhat, gtcapnhat;
                do
                {
                    cout << "Nhap vi tri phan tu muon cap nhat gia tri tu 0 den " << m1c.GetN() - 1 << ": ";
                    cin >> vtcapnhat;
                } while (vtcapnhat < 0 || vtcapnhat >= m1c.GetN());
                cout << "Nhap gia tri phan tu muon cap nhat: ";
                cin >> gtcapnhat;
                m1c.CapNhatGiaTriTaiVT(vtcapnhat, gtcapnhat);
                cout << "Mang sau khi cap nhat gia tri phan tu a[" << vtcapnhat << "] = " << gtcapnhat << " la:\n" << m1c;
            }
            else
                cout << "Mang rong\n";
            break;
                    case 16:
                       {
                       if(m1c.GetN()>0)
                        {
                            int gt;
                            cout << "Nhap gia tri can tim : ";
                            cin >> gt;
                            vector<int> ans=m1c.TimKiemTuyenTinh(gt);
                            if(ans.empty())
                            {
                                cout << "Khong co phan tu can tim trong mang!" << endl;
                            }
                            else
                            {
                                cout << "Phan tu can tim xuat hien o vi tri : ";
                                for(auto x:ans)
                                    cout << x << " ";
                                cout << endl;
                            }
                        }
                        else
                        {
                            cout << "Mang rong\n" << endl;
                        }
                       }
                       break;
                    case 17:
                        {
                             if(m1c.GetN()>0)
                        {
                            int gt;
                            cout << "Nhap gia tri can tim : ";
                            cin >> gt;
                            vector<int> ans=m1c.TimKIemNhiPhan(gt);
                            if(ans.empty())
                            {
                                cout << "Khong co phan tu can tim trong mang!" << endl;
                            }
                            else
                            {
                                if(ans.size()==1)
                                cout << "Phan tu can tim xuat hien o vi tri : " << ans[0] << endl;
                                else
                                {
                                    cout << "Phan tu can tim xuat hien tu vi tri : " << ans[0] << " den vi tri " << ans[1] << endl;
                            }
                        }
                        }
                        else
                        {
                            cout << "Mang rong\n" << endl;
                        }
                        }
                        break;
                        default:
                        cout << "Ban chon sai.Chon lai!" << endl;
                        break;

        }
        }while(chon!=0);

}
