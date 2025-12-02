//整个项目分为1个.h头文件，n个.c源文件，和1个主函数.c源文件main
//你们负责在各自的.c文件中include我这个.h文件，最后main函数只需要include我这个文件即可
#ifndef H_
#define H_
////一。主角属性,已在此.h文件中定义：

typedef struct {
    int energy;//精力
    int health;//健康值
    int social;//社交属性
    int press;//压力
    int intelligent;//智力
}status;
////二。修改属性的函数,返回值均为void,统一命名为"add/reduce"+"_"+"属性名"，返回值为void,参数为status和改变量change
//举两个例子,其他我就不写了
/*例子：
extern void add_energy(status s,int change){
    s.energy+=change;
}
extern void reduce_energy(status s,int change){
    s.energy-=change;
}
*/
void add_energy(status *s, int change);
void reduce_energy(status *s, int change);

void add_health(status *s, int change);
void reduce_health(status *s, int change);

void add_social(status *s, int change);
void reduce_social(status *s, int change);

void add_press(status *s, int change);
void reduce_press(status *s, int change);

void add_intelligent(status *s, int change);
void reduce_intelligent(status *s, int change);
////三。获取属性的函数,返回值为int：
int get_energy(status s);
int get_health(status s);
int get_social(status s);
int get_press(status s);
int get_intelligent(status s);

////四。画面切换，音频播放(UI负责)，需把EasyX中的API包装好
 void play_music(int i); //播放音乐，代表音频编号
 void end_music(int i);//终止播放
 void show_image(int j);
 void end_image(int j);
    //关于i和j,用两个数组分别存音频和图片
    //musics[] 和 images[],函数使用时i/j索引访问
//五。


#endif H_




