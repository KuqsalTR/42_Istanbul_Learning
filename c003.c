#include <unistd.h>

void ft_print_reverse_alphabet(void) 
{
    /* 
    ASCII tablosunda:
    'a' = 97
    'z' = 122

    c başlangıç değeri 'z' = 122 olarak ayarlanır.
    Döngü, c'nin değeri 97'ye (yani 'a') kadar azalana kadar devam eder.
    */

    char c = 122; // 'z' harfini temsil eden ASCII değeri 122

    // 'c', 97'ye eşit ya da büyük olduğu sürece döngü devam eder (97 'a' harfidir).
    while (c >= 97) {
        write(1, &c, 1); // 'c' harfini ekrana yazdırır.
        c--; // 'c' değerini bir azaltır, böylece bir sonraki harfe geçilir (tersten yazdırma).
    }
}

int main() {
    ft_print_reverse_alphabet(); // Fonksiyonu çağırarak alfabeti tersten yazdırır.
    return 0;
}
