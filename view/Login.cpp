#include "Login.h"

Login::Login(){

	auto builder = Gtk::Builder::create();
	builder->add_from_file("../style/login.glade");

	builder->get_widget("JanelaId", window);
	window->set_name("bglogin");
	window->fullscreen();

}

Gtk::Window* Login::getJanela(){
	CssMain css(window, "../style/mcss.css");
	return window;
}