//Ответы на вопросы для самоконтроля

#include <iostream>
#include <string>
                             /* 

void iquote(int);           Переегрузка iquote 8.1
void iquote(double);
void iquote(std::string);  */

template<class T1, class T2>
auto func(T1 x, T2 y)->double;

struct box
{
	char maker[40];
	float height;
	float widht;
	float lenght;
	float volume;
};
                                  /*
void func_box_edit(box &);           8.2
void func_box_view(const box &);
                                    */



int main(void)
{                               /*
	int i = 1;
	double d = 11.7;
	std::string s = "String";      Переегрузка iquote 8.1

	iquote(i);
	iquote(d);
	iquote(s);                 */

	box catbox
	{ "Jonny", 7.7, 7.5, 17.0, 0.0 };

	//func_box_edit(catbox); 
	//func_box_view(catbox);  
	int x = 17;
	double y = 27.7;

	double res = func(x, y);

	std::cout << res;
	std::cin.get();

}
                                                   /*
void iquote(int i)                               
{
	std::cout << "\"" << i << "\"\n";
}
void iquote(double d)
{                                                    Переегрузка iquote 8.1
	std::cout << "\"" << d << "\"\n";
}
void iquote(std::string s)
{
	std::cout << "\"" << s << "\"\n";
}                                                 */
                                                                                                                                  /*
void func_box_view(const box &bx)
{
	std::cout << bx.maker << std::endl << bx.height << std::endl << bx.lenght << std::endl << bx.widht << std::endl << bx.volume;                 8.2
}
void func_box_edit(box &bx)
{
	bx.volume = bx.height*bx.lenght*bx.widht;
}
                                                                                                                                           */
template<class T1, class T2>
auto func(T1 x, T2 y)->double
{
	if (x > y)
		return x;
	else
		return y;
}