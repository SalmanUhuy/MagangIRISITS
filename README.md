# MagangIRISITS
POINTER

Pointer adalah penunjuk suatu variabel. Karena menunjuk suatu variabel, maka pointer wajib memiliki alamat dari variabel yang ditunjuknya. Kadangkala dalam program yang besar, penghematan memori wajib untuk dilakukan. Dengan mekanisme copy and paste nilai variabel satu kedalam variabel lain, akan sangat memboroskan memori. Dengan mekanisme pointer, suatu variabel dalam fungsi dapat diakses oleh fungsi yang lain.

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
