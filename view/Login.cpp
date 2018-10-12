#include "Login.h"
#include <iostream>
#include "view/Home.h"


Login::Login(){

	auto builder = Gtk::Builder::create();
	builder->add_from_file("../style/login.glade");

	builder->get_widget("JanelaId", window);
	builder->get_widget("btn_login", btnLogin);
	window->fullscreen();

	Home home;

	btnLogin->signal_clicked().connect( sigc::mem_fun(*this, &Login::onLogin));

}

Gtk::Window* Login::getJanela(){
	CssMain css(window, "../style/mcss.css");
	return window;
}

void Login::onLogin(){
	std::cout << "The Button was clicked." << std::endl;
}