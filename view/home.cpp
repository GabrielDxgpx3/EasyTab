#include "Home.h"

Home::Home(){

	auto builder = Gtk::Builder::create();
	builder->add_from_file("../style/main.glade");
	builder->get_widget("JanelaId", window);
	window->fullscreen();

}

Gtk::Window* Home::getJanela(){
	CssMain css(window, "../style/style.css");
	return window;
}