
// ================================================
//               * Language: C
//               * Topic: Pointer
// =================================================

// pointer example  1️⃣
// #include <stdio.h>
// int main(){
//      int age = 20 ;
//      int *ptr  = &age;
//      int _age = *ptr ;
//      printf(" Output is %d\n" , _age);
//     return 0;
// }

//    Print Address

// #include <stdio.h>
// int main()
// {
//     int age = 10;
//     int *ptr = &age;
//     int _age = *ptr;
//   //printf("Output is %p\n" ,&age );
//     printf("Output is %u\n", &ptr); //  Different
//     printf("Output is %u\n", ptr);
//     printf("Output is %u\n", &age);

//     return 0;
// }

//  Print value 
#include <stdio.h>
int main(){
int age = 12 ;
int *ptr = &age ;
int _age = *ptr;
printf("Output is : %d\n", age);
printf("Output is : %d\n" , *ptr);
printf("Output is : %d\n" , *(&age)) ;
return 0;
}


// #include <stdio.h>
// int main(){

    // return 0;
    // }
// Add pointer example 01 in C

// Emoji
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟
// 1️⃣1️⃣ 1️⃣2️⃣ 1️⃣3️⃣ 1️⃣4️⃣ 1️⃣5️⃣ 1️⃣6️⃣ 1️⃣7️⃣ 1️⃣8️⃣ 1️⃣9️⃣ 2️⃣0️⃣
// 2️⃣1️⃣ 2️⃣2️⃣ 2️⃣3️⃣ 2️⃣4️⃣ 2️⃣5️⃣ 2️⃣6️⃣ 2️⃣7️⃣ 2️⃣8️⃣ 2️⃣9️⃣ 3️⃣0️⃣