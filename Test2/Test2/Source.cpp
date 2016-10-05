#include <iostream>

template <class T1>
T1 func(T1 &, T1 &);

struct box
{
	char maker[40];
	float height;
	float weight;
	float lenght;
	float volume;
};
template <> box func(box &b1, box &b2);

int main()
{
	box catbox = { "Jonny", 7, 18, 21, 57 };
	box big_catbox = { "Sailor", 17, 21, 35, 77 };

	box res = func(catbox, big_catbox);

	std::cout << res.maker << std::endl << res.volume;

	std::cin.get();

}


template <class T1>
T1 func(T1 &x, T1 &y)
{
	if (x > y)
		return x;
	else
		return y;
}

template <> box func(box &b1, box &b2)
{
	if (b1.volume > b2.volume)
		return b1;
	else
		return b2;
}