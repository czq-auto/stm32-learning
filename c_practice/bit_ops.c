#include<stdio.h>
int main(){
    unsigned char v=0x0C;
    /*1.置位：把0位置1*/ 
    v|=(1<<0);
    printf("置位后v=0x%02X\n", v);/*0x0D*/
    /*2.清位：把第0位清0 */
    v&=~(1<<0);
    printf("清位后v=0x%02X\n", v);/*0x0C*/
    /*3.取反：第7位置1*/
    v|=(1<<7);
    printf("第7位置1:0x%02X\n",v);/*0x8C*/
    /*4.判断第2位是否为1*/
    if(v&(1<<2)){
        printf("第2位是1\n");/*输出这句*/
    }else{
        printf("第2位是0\n");
    }
    return 0;
}