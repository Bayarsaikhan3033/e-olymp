#include <iostream>
#include <string.h>

using namespace std;

char s[4000001];
int i, len, open, flag;

int main() {
	gets(s); len = strlen(s);
	//Обрабатываем строку, моделируем работу со стеком. Переменная open хранит
	//количество текущих незакрытых скобок (то есть количество открывающихся
	//скобок, которым еще не встретились соответствующие закрывающиеся).
	for (open = i = 0; i < len; i++)
	{
		s[i] == '(' ? open++ : open--;
		//Если число закрывающихся скобок в некоторый момент времени становится
		//больше числа открывающихся, то входная последовательность не скобочная.
		if (open < 0) flag = 1;
	}
	//В зависимости от значений переменных flag и open выводим ответ.
	//Стек будет пустым в конце обработки строки, если open = 0.
	printf(flag || open ? "NO\n" : "YES\n");
	return 0;
}
