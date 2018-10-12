#include <iostream>
#include "view/Login.h"


int main(int argc, char* argv[]){

	auto app = Gtk::Application::create(argc, argv, "com.gtkmm.easytab");

	Login login;
	

	app->run(*login.getJanela());

	return 0;

}