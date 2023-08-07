#define HEY 1
#ifdef HEY
int print_array(int* addr,int limit)
{
for (int i =0;i<limit;i++)
printf("%d ", *(addr+i));
}
#endif