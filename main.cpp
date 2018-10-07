#include <iostream>
#include <gtkmm.h>
#include <pessoaModel.hpp>

int main(int argc, char *argv[]){

	PessoaModel pessoa;

	auto app = Gtk::Application::create(argc, argv, "com.gtkmm.exemplo");

	auto builder = Gtk::Builder::create();

	builder->add_from_file("style.glade");

	Gtk::Window* janela = nullptr;

	builder->get_widget("janelaId", janela);

	return app->run(*janela);
}