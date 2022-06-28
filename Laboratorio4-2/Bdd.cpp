#include "Bdd.h"

using namespace std;

Bdd::Bdd() {

	this->connectionString = "datasource=localhost; username=root; password=""; database=gestoria; SslMode = none";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void Bdd::abrirConexion() {
	this->conn->Open();
} 

void Bdd::cerrarConexion() {
	this->conn->Close();
}

									//CLientes

DataTable^ Bdd::getCliente() {
	String^ sql = "select * from cliente";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDCliente() {
	String^ sql = "select ID_Cliente from cliente";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

/*void Bdd::llenarComboCliente() {
	String^ sql = "select * from cliente";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	myReader;
	try {
		conn->Open();
		myReader = cursor->ExecuteReader();

		 while (myReader->Read()) {
			String^ vIDCliente; 
			vIDCliente = myReader->GetString("ID_Cliente");
			comboIDCliente->Items->Add();
		} 
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}*/

void Bdd::insertarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ tel) {
	String^ sql = "insert into cliente(Nombre, Apellido, DNI, mail, telefono) values ('" + nom + "', '" + ap + "', '" + mail + "', '" + dni + "', '" + tel + "' )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ tel, String^ id) {
	String^ sql = "update cliente set Nombre = '" + nom + "', Apellido = '" + ap + "', DNI = '" + dni + "', mail = '" + mail + "', telefono = '" + tel + "' WHERE ID_Cliente = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarCliente(String^ nom, String^ ap, String^ mail, String^ dni, String^ tel, String^ id) {
	String^ sql = "delete from cliente where ID_Cliente = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

						//Empleados

DataTable^ Bdd::getEmpleado() {
	String^ sql = "select * from empleado";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDEmpleado() {
	String^ sql = "select ID_Empleado from empleado";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarEmpleado(String^ nom, String^ ap, String^ dni, String^ leg) {
	String^ sql = "insert into empleado(Nombre, Apellido, DNI, Legajo) values ('" + nom + "', '" + ap + "', '" + dni + "', '" + leg + "' )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarEmpleado(String^ nom, String^ ap, String^ dni, String^ leg, String^ id) {
	String^ sql = "update empleado set Nombre = '" + nom + "', Apellido = '" + ap + "', DNI = '" + dni + "', Legajo = '" + leg + "' WHERE ID_Empleado = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarEmpleado(String^ nom, String^ ap, String^ dni, String^ leg, String^ id) {
	String^ sql = "delete from empleado where ID_Empleado = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

								//Tramites

DataTable^ Bdd::getTramite() {
	String^ sql = "select * from tramite";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDTramite() {
	String^ sql = "select ID_Tramite from tramite";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^ fechaFin) {
	String^ sql = "insert into tramite(ID_Empleado, ID_Cliente, ID_Juzgado, ID_Rubro, ID_Tipo, Fecha_Inicio, Fecha_Fin) values ('" + idEmpleado + "', '" + idCliente + "', '" + idJuzgado + "', '" + idRubro + "', '" + idTipo + "', '" + fechaIni + "', '" + fechaFin + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^ fechaFin, String^ id) {
	String^ sql = "update tramite set ID_Empleado = '" + idEmpleado + "', ID_Cliente = '" + idCliente + "', ID_Juzgado = '" + idJuzgado + "', ID_Rubro = '" + idRubro + "', ID_Tipo = '"+ idTipo +"', Fecha_Inicio = '" + fechaIni +"', Fecha_Fin = '" + fechaFin +"' WHERE ID_Tramite = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^ fechaFin, String^ id) {
	String^ sql = "delete from tramite where ID_Tramite = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

								// Facturas

DataTable^ Bdd::getFactura() {
	String^ sql = "select * from factura";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDFactura() {
	String^ sql = "select ID_Factura from factura";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ valor) {
	String^ sql = "insert into factura(ID_Cliente, ID_Empleado, ID_Tramite, Fecha, Valor) values ('" + idCliente + "', '" + idEmpleado + "', '" + idTramite + "', '" + fecha + "', '" + valor + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ valor, String^ id) {
	String^ sql = "update factura set ID_Cliente = '" + idCliente + "', ID_Empleado = '" + idEmpleado + "', ID_Tramite = '" + idTramite + "', Fecha = '" + fecha + "', Valor = '" + valor + "' WHERE ID_Factura = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ total, String^ id) {
	String^ sql = "delete from factura where ID_Factura = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}


								//Jurisdicciones

DataTable^ Bdd::getJurisdiccion() {
	String^ sql = "select * from jurisdiccion";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDJurisdiccion() {
	String^ sql = "select ID_Jurisdiccion from jurisdiccion";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarJurisdiccion(String^ ciudad) {
	String^ sql = "insert into jurisdiccion(Ciudad) values ('" + ciudad + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarJurisdiccion(String^ ciudad, String^ id) {
	String^ sql = "update jurisdiccion set Ciudad = '" + ciudad + "' WHERE ID_Jurisdiccion = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarJurisdiccion(String^ ciudad, String^ id) {
	String^ sql = "delete from jurisdiccion where ID_Jurisdiccion = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

								//Registros

DataTable^ Bdd::getRegistro() {
	String^ sql = "select * from registro";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDRegistro() {
	String^ sql = "select ID_Registro from registro";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarRegistro(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono) {
	String^ sql = "insert into registro(ID_Jurisdicion, Direccion, pagina_web, telefono) values ('" + idJurisdiccion + "', '" + direccion + "', '" + pagina + "', '" + telefono + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarRegistro(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono, String^ id) {
	String^ sql = "update registro set ID_Jurisdiccion = '" + idJurisdiccion + "', Direccion = '"+ direccion +"', pagina_web = '" + pagina +"', telefono =  = '" + telefono +"' WHERE ID_Registro = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarRegistro(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono, String^ id) {
	String^ sql = "delete from registro where ID_Registro = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

								//Juzgados

DataTable^ Bdd::getJuzgado() {
	String^ sql = "select * from juzgado";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ Bdd::getIDJuzgado() {
	String^ sql = "select ID_Juzgado from juzgado";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Bdd::insertarJuzgado(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono) {
	String^ sql = "insert into juzgado(ID_Jurisdicion, Direccion, pagina_web, telefono) values ('" + idJurisdiccion + "', '" + direccion + "', '" + pagina + "', '" + telefono + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::editarJuzgado(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono, String^ id) {
	String^ sql = "update juzgado set ID_Jurisdiccion = '" + idJurisdiccion + "', Direccion = '" + direccion + "', pagina_web = '" + pagina + "', telefono =  = '" + telefono + "' WHERE ID_Juzgado = " + id + "";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Modificado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Bdd::eliminarJuzgado(String^ idJurisdiccion, String^ direccion, String^ pagina, String^ telefono, String^ id) {
	String^ sql = "delete from juzgado where ID_Juzgado = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

								//Rubros

DataTable^ Bdd::getRubroTramite() {
	String^ sql = "select descripcion from rubro";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

								//Tipos

DataTable^ Bdd::getTipoTramite() {
	String^ sql = "select Tipo_Tramite from tipo";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}