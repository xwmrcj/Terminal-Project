#include "TerminalProject.h"
#include "Graph.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TerminalProject w;
	w.show();
	Graph g;
	g.SelectPath(0,2);
	return a.exec();
}