//13.04.2023. Payshanba
//Mavzu: "Multi dimensional array" -> (uzb) ko'p qirrali array -> (rus) mnogomerniy array.

//Assosiy Arrayda saqlanayotgan Arraylarning uzunligi har doim bir xil bo'ladi.

//Multi dimensional arrayni declare qilib ochish:
//Misol:       int arr[2][3]; -> declare -> to'g'ri.

//Multi dimensional arrayni initializa qilib ochish:
//Multi dimensional arrayni intializa qilib ochishda hech qachon
//qutilar sonini saqlab turgan arrayni ichini bo'sh qoldirib bo'lmaydi.Aks holda xatolik beradi.
//Misol:       int arr[][3] = {1,2,3} -> to'g'r.
//             int arr[][] = {1,2,3}  -> xatolik beradi.

//Qatorning ichidagi qiymatga murojat qilish:
// 1-susl - pointerda      -> *(arr+i)+j
// 2-usul - arrayni o'zida -> &arr[i][j]

//Qatorning manziliga murojat qilish:
//Multi dimensional arrayning manziliga murojat qilishda ko'proq array orqali murojat qilib ishlagan maqulroq.
// 1-usul - pointerda      -> *(*(arr+i)+j)
// 2-usul - arrayni o'zida -> arr[i][j]

//*ptr - oddiy o'zgaruvchining manzilini saqlaydi
//**ptr - oddiy o'zgaruvchining pointerini manzilini saqlaydi
//***ptr - oddiy o'zgaruvchini manzilini saqlayotgan pointerni manzilini saqlayotgan pointerning manzilini salqaydi
