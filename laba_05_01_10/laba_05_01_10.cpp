#include <iostream>
#include <string>
#include <Windows.h>
#include "List.h"
#include "Keeper.h"
#include "Orchestra.h"
#include "Drums.h"
#include "Stringed.h"
#include "Wind.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Keeper kipper;
	int c;

	while (true)
	{
		cout << "\nМеню"
			<< "\n1.Восстановление из файла"
			<< "\n2.Добавить оркестр"
			<< "\n3.Вывод данных на экран"
			<< "\n4.Удалить оркестр"
			<< "\n5.Сохранение в файл"
			<< "\n0.Выход без сохранения\n->";
		cin >> c;

		switch (c)
		{
		case 1: {
			if (kipper.loadFromFile("save.txt"))
				cout << "\tДанные успешно загружены\n";
			else
				cout << "\tФайл не найден или повреждён\n";
			break; }
		case 2: {
			int type;
			std::string name, FIO, manufacturer, temp;
			double cost;
			size_t amount;
			cout << "\tВыбирите оркестр:\n"
				<< "\n\t1.Ударные"
				<< "\n\t2.Струнные"
				<< "\n\t3.Духовые\n\t->";
			cin >> type;
			switch (type)
			{
			case 1: {
				cout << "\tВведите стоимость: ";
				cin >> cost;
				cout << "\tВведите количество: ";
				cin >> amount;
				cout << "\tВведите название: ";
				getline(cin, name);
				getline(cin, name);
				cout << "\tВведите ФИО: ";
				getline(cin, FIO);
				cout << "\tВведите производитель: ";
				getline(cin, manufacturer);
				cout << "\tВведите тип: ";
				getline(cin, temp);
				kipper.addOrchestra(new Drums(name, FIO, manufacturer, cost, amount, temp));
				cout << "\tОркестр №" << kipper.orchestraSize() << " успешно добавлен\n";
				break; }
			case 2: {
				cout << "\tВведите стоимость: ";
				cin >> cost;
				cout << "\tВведите количество: ";
				cin >> amount;
				cout << "\tВведите название: ";
				getline(cin, name);
				getline(cin, name);
				cout << "\tВведите ФИО: ";
				getline(cin, FIO);
				cout << "\tВведите производитель: ";
				getline(cin, manufacturer);
				cout << "\tВведите краткое текстовое описание: ";
				getline(cin, temp);
				kipper.addOrchestra(new Stringed(name, FIO, manufacturer, cost, amount, temp));
				cout << "\tОркестр №" << kipper.orchestraSize() << " успешно добавлен\n";
				break; }
			case 3: {
				cout << "\tВведите стоимость: ";
				cin >> cost;
				cout << "\tВведите количество: ";
				cin >> amount;
				cout << "\tВведите название: ";
				getline(cin, name);
				getline(cin, name);
				cout << "\tВведите ФИО: ";
				getline(cin, FIO);
				cout << "\tВведите производитель: ";
				getline(cin, manufacturer);
				cout << "\tВведите дефекты: ";
				getline(cin, temp);
				kipper.addOrchestra(new Wind(name, FIO, manufacturer, cost, amount, temp));
				cout << "\tОркестр №" << kipper.orchestraSize() << " успешно добавлен\n";
				break; }
			default: cout << "\tВыбрано недопустимое значение!\n";
			}
			break; }
		case 3: {
			if (kipper.orchestraSize() == 0)
				cout << "\tОркестр отсутствует.\n";
			else
				kipper.printAll();
			break; }
		case 4: {
			if (kipper.orchestraSize() == 0)
				cout << "\tОркестр отсутствует.\n";
			else
			{
				size_t num;
				cout << "\tВыбирите Оркестр. Доступны: №"
					<< (kipper.orchestraSize() == 1 ? "" : "1 - №")
					<< (kipper.orchestraSize() == 1 ? 1 : kipper.orchestraSize())
					<< "\n\t->";
				cin >> num;
				try
				{
					kipper.deleteOrchestra(num - 1);
					cout << "\tДанные успешно удалены\n";
				}
				catch (int)
				{
					cout << "\tВыбрано недопустимое значение!\n";
				}
			}
			break; }
		case 5: {
			if (kipper.saveToFile("save.txt"))
				cout << "\tДанные успешно сохранены\n";
			else
				cout << "\tПри сохранении произошла ошибка\n";
			break; }
		case 0: {
			cout << "\t\t  Все несохраненные данные будут утеряны!"
				<< "\n\t\t  Продолжить?(1-Да / 0-Нет)\n\t\t->";
			cin >> c;
			if (c == 1) return 0; }
		}
	}
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