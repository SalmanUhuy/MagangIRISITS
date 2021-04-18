# MagangIRISITS
POINTER

Pointer adalah penunjuk suatu variabel. Karena menunjuk suatu variabel, maka pointer wajib memiliki alamat dari variabel yang ditunjuknya. Kadangkala dalam program yang besar, penghematan memori wajib untuk dilakukan. Dengan mekanisme copy and paste nilai variabel satu kedalam variabel lain, akan sangat memboroskan memori. Dengan mekanisme pointer, suatu variabel dalam fungsi dapat diakses oleh fungsi yang lain.

ALAMAT MEMORI
A.	Operator Address-Of (&)
    Setiap variabel, fungsi, struct, atau objek lain yang dibuat dalam program memiliki lokasinya sendiri di memori. Alokasi setiap variabel disimpan di alamat memori tertentu.
    Misalnya terdapat variabel bernama “var”. Untuk mengetahui alamat memori dari variabel, digunakan operator address-of (&) didepan nama variabelnya.
    
    int var = 5;
    printf("%d\n", var);
    printf("%p\n", &var);
    
    OUTPUT:
    5
    0x7fffdeb3ed84
Output bisa berbeda-beda di tiap eksekusi.
0x7fffdeb3ed84 merupakan alamat memori dari variabel var. 

PENGENALAN POINTER
Pointer adalah variabel khusus yang menyimpan alamat memori, bukan nilai seperti variabel biasa
B.  Deklarasi Variabel Pointer
    Deklarasi variabel pointer menggunakan operator * di antara tipe data dan nama variabelnya.
    
    int *ptr;
    atau
    int* ptr;
    
Kedua cara deklarasi di atas merupakan sintaks yang valid.

C.  Inisialisasi Variabel Pointer
    Variabel ptr di atas adalah variabel penunjuk tipe int. Variabel pointer menyimpan alamat memori. Inisialisasi variabel pointer harus berupa alamat memori, yang dapat           berasal dari variabel lain atau dialokasikan secara dinamis.
    
    int var = 55;
    int *ptr = &var; // Inisialisasi menggunakan alamat dari var 
    
Inisialisasi yang tidak sesuai akan menghasilkan error atau undefined behaviour.

    // ERROR
    int *ptr  = 5;
    // UNDEFINED BEHAVIOUR
    int *ptr2 = 0x7fffdeb3ed84;
    
D.  Assignment Variabel Pointer
    Cara melakukan assignment pada variabel pointer tidak sama dengan inisialisasinya.
    
    int var, *ptr;
    var = 55;
    ptr = &var; // Assignment pada variabel pointer menggunakan alamat dari var
    
Assignment tidak perlu menggunakan simbol * di depan nama variabelnya. Berbeda pada saat deklarasi yang mana kita perlu memberitahu compiler bahwa variabel tersebut adalah variabel pointer.

POINTER DAN FUNGSI
A.  Pass By Value
    Pass by Value berarti memasukkan (passing) argumen pada fungsi, nilai dari argumen tersebut akan disalin ke variabel yang berada pada parameter fungsi. Karena hanya nilainya     saja yang diterima oleh fungsi, perubahan yang terjadi pada variabel parameter fungsi tidak akan berpengaruh terhadap variabel asalnya.
    CONTOH:
    
    #include <stdio.h>

    void change(int a, int b)
    {
    a = a + 7;
    b = b + 7;
    }

    int main()
    {
    int x = 18, y = 8;
    change(x, y);
    printf("%d %d\n", x, y);

    return 0;
    } 
Nilai pada variabel x dan y tidak berubah karena metode passing yang digunakan adalah Pass by Value.

B.  Pass by Adress/Reference
    Berbeda dengan sebelumnya, sesuai namanya, metode Pass by Address berarti argumen yang dimasukkan (passing) ke parameter fungsi adalah alamat memori variabel. Segala             perubahan yang terjadi pada variabel tersebut, juga mempengaruhi langsung ke variabel asalnya. Hal ini terjadi karena argumennya adalah langsung berupa alamat memorinya.
    
    #include <stdio.h>

    void change(int *a, int *b)
    {
    *a = *a + 6;
    *b = *b + 6;
    }

    int main()
    {
    int x = 15, y = 8;
    change(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
    }
Karena parameternya menerima alamat memori, maka variabel parameternya harus berupa pointer.    











