#include <iostream>
using namespace std;

/*PROGRAM UTP KEL3 C
1.Muhammad Rifqi Febrianto (2257051008)
2.Safira Aulia (2217051041)
3.Firmansyah Abdul Aziz(2217051037)
*/

string getNamaBulan(int i){
    switch(i){
        case 1: return "Januari";
        case 2: return "Februari";
        case 3: return "Maret";
        case 4: return "April";
        case 5: return "Mei";
        case 6: return "Juni";
        case 7: return "Juli";
        case 8: return "Agustus";
        case 9: return "September";
        case 10: return "Oktober";
        case 11: return "November";
        case 12: return "Desember";
        default: return "";
    }
}

int getTanggalMaks(int i){
    if(i==2){
        return 29;
    }else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
        return 31;
    }else{
        return 30;
    }
}

string getNamaZodiak(int tanggal, int bulan){
    if((tanggal>=21 && tanggal<=31 && bulan==3) || (tanggal>=1 && tanggal<=19 && bulan==4)){
        return "ARIES";
    }else if((tanggal>=20 && tanggal<=30 && bulan==4) || (tanggal>=1 && tanggal<=20 && bulan==5)){
        return "TAURUS";
    }else if((tanggal>=21 && tanggal<=31 && bulan==5) || (tanggal>=1 && tanggal<=20 && bulan==6)){
        return "GEMINI";
    }else if((tanggal>=21 && tanggal<=30 && bulan==6) || (tanggal>=1 && tanggal<=22 && bulan==7)){
        return "CANCER";
    }else if((tanggal>=23 && tanggal<=31 && bulan==7) || (tanggal>=1 && tanggal<=22 && bulan==8)){
        return "LEO";
    }else if((tanggal>=23 && tanggal<=31 && bulan==8) || (tanggal>=1 && tanggal<=22 && bulan==9)){
        return "VIRGO";
    }else if((tanggal>=23 && tanggal<=30 && bulan==9) || (tanggal>=1 && tanggal<=22 && bulan==10)){
        return "LIBRA";
    }else if((tanggal>=23 && tanggal<=31 && bulan==10) || (tanggal>=1 && tanggal<=21 && bulan==11)){
        return "SCORPIO";
    }else if((tanggal>=22 && tanggal<=30 && bulan==11) || (tanggal>=1 && tanggal<=21 && bulan==12)){
        return "SAGITARIUS";
    }else if((tanggal>=22 && tanggal<=31 && bulan==12) || (tanggal>=1 && tanggal<=19 && bulan==1)){
        return "CAPRICORN";
    }else if((tanggal>=20 && tanggal<=31 && bulan==1) || (tanggal>=1 && tanggal<=18 && bulan==2)){
        return "AQUARIUS";
    }else if((tanggal>=19 && tanggal<=29 && bulan==2) || (tanggal>=1 && tanggal<=20 && bulan==3)){
        return "PISCES";
    }else{
        return "-";
    }
}

int main(){
	char nama[50];
    int bulan, tanggal, tanggalMaks;
    
    cout << " ==============================================" << endl;
    cout << " | PROGRAM CEK ZODIAK                         |" << endl;
    cout << " ==============================================" << endl;
    cout << " | 1. Januari     5. Mei         9. September |" << endl;
    cout << " | 2. Februari    6. Juni        10. Oktober  |" << endl;
    cout << " | 3. Maret       7. Juli        11. November |" << endl;
    cout << " | 4. April       8. Agustus     12. Desember |" << endl;
    cout << " ==============================================" << endl << endl;
    
    cout << " ----------------------------------------------" << endl;
    cout << " Masukkan Nama Anda     	: ";
	cin.getline(nama,50);
        
    do{
        cout << " Bulan Kelahiran Anda(1-12)   : "; cin >> bulan;
    }while(bulan<1 || bulan>12);
    
    tanggalMaks = getTanggalMaks(bulan);
    
    do{
        cout << " Tanggal Kelahiran Anda (1-" << tanggalMaks << ") : "; cin >> tanggal;
    }while(tanggal<1 || tanggal>tanggalMaks);
    cout << " ----------------------------------------------" << endl << endl;
    
    cout << " ==============================================" << endl;
    cout << " | HASIL PENGECEKAN                           |" << endl;
    cout << " ==============================================" << endl;
    cout << " Nama Anda          : ";
    cout << nama << ' ' << endl;
    cout << " Tanggal lahir Anda : ";
    cout << tanggal << ' ';
    cout << getNamaBulan(bulan) << " " << endl;
    cout << " Zodiak Anda        : ";
    cout << getNamaZodiak(tanggal, bulan) << " " << endl;
    cout << " ==============================================" << endl;
    
    return 0;
}
