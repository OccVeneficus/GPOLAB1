#pragma once
/*2.2.8.1*/
//TODO: каждое перечисление в отдельном файле
//TODO: неправильное оформление перечислений: фигурные скобки на новых строках, каждое значение на своей строке, все значения сдвинуты на одну табуляцию от объявления перечисления
enum Color { Red, Orange, Yellow, Green, Blue, LightBlue, Purple };
enum WeekDay { Sunday, Monday, Tuesdeay, Wednesday, Thursday, Friday, Saturday };
enum Genre { Comedy, Drama, Thriller, Action, Horror, BlockBuster };

/*2.2.8.2*/
enum StudyType { FullTime, Distance, Evening, Remote };
enum PhoneCompany { Samsung, Apple, Meizu, Huawei, Honor, Xiaomi };
enum Season { Spring, Summer, Autumn, Winter };

/*2.2.8*/
void DemoEnums();
void WriteColor(Color color);
Color ReadColor();
Genre ReadGenre();
void WriteGenre(Genre genre);
int CountRed(Color* color, int count);
int CountColor(Color* color, int count, Color findedColor);