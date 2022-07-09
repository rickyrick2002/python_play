
//foo.c is a Python C extension
//func_in_bar is from Python runtime, statically built in Python interpreter or via libpython.x.so
//TODO 模拟 static built python，那就应该不link任何东西
//TODO 模拟 python3.8 以后的 c extension ，也不link任何东西
//TODO 模拟 python3.6的 c extension，foo.c也要跟shared_main.c一样，都 link libbar.c

void func_in_bar();
int xyz(int b){
    func_in_bar();
    return b + 10;
}