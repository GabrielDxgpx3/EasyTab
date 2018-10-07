#include <gtkmm.h>

class pessoaModel : Gtk::TreeModelCulumnRecord{

	public:
		Gtk::TreeModelCulumn m_col_text;
		Gtk::TreeModelCulumn m_col_number;

		pessoaModel();

}