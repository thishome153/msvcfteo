========================================================================
    APPLICATION : FteoMap6/DbClient Project Overview 2015-2016-2017
========================================================================
Реинкарнация FTEO в C++.
Зависимости  - NET 3.5, Firebird 2.5x(client), IBPP, SOCI


/////////////////////////////////////////////////////////////////////////////
Очень сильно нарвался на RootNameSpace для проекта.
Все новые формы создаются в этом пространстве и далее следуют проблемы с ресурсами,
которые названы не так!
ВВодим чужую форму как header файл, меняем namespace и тоlько потом меняем
тип с Header на c+++- Form


/////////////////////////////////////////////////////////////////////////////
AssemblyInfo.cpp Contains custom attributes for modifying assembly metadata.

/////////////////////////////////////////////////////////////////////////////
Other standard files:
StdAfx.h, StdAfx.cpp     These files are used to build a precompiled header (PCH) file
    named DbClient.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Firebird
Скомпилить firebird:

В Linker\Input\AdditionalDependecncies\fbclient_ms.lib

IBPP 
Библиотека простая, но так и не выснил отказ линковки ibpp.obj (семь ошибок линкера). 
Пересыпал формы в новый CLR проект и все решено.

SOCI
Страшная библиотека, и не простая. Требует CMAKE , перекомпиляцию MSVStudio

 win32++
 Обертки  winapi. Пока все прозрачно. Из него слепим EsViewer.


/////////////////2017: SDKSolution: 
Библиотека ibpp		- выведена в статическую бибилотеку ibpp.lib
Базовые классы,CPL  - выведена в статическую бибилотеку corefteo.lib
Окно EsViewer		- выведена в статическую бибилотеку win32wrapper.lib

/////////////////
180117:
	Новые грабли fteomap6 - debug assertions failed... Компилится, но не запускается
	Вывод - ibpp должна быть скомпилирована с /clr. И все!!!