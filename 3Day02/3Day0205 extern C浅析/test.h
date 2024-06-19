//4、批量链接，添加六行内容，使用此种方式，则只需要正常在.cpp文件中包含test.h文件即可
#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
void show();
void show1();

#ifdef __cplusplus
}
#endif