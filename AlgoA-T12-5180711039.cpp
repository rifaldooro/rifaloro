#include<iostream>

using namespace::std;

int main(){

    int index[15];
    int i,j,a,b,c,d,e,f,batas,baru;


cout<<"\n=====JUMLAGH DATA MAHA SISWA=====\n"<<endl;
cout<<"\nmasukan Jumlah Data mahasiswa : ";cin>>batas;
cout<<endl;

    for(i=0;i<batas;i++)
    {
        cout<<"\nData mahasiswa ["<<i<<"]= ";cin>>index[i];
    }
    cout<<endl;
    cout<<"\nMasukkan nomor data Yang ingin di Dicari= ";
    cin>>f;

    for(j=0;j<batas;j++)
    {
    if(index[j]==f)
    {
    cout<<"\nNomor mahasiswa yang dicari ditemukan pada data  ke ["<<j<<"]";
    }
   }
cout<<endl;
cout<<"\nMasukkan nomor mahasiswa yang ingin diganti             = ";cin>>c;
cout<<"\nMasukkan nomor mahasiswa mahasiswa pengganti            = ";cin>>baru;
a = c;index[a] = baru;
cout<<"\nData Baru  = \n";

for(b=0;b<batas;b++)
{
cout<<"\nData["<<b<<"]="<<index[b]<<"\n";
}
cout<<endl;
cout<<"\nMasukkan nomor mahasiswa  yang ingin dihapus = ";cin>>d;
i=d;
cout<<"\nnomor mahasiswa  yang dihapus = ";
cout<<" "<<index[i]<<" pada indeks ke ["<<i<<"] \n";
cout<<"\n========Hasil=========\n";

for(j=d;j<batas;j++)
{
index[j]=index[j+1];
}
for(e=0;e<batas-1;e++)
{
cout<<"\nData["<<e<<"]="<<index[e];
}
return 0;
}
