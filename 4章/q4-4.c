#include <stdio.h>

//要するにscanfを使う場合と普通に="ABCD"みたいに値を代入する場合の違い
//ポインタを文字列リテラルで初期化する場合と、メモリを確保している配列で初期化している場合
//上の4パターンで場合わけされる。
int main(void)
{
    char str[5] = "ABCD";
    //ptrがstrのの先頭アドレスを指している・
    char *ptr = "ABCD";
    //char *ptr = str;
    //ポインタの指す先に入力した文字列リテラルになる（要するにstrも変更？）
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    //zsh: bus error  ./q4-4　これはchar *ptr = "ABCD";のようにメモリ上の文字列リテラルをscanf("%s", ptr);で変更しようとしたときに生じるエラー
    //基本的に文字列リテラルの書き換えは可能でない
    scanf("%s", ptr);
    //scanf("%s", str);
    //ptr = "CDEF"だとptrの指す値が""ABCD"の先頭アドレスから""CDEF"の先頭アドレスに変更されるだけなのでstrは変更されない
    //CDEF,もABCDもメモリ上のどこかに保存されている値であり、ptrの指す場所が変更されただけ
    //一方でscanf ("%s", ptr)はptrの保存しているアドレス先の値を変更している
    //したがってメモリ上に保存されていた""ABCD"という値が""CDEF"という値に変更されてしまっている（これはデフォルトの値を変更してしまっているので絶対NG）
    //ptr = "CDEF";
    //ptr = strで初期化した時はスタックに確保したstrというメモリの先頭アドレスをptrが保存していることになる。
    //scanf でアドレスの位置に文字の書き込みを行うのでstrとptrの両方が変更される。
    //あれだねいわゆるstr = "AAAA"とscanf("AAAA")の違いがめっちゃ重要なんだね。
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    return 0;
}