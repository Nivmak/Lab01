﻿#include <iostream>

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
Для ударных :	название, ФИО владельца, наименование производителя, стоимость, количество единиц в оркестре,	тип. 
Для струнных:	название, ФИО владельца, наименование производителя, стоимость, количество единиц в оркестре,	краткое текстовое описание. 
Для духовых :	название, ФИО владельца, наименование производителя, стоимость, количество единиц в оркестре,	какие дефекты присутствуют в инструменте (текстовое описание).

*/