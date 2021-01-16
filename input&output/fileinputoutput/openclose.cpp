#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
    // 离开作用域，os 自动析构，释放文件资源
    if(argc > 1){
        std::ofstream os{argv[1]};
    }else {
        std::string fn = "test.txt";
        std::ofstream os{fn};
    }

    // 主动打开文件资源
    // 主动关闭文件资源
    std::ofstream os;
    os.open("text.txt");
    os.close();

    // 追加模式打开文件
    os.open("qq.txt", std::ios::app);
    os.close();

    // 二进制模式打开文件
    os.open("app.bin", std::ios::binary);
    std::string data = {"hello"};
    os.write(data.data(), data.size());
    os.close();
    return 0;
}
