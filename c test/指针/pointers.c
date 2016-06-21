#include <stdio.h>
#include <stdlib.h>
void logBytes(char* start,int size)
{
    printf("%d \n",size);
    char* currentChar=(char*)start;
    while (currentChar<start+size) {
        printf("%x  ",(char)(*currentChar));
        currentChar=(char*)((char*)currentChar+1);
    }
    printf("\n=========================\n");
}

int isBigEndian()
{
    int i = 0x1234;
    char* ptr=(char*)(&i);

    if (*ptr==0x34) {
        return 0;
    }
    return 1;
    
}


void f(void)
{
    int a[4];
    int *b = malloc(16);
    int *c;
    int i;
    
    int bigTest=0x12345678;
    char* bigTestPointer=(char*)&bigTest;
    printf("%x %x %x %s\n",bigTest,*bigTestPointer,*(bigTestPointer+1),isBigEndian()?"big endian":"little endian");

    printf("1: a = %p, b = %p, c = %p int size = %lu  char size = %lu\n", a, b, c,sizeof(int),sizeof(char));

    printf("H%x\n", 57616);
    
    c = a;
    for (i = 0; i < 4; i++)
    a[i] = 100 + i;
    c[0] = 200;
    printf("2: a[0] = %x, a[1] = %x, a[2] = %x, a[3] = %x\n",
       a[0], a[1], a[2], a[3]);
    logBytes((char*)a,4*sizeof(int));
    
    c[1] = 300;
    *(c + 2) = 301;
    3[c] = 302;
    printf("3: a[0] = %x, a[1] = %x, a[2] = %x, a[3] = %x\n",
       a[0], a[1], a[2], a[3]);
    
    printf("3:c == %p\n",c);

    c = c + 1;
    *c = 400;
    printf("4: a[0] = %x, a[1] = %x, a[2] = %x, a[3] = %x\n",
       a[0], a[1], a[2], a[3]);
    logBytes((char*)a,4*sizeof(int));
    printf("4:c == %p\n",c);

    c = (int *) ((char *) c + 1);
    *c = 500;
    printf("5: a[0] = %x, a[1] = %x, a[2] = %x, a[3] = %x\n",
       a[0], a[1], a[2], a[3]);
    logBytes((char*)a,4*sizeof(int));
    printf("5:c == %p\n",c);
    
    b = (int *) a + 1;
    c = (int *) ((char *) a + 1);
    printf("6: a = %p, b = %p, c = %p\n", a, b, c);
}

int main(int ac, char **av)
{
    f();
    return 0;
}
