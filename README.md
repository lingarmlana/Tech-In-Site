# TechInSite
Модуль для Drupal 7. Выводит на сайт информацию из прикладной программы с базой данных на SQLite3
В коде нет ООП, потому что в Drupal есть Entity.

Для подключения второй БД данных нужно прописать настроки /sites/default/settings.php
$databases = array (
	'default' => 
		array (
			'default' => 
			/*Здесь настройки основной БД сайта*/
			),
		),
	'sqlite' =>
		array (
			'default' =>
			array (
//			'database' => 'sqlite.db', //Путь к файлу БД
				'driver' => 'sqlite',
				'prefix' => '',
			),
		),
	);
