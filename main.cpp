#include <iostream>
#include "view/Login.h"
#include "view/Home.h"

int main(int argc, char* argv[]){

	auto app = Gtk::Application::create(argc, argv, "com.gtkmm.easytab");

	Login login;
	Home home;

	return app->run(*login.getJanela());

}