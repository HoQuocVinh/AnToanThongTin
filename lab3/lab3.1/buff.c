#include <stdio.h>
//#include <unistd.h>
#include <string.h>
void wanted(){
    puts("Modified!");
}

void copy(char *arg){
    int flag=0;
    char buf[16];
    strcpy( buf, arg);
    //printf("%s\n", buf);
    if(flag!=0)
        wanted();
    else
        printf("Try again!\n");
}

int main(int argc, char **argv) {
    //char buf[] = " Hello!";
    //printf(" %s\n", buf);
    copy(argv[1]);
    return 0;
}