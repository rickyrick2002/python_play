#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

// void func_in_bar();
// void another_func_in_bar();

int main(){    
    //DONE: xyz应该通过dlopen来打开，dlsym来查找

    // func_in_bar();
    // another_func_in_bar();
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
    
    //DONE: 模拟shared Python runtime的话，shared_main.c link libbar.so, 从中得到 void func_in_bar();
    printf("xyz(3): %d\n", b);

}

// void func_in_bar(){
//     printf("I am a Function in bar\n");
// }

