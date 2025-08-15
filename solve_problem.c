//  ============================================================
//                    📌 Practice Problems
//                    Topic : C Programming - Pointer
//  ============================================================

// 👉👉  🔹🔹Qu - 1️⃣
#include <stdio.h>
int main()
{
    int *ptr;
    int a;

    ptr = &a;
    *ptr = 0;                    //   Store 0 ;
    printf("a = %d\n", a);       // value of a  =  0;
    printf("*ptr = %d\n", *ptr); // value of ptr = 0;

    //    2nd part
    *ptr = *ptr + 5; // *ptr += 5 ;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);

    // 3rd part
    (*ptr)++;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);

    return 0;
}

// Emoji
// 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟
// 1️⃣1️⃣ 1️⃣2️⃣ 1️⃣3️⃣ 1️⃣4️⃣ 1️⃣5️⃣ 1️⃣6️⃣ 1️⃣7️⃣ 1️⃣8️⃣ 1️⃣9️⃣ 2️⃣0️⃣
// 2️⃣1️⃣ 2️⃣2️⃣ 2️⃣3️⃣ 2️⃣4️⃣ 2️⃣5️⃣ 2️⃣6️⃣ 2️⃣7️⃣ 2️⃣8️⃣ 2️⃣9️⃣ 3️⃣0️⃣