========================================================================
    APPLICATION : FteoMap6/DbClient Project Overview 2015-2016-2017
========================================================================
������������ FTEO � C++.
�����������  - NET 3.5, Firebird 2.5x(client), IBPP, SOCI


/////////////////////////////////////////////////////////////////////////////
����� ������ �������� �� RootNameSpace ��� �������.
��� ����� ����� ��������� � ���� ������������ � ����� ������� �������� � ���������,
������� ������� �� ���!
������ ����� ����� ��� header ����, ������ namespace � ��l��� ����� ������
��� � Header �� c+++- Form


/////////////////////////////////////////////////////////////////////////////
AssemblyInfo.cpp Contains custom attributes for modifying assembly metadata.

/////////////////////////////////////////////////////////////////////////////
Other standard files:
StdAfx.h, StdAfx.cpp     These files are used to build a precompiled header (PCH) file
    named DbClient.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Firebird
���������� firebird:

� Linker\Input\AdditionalDependecncies\fbclient_ms.lib

IBPP 
���������� �������, �� ��� � �� ������ ����� �������� ibpp.obj (���� ������ �������). 
��������� ����� � ����� CLR ������ � ��� ������.

SOCI
�������� ����������, � �� �������. ������� CMAKE , �������������� MSVStudio

 win32++
 �������  winapi. ���� ��� ���������. �� ���� ������ EsViewer.


/////////////////2017: SDKSolution: 
���������� ibpp		- �������� � ����������� ���������� ibpp.lib
������� ������,CPL  - �������� � ����������� ���������� corefteo.lib
���� EsViewer		- �������� � ����������� ���������� win32wrapper.lib

/////////////////
180117:
	����� ������ fteomap6 - debug assertions failed... ����������, �� �� �����������
	����� - ibpp ������ ���� �������������� � /clr. � ���!!!