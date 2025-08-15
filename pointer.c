
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

