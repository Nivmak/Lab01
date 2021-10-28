﻿#include <iostream>
#include <string>
#include "List.h"
#include "Keeper.h"
#include "Orchestra.h"
#include "Drums.h"
#include "Stringed.h"
#include "Wind.h"

int main()
{
	std::cout << "Hello World!\n";
}

/*

Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов. 
Класс Keeper должен обеспечивать следующие функции: 
	добавление и удаление производных объектов абстрактного класса Base (базовый класс определяется согласно варианту задания); 
	полное сохранение себя в файле; 
	полное восстановление себя из файла. 

	add___()
	saveToFile()
	loadFromFile()

Класс Оркестр (Base) хранит данные об инструментах: ударные, струнные, духовые.
Для ударных:	название, ФИО, производитель, стоимость, количество,	тип. 
Для струнных:	название, ФИО, производитель, стоимость, количество,	краткое текстовое описание. 
Для духовых:	название, ФИО, производитель, стоимость, количество,	какие дефекты присутствуют в инструменте (текстовое описание).

*/