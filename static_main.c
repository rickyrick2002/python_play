#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

void func_in_bar();

int main(){    
    //DONE: xyz应该通过dlopen来打开，dlsym来查找
    void* libHandle = dlopen("./libfoo.so", RTLD_LAZY);
    if(libHandle == NULL){
        printf("dlopen:%s", dlerror());
        exit(1);
    }
    int(*xyz)(int);
    xyz = (int(*)(int)) dlsym(libHandle, "xyz");
    if(xyz == NULL){
        printf("dlsym:%s", dlerror());
        exit(1);
    }
    int b = xyz(3);
    
    
    printf("xyz(3): %d\n", b);

}

//DONE: 模拟static Python runtime的话，void func_in_bar(); 直接定义在main.c
void func_in_bar(){
    printf("I am a Function in bar\n");
}

